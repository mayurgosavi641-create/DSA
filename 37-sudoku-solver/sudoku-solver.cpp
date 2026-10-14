class Solution {
public:
bool issafe(vector<vector<char>>& board,int row,int col,char dig){
for(int i=0;i<9;i++){
    if(board[i][col]==dig){
        return false;
    }
}
for(int j=0;j<9;j++){
    if(board[row][j]==dig){
        return false;
    }
}
int srow=(row/3)*3;
int scol=(col/3)*3;
for(int i=srow;i<srow+3;i++){
    for(int  j=scol;j<scol+3;j++){
        if(board[i][j]==dig){
            return false;
        }
    }
}
return true;
}
    bool sudoku(vector<vector<char>>& board,int row, int col){
        //Base Case: if row value exceeds 9 then function is at end hence return true
        if (row==9){
            return true;
        }
        
        int nextrow=row;
        int nextcol=col+1;
        if(col==9){
            //if column value is at last index then start with next row and hence the column value starts from idx 0
            nextrow=row+1;
            nextcol=0;
        }
       //Base case : if current value on board not equal to . then only return true;
            if(board[row][col]!='.'){
               return sudoku(board,nextrow,nextcol);
            }
            //initialize dig from 1 to 9 to fill 
         for(char dig='1';dig<='9';dig++){
            //if current grid is safe that is not equal to '.'
            if (issafe(board,row,col,dig)){
                //try to fill dig from 1 
                board[row][col]=dig;
                //if next elements on board is equal to second base case then return true
               if( sudoku(board,nextrow,nextcol)){
                return true;
               }
               //if all the digit are not safe then for recursive call make current grid equal to '.'
            
            board[row][col]='.';
            }
         }
         return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
      
       sudoku(board,0,0);
            
        
    }
};