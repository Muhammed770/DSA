#include <vector>
#include <iostream>

using namespace std;

void rotateAntiClockwise(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    // Step 1: Transpose the matrix
    vector<vector<int>> transpose(n, vector<int>(m, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Step 2: Reverse each row of the transposed matrix
    for (int i = 0; i < n; i++)
    {
        reverse(transpose[i].begin(), transpose[i].end());
    }

    // Copy the result back to the original matrix
    matrix = transpose;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    rotateAntiClockwise(matrix);

    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}