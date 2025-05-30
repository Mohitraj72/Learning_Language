#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // Top
        for (int j = scol; j <= ecol; j++)
        {
            cout << mat[srow][j] << " ";
        }
        // Right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }
        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            cout << mat[erow][j] << " ";
        }

        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            cout << mat[i][scol] << " ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout << endl;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {23, 56, 7, 99},
                        {12, 45, 98, 34}};

    spiralMatrix(matrix, 4, 4);
    return 0;
}