/*
Fernando Corral
Wallbreakers
Cohor 3
Flip and Invert Image
*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int x = 0; x < A.size(); x++){
            reverse(A[x].begin(), A[x].end());
        }
        for(int x = 0; x < A.size(); x++){
            for(int y= 0; y < A[x].size(); y++){
                if(A[x][y] == 1){
                    A[x][y] = 0;
                }
                else{
                    A[x][y] = 1;
                }
            }
        }
        return A;
    }
};
