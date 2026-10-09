class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        //boyre moore voting
        int n=nums.size();
        int canda; 
        int cnta=0;
        for(int i=0;i<n;++i){
            if(cnta==0){
                canda=nums[i];
                cnta++;
            }
            else if(canda==nums[i]){
                cnta++;
            }
            else{
                cnta--;
            }
        }

        //verification
        //check for subarray

        //no need of maps
        // unordered_map<int,int> n1;
        // unordered_map<int,int> n2;
        int cnt2=0; int cnt1=0;
        int leftlen=0;
        int rightlen=0;


        for(int i=0;i<n;i++){
            // n1[nums[i]]++;
            if(nums[i]==canda) cnt2++;
            
        }
        for(int i=0;i<n;i++){
            if(nums[i]==canda) {
                cnt1++;
                cnt2--;
            }
            // n2[nums[i]]++;
            // n1[nums[i]]--;
            leftlen=i+1;
            rightlen=n-i-1;


            if(cnt1*2>leftlen && cnt2*2>rightlen){
                return i;
            }
        }

        return -1;

    }
};