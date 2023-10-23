#include <iostream>

using namespace std;

void fillMatrix(int matrix[2][2])
{
    int row, col;

    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            cout << " input a value [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
}

void displayMatrix(int matrix[2][2])
{
    int row, col;

    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }
}

void addMatrices(int resultMatrix[2][2], int matrixA[2][2], int matrixB[2][2])
{
    int row, col;
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            resultMatrix[row][col] = matrixA[row][col] + matrixB[row][col];
        }
    }
}

void subtractMatrices(int resultMatrix[2][2], int matrixA[2][2], int matrixB[2][2])
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            resultMatrix[row][col] = matrixA[row][col] - matrixB[row][col];
        }
    }
}

void multiplyMatrices(int resultMatrix[2][2], int matrixA[2][2], int matrixB[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

int main()
{
    int matrixA[2][2], matrixB[2][2], matrixC[2][2], matrixD[2][2], matrixE[2][2];

    cout << "fill in matrix A:" << endl;
    fillMatrix(matrixA);

    cout << "fill in matrix B:" << endl;
    fillMatrix(matrixB);

    cout << "Matrix A equal to:" << endl;
    displayMatrix(matrixA);
    cout << endl;

    cout << "Matrix B equal to:" << endl;
    displayMatrix(matrixB);
    cout << endl;

    addMatrices(matrixC, matrixA, matrixB);
    subtractMatrices(matrixD, matrixA, matrixB);
    multiplyMatrices(matrixE, matrixA, matrixB);


    cout << "The result of adding A and B is:" << endl;
    displayMatrix(matrixC);

    cout << "The result of subtracting A and B is:" << endl;
    displayMatrix(matrixD);

    cout << "The result of multiplying A and B is:" << endl;
    displayMatrix(matrixE);

    return 0;
}
