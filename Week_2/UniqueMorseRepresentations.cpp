/*
Fernando Corral
Wall Breakers
Cohort 3
Unique Morse Representations
*/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int solution = 0;
        map<string, bool> exists;
        string mAlpha[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto i: words){
            string morse;
            for(auto y: i){
                morse += mAlpha[int(y)-97];
            }
            if(!exists[morse]){
                solution ++;
                exists[morse] = true;
            }
        }
        return solution;
    }
};
