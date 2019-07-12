/*
Fernando Corral
Wallbreakers
cohort 3
Most Common Word
*/
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(int x = 0; x < paragraph.size(); x++){
            if((int(paragraph[x]) >= 65 && int(paragraph[x]) <= 90) || (int(paragraph[x]) >= 97 && int(paragraph[x]) <= 122)){
                paragraph[x] = tolower(paragraph[x]);
            }
            else{
                paragraph[x] = ' ';
            }
        }
        multiset<string> words;
        int num = 0;
        for(int x = 1; x <= paragraph.size(); x++){
            if(paragraph[x-1] == ' '){
                if(paragraph.substr(num,x - num-1) != ""){
                    words.insert(paragraph.substr(num,x - num-1));
                }
                num=x;
            }
            else if(x == paragraph.size()){
                words.insert(paragraph.substr(num,x - num));
                num=x;
            }
        }
        for(auto i: banned){
            words.erase(i);
        }
        string frequent;
        for(auto i: words){
            if( words.count(i) > words.count(frequent)){
                frequent = i;
            }
        }
        return frequent;
    }
};
