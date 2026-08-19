static std::array<int, 5000001> LUT = []() {
    std::array<int, 5000001> prime = {};
    for(int k=2; k*k<5000001; k++) if(prime[k]==0) for(int i=k*2; i<5000001; i+=k) prime[i]=1;
    for(int k=2,c=0; k<5000001; k++) prime[k] = (prime[k]==0)?c++:c;
    return prime;
}();

class Solution {
public:
    
    static inline int countPrimes(const int n) {
        return LUT[n];
    }
};

// class Solution {
// public:
//     int countPrimes(int n) {
//         if(n<=2){
//             return 0;
//         }
//         vector<char>isprime(n,1);
//         isprime[0]=isprime[1]=0;

//         int count=n-2;
//         for(int i=2;i*i<n;i++){
//             if(isprime[i]==1){
//                 for(int j=i*i;j<n;j+=i){
//                     if(isprime[j]==1){
//                         isprime[j]=0;
//                         count--;
//                     }
//                 }
//             }
//         }
//         return count;
//     }
// };