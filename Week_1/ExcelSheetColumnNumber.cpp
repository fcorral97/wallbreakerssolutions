/*
Fernando Corral
Wall Breakers
Cohort 3
Excel Sheet Column Number
*/
class Solution {
public:
    int titleToNumber(string s) {
    /*
      This is a Number system utilizing 25 characters.
      Each leading digit is the char represented by there corresponding decimal value,
      multimplied by 26 to power of its place. Similar to binary and hex systems
     */
        int n = 0;
        for(int x = 0; x < s.size(); x++){
            n += (int(s[x])-64)*pow(26,(s.size()-x-1));
        }
        return n;
    }
};
