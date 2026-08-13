class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = 9;
        int col = 9;
        set<int> st;
        set<int> st1;
        int i = 0;
        int j = 0;
        for (int i = 0; i < 9; i++) {
                st.clear();
            for ( int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;
                if (st.find(board[i][j]) != st.end()){
                    return false;
                }
                else
                    st.insert(board[i][j]);
            }
        }

        for (int i = 0; i < row; i++) {
            st1.clear();
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.')
                    continue;
                if (st1.find(board[j][i]) != st1.end()){
                
                    return false;
            }
                else{
                    st1.insert(board[j][i]);
                }
            }
        }
for(int row = 0 ;row<9;row+=3){
    for(int col = 0 ;col<9;col+=3){
            st.clear();
        for(int i = row ;i<row+3;i++){
            for(int j = col ;j<col+3;j++){
                if (board[i][j] == '.')
                    continue;
                if (st.find(board[i][j]) != st.end()){
                    return false;
                }
                else
                    st.insert(board[i][j]);
            }
        }
        
    }
}

        return true;
    }
};