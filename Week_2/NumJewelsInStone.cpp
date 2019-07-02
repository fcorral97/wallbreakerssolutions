/*
Fernando Corral
Wall Breakers
Cohort 3
Num Jewels In Stones
*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int solution = 0;
        map<char, bool> characters;
        for(char i: J){
            characters[i] = true;
        }
        for(char i: S){
            if(characters[i]){
                solution++;
            }
        }
        return solution;
    }
};
