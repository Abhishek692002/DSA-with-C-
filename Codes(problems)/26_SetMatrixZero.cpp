#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int rows, int cols, int i)
{
    for (int j = 0; j < cols; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int rows, int cols, int j)
{
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
vector<vector<int>> zeroMatrix_BruteForce(vector<vector<int>> &matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                markRow(matrix, rows, cols, i);
                markCol(matrix, rows, cols, j);
            }
        }
    }

    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols;j++){
            if(matrix[i][j]==-1){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

vector<vector<int>> zeroMatrix_Better(vector<vector<int>> &matrix,int row,int col){
    int rowArray[row] = {0};
    int colArray[col] = {0};

    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(matrix[i][j]==0){
                rowArray[i] = 1;
                colArray[j] = 1;
            }
        }
    }

    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(rowArray[i]||colArray[j]){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

vector<vector<int>> zeroMatrix_Optimal(vector<vector<int>> &matrix,int row,int col){
    int col0 = 1;
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                if(j!=0){
                    matrix[0][j] = 0;
                }else{
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if(matrix[0][0]==0){
        for (int j = 0; j < col;j++){
            matrix[0][j] = 0;
        }
    }

    if(col0==0){
        for (int i = 0; i < row;i++){
            matrix[i][0] = 0;
        }
    }

    return matrix;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1,1,0,1},{0,1,1,1}};
    int rows = matrix.size();
    int cols = matrix[0].size();

    // vector<vector<int>> ans = zeroMatrix_BruteForce(matrix, rows, cols);
    // vector<vector<int>> ans = zeroMatrix_Better(matrix, rows, cols);
    vector<vector<int>> ans = zeroMatrix_Optimal(matrix, rows, cols);

    for(auto it:ans){
        for(auto ele:it){
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}