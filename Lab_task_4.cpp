#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int size = int(sizeof(nums) / sizeof(nums[0]));
    int number;
    cout << "Enter the target number: ";
    cin >> number;
    int index = binarysearch(nums, size, number);
    if (index != -1)
    {
        cout << "Target is found at " << index << " index" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}