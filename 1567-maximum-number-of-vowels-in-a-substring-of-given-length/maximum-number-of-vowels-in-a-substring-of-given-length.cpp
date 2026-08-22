class Solution {
public:
        inline bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
       
        
        int count=0;
        int max_count=0;
        for(int i =0;i<k;i++){
            count +=isVowel(s[i]);
        }
        max_count=count;
        if (max_count == k) return k;
        for(int i =k;i<s.size();i++){
            count += isVowel(s[i])-isVowel(s[i-k]);
            if(count>max_count){
                max_count=count;
            }
            
        }
        return max_count;
    }
};






// class Solution {
// public:
//     bool isvowel(char c){
//         return string("aeiouAEIOU").find(c)!=string::npos;
//     }

//     int maxVowels(string s, int k) {
//         int cnt=0;int ans=0;  //string part="";
//         for(int i=0;i<k;i++){
//             if(isvowel(s[i])){ cnt++;}
//             //part+=s[i];
//         }
//         ans=cnt;
//         for(int i=k;i<s.size();i++){
//             //part+=s[i];
//             if(isvowel(s[i-k])){ cnt--;}
//             if(isvowel(s[i])){ cnt++;}
//             ans=max(ans,cnt);
//         }
        
//         return ans;
//     }
// };

