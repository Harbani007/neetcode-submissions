class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ans=INT_MIN;   //jiska max hoke value store hogi toh isko min rkho
        int i=0; int j=0; int sum=0;  //sum mei jo bhi value add hogi, woh zero mein hogi
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1==k){
                ans=max(ans,sum);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return double(ans)/k;
    }
};