#include <iostream>
using namespace std;
int sumcolumn(int matrix[][5], int rows, int col)
 {
    int sum = 0;
    for (int row = 0; row < rows; row++) {
        sum += matrix[row][col];
    }
    return sum;
}

int findLargestSumColumn(int M[][5], int rows) {
    int col_sum = 0;
    int largestColumn = 0;

    for (int col = 0; col < 5; col++) {
        int sum = sumcolumn(M, rows, col);
        if (sum > col_sum) {
            col_sum = sum;
            largestColumn = col;
        }
    }
     return largestColumn;
}

void swapcolumns(int M[][5], int rows, int col1, int col2) 
{
    for (int row = 0; row < rows; row++)
     {
        int temp = M[row][col1];
        M[row][col1] = M[row][col2];
        M[row][col2] = temp;
    }
}
void largestColumnFirst(int matrix[][5], int rows) 
{
    int largestColumnIndex = findLargestSumColumn(matrix, rows);
    swapcolumns(matrix, rows, 0, largestColumnIndex);
}

int main() 
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int matrix[rows][5];
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < 5; j++)
         {
            cout << "Enter element at " << i  << j << " ";
            cin >> matrix[i][j];
        }
    }

    cout << "original Matrix:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

largestColumnFirst(matrix, rows);
    cout << "\nMatrix after swapping the largest column with the first column:" << endl;
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < 5; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
