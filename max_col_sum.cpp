#include <iostream>
#include<climits>
using namespace std;
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int matrix[N][N];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxSum = INT_MIN;
    int maxColumnIndex = -1;
    for (int j = 0; j < N; j++) {
        int columnSum = 0;
        for (int i = 0; i < N; i++) {
            columnSum += matrix[i][j];
        }
        if (columnSum > maxSum) {
            maxSum = columnSum;
            maxColumnIndex = j;
        }
    }
    cout << "Column with maximum sum is column " << maxColumnIndex << " with a sum of " << maxSum << endl;
    return 0;
}