class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
      
        // dp[i][k] represents whether we can reach stone i with last jump of k units
        // -1: not computed, 0: false, 1: true
        vector<vector<int>> dp(n, vector<int>(n, -1));
      
        // Map stone position to its index for O(1) lookup
        unordered_map<int, int> stoneToIndex;
        for (int i = 0; i < n; ++i) {
            stoneToIndex[stones[i]] = i;
        }
      
        // DFS with memoization
        // currentIndex: current stone index
        // lastJumpSize: the jump size used to reach current stone
        function<bool(int, int)> dfs = [&](int currentIndex, int lastJumpSize) -> bool {
            // Base case: reached the last stone
            if (currentIndex == n - 1) {
                return true;
            }
          
            // Return memoized result if already computed
            if (dp[currentIndex][lastJumpSize] != -1) {
                return dp[currentIndex][lastJumpSize];
            }
          
            // Try jumps of size k-1, k, k+1 where k is the last jump size
            for (int nextJumpSize = lastJumpSize - 1; nextJumpSize <= lastJumpSize + 1; ++nextJumpSize) {
           
                if (nextJumpSize > 0) {
                    int nextPosition = stones[currentIndex] + nextJumpSize;
                  
                   
                    if (stoneToIndex.count(nextPosition)) {
                        int nextIndex = stoneToIndex[nextPosition];
                        if (dfs(nextIndex, nextJumpSize)) {
                            return dp[currentIndex][lastJumpSize] = 1;
                        }
                    }
                }
            }
          
        
            return dp[currentIndex][lastJumpSize] = 0;
        };
      
       
        return dfs(0, 0);
    }
};
