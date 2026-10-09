class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                mp[nums[i]]++;
            }
        }

        int answer = -1;
        int bestCount = 0;

        for (auto entry : mp) {
            int number = entry.first;
            int count = entry.second;

            if (count > bestCount ||
                (count == bestCount && number < answer)) {
                answer = number;
                bestCount = count;
            }
        }

        return answer;
    }
};