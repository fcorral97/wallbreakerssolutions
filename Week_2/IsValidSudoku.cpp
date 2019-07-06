/*
Fernando Corral
WallBreakers
Cohort 3
Is Valid Sudoku
*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int x = 0; x < board.size(); x++){
            map<char, bool> row;
            map<char, bool> column;
            for(int y = 0; y < board.size(); y++){
                if(column[board[x][y]] != true & board[x][y] != '.'){
                    column[board[x][y]] = true;
                }
                else if(column[board[x][y]] == true){
                    return false;
                }
                if(row[board[y][x]] != true & board[y][x] != '.'){
                    row[board[y][x]] = true;
                }
                else if(row[board[y][x]] == true){
                    return false;
                } 
            }
        }
        for(int x = 0; x < board.size(); x+= 3){
            for(int y = 0; y < board.size(); y+= 3){
                map<char, bool> box;
                for(int row = x; row < x + 3; row++) {
                    for(int col = y; col < y + 3; col++) {
                        if(board[row][col]!='.'){
                            if(box[board[row][col]]){
                                return false;
                            }
                            box[board[row][col]] = true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
