class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        // str.cmp(s,t)==0
        return (s.compare(t)==0);
    }
};

//sizeof("harbani")=8