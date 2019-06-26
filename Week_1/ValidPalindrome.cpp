/*
Fernando Corral
Wall Breakers
Cohort 3
Valid Palindrome
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string solution;
        for(int x = 0; x < s.size(); x++){
            if(int(s[x]) >= int('A') & int(s[x]) <= int('Z')){
                solution.push_back(s[x]);
            }
            if(int(s[x]) >= int('a') & int(s[x]) <= int('z')){
                solution.push_back(char(int(s[x])-32));
            }
            if(int(s[x]) >= int('0') & int(s[x]) <= int('9') ){
                solution.push_back(s[x]);
            }
        }
        cout << solution;
        for(int x = 0; x < solution.size()/2; x++){
            if(solution[x] != solution[(solution.size()-1)-x]){
                return false;
            }
        }
        return true;
       
    }
};
