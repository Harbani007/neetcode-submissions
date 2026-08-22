class Solution {
public:
    bool isvowel(char c){
        return string("aeiouAEIOU").find(c)!=string::npos;
    }

    int maxVowels(string s, int k) {
        string part=""; int cnt=0;int ans=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){ cnt++;}
            part+=i;
        }
        ans=cnt;
        for(int i=k;i<s.size();i++){
            part+=s[i];
            if(isvowel(s[i-k])){ cnt--;}
            if(isvowel(s[i])){ cnt++;}
            ans=max(ans,cnt);
        }
        
        return ans;
    }
};

