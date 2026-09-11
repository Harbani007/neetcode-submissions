class Solution {
public:
int atMost(vector<int>& nums,int k){
    int n=nums.size();
        int i=0;
        int count=0;
        map<int,int>freq;
        for(int j=0;j<n;j++){
            if(freq[nums[j]]==0){
                k--;
            }
            freq[nums[j]]++;
            while(k<0){
                freq[nums[i]]--;
                if(freq[nums[i]]==0){
                    k++;
                }
                i++;
            }
            count+=(j-i+1);
        }
        return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};