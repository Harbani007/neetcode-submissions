class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> soln;
        for(int i=0;i<nums.size()-2;i++){
            //after the first position, duplicates ke liye check krna
             if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left=i+1, right=nums.size()-1;
            while(left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    soln.push_back({nums[i],nums[left],nums[right]});
                    left++;right--;

                
//abhi joh left and right ko move kiy ahai aapne, please check if that happens to go onto duplicate values again
                //skip duplicate left values
                    while (left < right &&
                           nums[left] == nums[left - 1]) {
                        left++;
                    }

                    // Skip duplicate right values
                    while (left < right &&
                           nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
                else if(nums[left]+nums[right]<(-nums[i])){
                    left++;
                }
                else right--;
            }
        }
        return soln;

    }
};



// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         vector<vector<int>> soln;
//         int n = nums.size();

//         for (int i = 0; i < n - 2; i++) {

//             // Skip duplicate fixed elements
//             if (i > 0 && nums[i] == nums[i - 1]) {
//                 continue;
//             }

//             int left = i + 1;
//             int right = n - 1;

//             while (left < right) {
//                 int sum = nums[i] + nums[left] + nums[right];

//                 if (sum == 0) {
//                     soln.push_back({
//                         nums[i],
//                         nums[left],
//                         nums[right]
//                     });

//                     left++;
//                     right--;

//                     // Skip duplicate left values
//                     while (left < right &&
//                            nums[left] == nums[left - 1]) {
//                         left++;
//                     }

//                     // Skip duplicate right values
//                     while (left < right &&
//                            nums[right] == nums[right + 1]) {
//                         right--;
//                     }
//                 }
//                 else if (sum < 0) {
//                     left++;
//                 }
//                 else {
//                     right--;
//                 }
//             }
//         }

//         return soln;
//     }
// };