/*
Fernando Corral
Wall Breakers
Cohort 3
Uncommon From Sentences
*/
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> exists;
        vector<string> uncommon;
        int start = 0;
        for(int x = 0; x < A.size(); x++){
            if(A[x] == ' '){
                if(exists[A.substr(start,x - start)] != 1 & exists[A.substr(start,x - start)] != 2){
                    exists[A.substr(start,x - start)] = 1;
                }
                else if(exists[A.substr(start,x - start)] == 1){
                    exists[A.substr(start,x - start)] = 2;
                } 
                start = x + 1;
            }
            if(x == A.size() -1){
                if(exists[A.substr(start,x - start + 1)] != 1 & exists[A.substr(start,x - start + 1)] != 2){
                    exists[A.substr(start,x - start + 1)] = 1;
                }
                else if(exists[A.substr(start,x - start + 1)] == 1){
                    exists[A.substr(start,x - start + 1)] = 2;
                } 
            }
        }
        start = 0;
        for(int x = 0; x < B.size(); x++){
            if(B[x] == ' '){
                if(exists[B.substr(start,x - start)] != 1 & exists[B.substr(start,x - start)] != 2){
                    exists[B.substr(start,x - start)] = 1;
                }
                else if(exists[B.substr(start,x - start)] == 1){
                    exists[B.substr(start,x - start)] = 2;
                } 
                start = x + 1;
            }
            if(x == B.size() -1){
                if(exists[B.substr(start,x - start + 1)] != 1 & exists[B.substr(start,x - start + 1)] != 2){
                    exists[B.substr(start,x - start + 1)] = 1;
                }
                else if(exists[B.substr(start,x - start + 1)] == 1){
                    exists[B.substr(start,x - start + 1)] = 2;
                } 
            }
        }
        for(auto [key, value]: exists){
            if(value == 1){
                uncommon.push_back(key);
            }
        }
        return uncommon;
    }
};
