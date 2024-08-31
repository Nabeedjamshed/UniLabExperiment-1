#include <iostream>
using namespace std;

bool binarysearch(int arr[3][4], int n, int m, int target)
{
    int i = 0;
    int j = n * m - 1;

    while (i <= j)
    {
        int mid = (i + j) / 2;
        int row = mid / m;
        int col = mid % m;

        if (arr[row][col] == target)
        {
            return true;
        }
        else if (arr[row][col] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }

    return false;
}

int main()
{
    int arr[3][4] = {{1, 3, 5, 7},
                     {10, 11, 16, 20},
                     {23, 30, 34, 60}};
    int n = 3;
    int m = 4;

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    bool found = binarysearch(arr, n, m, target);

    if (found)
    {
        cout << "True"<<endl<<"Target found in the matrix!" << endl;
    }
    else
    {
        cout << "False"<<endl<<"Target not found in the matrix." << endl;
    }

    return 0;
}