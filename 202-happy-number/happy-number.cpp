class Solution {
public:
    bool isHappy(int n) {
        map<int,int>seen;
        while(n!=1){
            if(seen.find(n)!=seen.end()){
                return false;
            }
            seen[n]=1;
            int sum=0;
            while(n!=0){
                int b=n%10;
                sum+=(b*b);
                n/=10;
            }
            n=sum;
        }
        return true;
    }
};