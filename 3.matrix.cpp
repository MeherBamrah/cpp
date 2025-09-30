//Write a program to perform following operations on matrix using functions and switch case:
//(a) Addition (b) subtraction (c) multiplication (d) transpose

#include <iostream>
using namespace std;

const int MAX = 10;

// Function to read a matrix
void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

// Function to add two matrices
void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
}

// Function to subtract two matrices
void subMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] - B[i][j];
}

// Function to multiply two matrices
void mulMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[j][i] = matrix[i][j];
}

int main() {
    int choice;
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter elements of matrix A:\n";
    readMatrix(A, r1, c1);

    cout << "Enter rows and columns of matrix B: ";
    cin >> r2 >> c2;
    cout << "Enter elements of matrix B:\n";
    readMatrix(B, r2, c2);

    cout << "\nMenu:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose of Matrix A\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (r1 == r2 && c1 == c2) {
                addMatrices(A, B, result, r1, c1);
                cout << "Addition Result:\n";
                displayMatrix(result, r1, c1);
            } else {
                cout << "Addition not possible. Matrix dimensions must be same.\n";
            }
            break;

        case 2:
            if (r1 == r2 && c1 == c2) {
                subMatrices(A, B, result, r1, c1);
                cout << "Subtraction Result:\n";
                displayMatrix(result, r1, c1);
            } else {
                cout << "Subtraction not possible. Matrix dimensions must be same.\n";
            }
            break;

        case 3:
            if (c1 == r2) {
                mulMatrices(A, B, result, r1, c1, c2);
                cout << "Multiplication Result:\n";
                displayMatrix(result, r1, c2);
            } else {
                cout << "Multiplication not possible. Columns of A must equal rows of B.\n";
            }
            break;

        case 4:
            transposeMatrix(A, result, r1, c1);
            cout << "Transpose of Matrix A:\n";
            displayMatrix(result, c1, r1);
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
