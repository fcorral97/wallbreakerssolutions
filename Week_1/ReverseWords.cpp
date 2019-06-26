/*
Fernando Corral
Wall Breakers
Cohort 3
Reverse Words
*/
class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        for(int x = 0; x < s.size(); x++){
            if(s[x] == ' '){
                end = x;
                reverse(s.begin()+start,s.begin()+end);
                start = x +1;
            }
            if(x == (s.size()-1)){
                reverse(s.begin()+start,s.end());
            }
        }
        return s;
    }
};
