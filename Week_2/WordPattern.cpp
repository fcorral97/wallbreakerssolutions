/*
Fernando Corral
WallBreakers
Cohort 3
Word Pattern
*/
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        str += ' ';
        map<char, string> dictChar;
        map<string, char> dictWord;
        int charNum = 0;
        int start = 0;
        for(int end = 0; end < str.size(); end++){
            if(str[end] == ' '){
                if(dictChar[pattern[charNum]] == "" & dictWord[str.substr(start,end - start)] == NULL){
                    dictChar[pattern[charNum]] = str.substr(start,end - start);
                    dictWord[str.substr(start,end - start)] = pattern[charNum];
                }
                else if(dictChar[pattern[charNum]] != str.substr(start,end - start) || dictWord[str.substr(start,end - start)] != pattern[charNum]){
                    return false;
                }
                charNum++;
                start = end + 1;
            }
        }
        if(charNum != pattern.size()){
            return false;
        }
        return true;
    }
};
