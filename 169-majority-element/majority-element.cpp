class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int candidate;
        for(int i=0;i<n;++i){
            if(cnt==0) candidate=nums[i];

            if(candidate==nums[i]) cnt++;

            else cnt--;
        }
        return candidate;
        
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size()/2;
//         unordered_map<int,int> freq;
//         for(auto i:nums){
//             if(freq[i]>= n) return i;
//             freq[i]++;
//         }
//         return -1;
//     }
// };