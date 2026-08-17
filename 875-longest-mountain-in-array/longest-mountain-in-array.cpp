class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int left,right; int max_len=0; //int cnt=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                //cnt=1;//peak included
                left=right=i;
                while(left>0 && arr[left]>arr[left-1]){
                    left--;
                    //cnt++;
                }
                while(right<arr.size()-1 &&arr[right]>arr[right+1]){ 
                    right++;
                    //cnt++;
                }
                max_len=max(right-left+1,max_len);
            }
            // max_len=max(cnt,max_len);
        }
        return max_len;
    }
    
};