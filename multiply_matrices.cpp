#include <iostream>
using namespace std;

void multiply_matrices(int matrix[][3], int matrix1[][2], int multiply[][2], int m1_row, int m1_col, int m2_col)
{

    for (int i = 0; i < m1_row; i++)
    {
        for (int k = 0; k < m2_col; k++)
        {
            int sum = 0;
            for (int j = 0; j < m1_col; j++)
            {
                sum += matrix[i][j] * matrix1[j][k];
            }
            multiply[i][k] = sum;
        }
    }
}

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    // int a,b,c;
    // cout<<"numbers of rows and coloumns of first matrix ";
    // cin>>a,b;
    // cout<<"number of coloums in second matrix ";
    // cin>>c;

    // int matrix[2][3];
    // cout<<"enter the elements "
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    //   int matrix1[3][2];
    // cout<<"enter the elements "
    // for(int i=0;i<b;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    int result[2][2];
    multiply_matrices(A, B, result, 2, 3, 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }
    // cout<<"result is "<<result[b][b];
    return 0;
}