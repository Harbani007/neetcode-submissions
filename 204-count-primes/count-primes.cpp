class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<char>isprime(n,1);
        isprime[0]=isprime[1]=0;

        int count=n-2;
        for(int i=2;i*i<n;i++){
            if(isprime[i]==1){
                for(int j=i*i;j<n;j+=i){
                    if(isprime[j]==1){
                        isprime[j]=0;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};