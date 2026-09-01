class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> soln(nums.size());
        soln[0]=nums[0];
        for(int i=1;i<nums.size();++i){
            soln[i]=soln[i-1]+nums[i];
        }
        return soln;
        
    }
};