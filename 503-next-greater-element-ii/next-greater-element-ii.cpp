// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         stack<int>st;
//         int n=nums.size();
//         vector<int>ans(n,-1);
//         for(int i=2*n-1;i>=0;i--){
//             int curr=nums[i%n];
//             while(!st.empty()&&st.top()<=curr){
//                 st.pop();
//             }
//             if(i<n&&!st.empty()){
//                 ans[i]=st.top();
//             }
//             st.push(curr);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
   stack<int> st; int n= nums.size();
    vector<int> ans(n);
    
    for( int i=2*n-1; i>=0; i--){
        while(!st.empty() && st.top()<= nums[i%n]){
            st.pop();
        }
       if(i<n){
       ans[i]= st.empty()?-1:st.top();
       }
       st.push(nums[i%n]);
    }
    return ans;
    }
};