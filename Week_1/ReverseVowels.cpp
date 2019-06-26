/*
Fernando Corral
Wallbreakers
corhort 3
Reverse Vowels
*/
class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size() -1;
        while(start < end){
            if(s[start] == 'A'|| s[start] == 'E' || s[start] == 'I'|| s[start] == 'O' || s[start] == 'U' ||s[start] == 'a'|| s[start] == 'e' || s[start] == 'i'|| s[start] == 'o' || s[start] == 'u'){
                if(s[end] == 'A'|| s[end] == 'E' || s[end] == 'I'|| s[end] == 'O' || s[end] == 'U' ||s[end] == 'a'|| s[end] == 'e' || s[end] == 'i'|| s[end] == 'o' || s[end] == 'u'){
                    char c = s[end];
                    s[end] = s[start];
                    s[start] = c;
                    start++;
                    end--;
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }
        return s;
    }
};
