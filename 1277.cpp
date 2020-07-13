class Solution {
public:
    int Min(int a,int b){
        if(a > b)
            return b;
        else
            return a;
    }
    
    int countSquares(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        int sum =0;
        
        vector<vector<int>>DP(row,vector<int>(column,0));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==1){
                    DP[i][j] = 1;
                    if(i>0 && j>0){
                        DP[i][j] = Min(DP[i-1][j],Min(DP[i][j-1],DP[i-1][j-1])) + 1;
                    }
                    sum+=DP[i][j];
                }
            }
        }
        return sum;
    }
};
