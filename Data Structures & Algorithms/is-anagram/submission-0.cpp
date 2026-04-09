class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> firstword;
        map<char, int> secondword;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i < s.size();i++){
            firstword[s.at(i)]++;
            secondword[t.at(i)]++;
        }

        return true ? firstword == secondword : false;
    }
};
