class Solution {
public:
    int solve(int n, vector<int>& arr) {
        if(n<=3) return n;
        if(arr[n]!=0) return arr[n];
        return arr[n]=solve(n-1, arr)+ solve(n-2, arr);
    }

    int climbStairs(int n) {
        vector<int> arr(n+1,0);
        return solve(n,arr);
    }
};