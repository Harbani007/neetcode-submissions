class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candA=0; int candB=0;
        int cntA=0; int cntB=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(candA==nums[i]) cntA++;
            else if(candB==nums[i]) cntB++;
            else if (cntA==0){
                cntA=1;
                candA=nums[i];
            }
            else if (cntB==0){
                cntB=1;
                candB=nums[i];
            }
            else{
                cntA--;
                cntB--;
            }
        }

        ///FOR ACTUAL FREQUENCY 
        cntA=0; cntB=0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == candA) {
                cntA++;
            } else if (nums[i] == candB) {
                cntB++;
            }
        }

        vector<int>result;
        if(cntA>n/3)
        result.push_back(candA);

        if(cntB>floor(n/3))
        result.push_back(candB);

        return result;
    }
};