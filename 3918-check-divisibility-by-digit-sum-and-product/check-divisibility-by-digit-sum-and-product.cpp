class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int x=n;
        while(n!=0){
            s+=n%10;
            p*=n%10;
            n/=10;
        }
        int ans=s+p;
        if(x%ans==0) return true;
        else return false;
    }
};