class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int oddcount=0;
        int count=0;
        int temp=0;
        while(j<n){
            if(nums[j]%2!=0){
                oddcount++;
                temp=0;
            }
            while(oddcount==k){
                temp++;
                if(nums[i]%2!=0){
                    oddcount--;
                }
                i++;
            }
            count+=temp;
            j++;
        }
        return count;
    }
};