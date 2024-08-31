#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Original Matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int index = 0;
    int arr1[rows * columns] = {};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr1[index] = arr[j][i];
            index++;
        }
    }
    cout << "Column-Major Order" << endl;
    for (int i = 0; i < rows * columns; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}