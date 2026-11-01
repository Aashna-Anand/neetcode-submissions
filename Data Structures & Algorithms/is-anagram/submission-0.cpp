class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f1,f2;
        for(char ch:s){
            f1[ch]++;
        }
        for(char ch:t){
            f2[ch]++;
        }
        if(f1==f2){
            return true;
        }
        return false;

    }
};
