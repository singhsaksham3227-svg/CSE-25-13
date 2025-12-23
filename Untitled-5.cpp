#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    arr[0][1] = 10;

    int largest = arr[0][0];
    int smallest = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > largest) largest = arr[i][j];
            if (arr[i][j] < smallest) smallest = arr[i][j];
        }
    }

    cout << "\nLargest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    int totalSum = 0;

    cout << "Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nRow-wise sum:\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " = " << rowSum << endl;
        totalSum += rowSum;
    }

    cout << "\nColumn-wise sum:\n";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " = " << colSum << endl;
    }

    cout << "\nTotal sum of all elements = " << totalSum << endl;

    return 0;
}
