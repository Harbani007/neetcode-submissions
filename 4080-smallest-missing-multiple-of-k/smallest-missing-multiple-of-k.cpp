class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st(nums.begin(),nums.end());
        int i=1;
        while(st.find(k*i)!=st.end()){
            i++;
        }
        return k*i;
    }
};