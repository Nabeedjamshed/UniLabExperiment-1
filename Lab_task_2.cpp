#include <iostream>
using namespace std;

float calculatecgpa(float arr[])
{
    int count = 0;
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != -1)
        {
            sum += arr[i];
            count++;
        }
    }
    return (sum / count);
    ;
}
int main()
{
    string names[5] = {"Ali", "Hiba", "Asma", "Zain", "Faisal"};
    float arr[5][5] = {{3.66, 3.33, 4.0, 3.0, 2.66},
                       {3.33, 3.0, 3.66, 3.0, -1},
                       {4.0, 3.66, 2.66, -1, -1},
                       {2.66, 2.33, 4.0, -1, -1},
                       {3.33, 3.66, 4.0, 3.0, 3.33}};

    for (int i = 0; i < 5; i++)
    {
        float cgpa = calculatecgpa(arr[i]);
        cout << names[i] << ": " << cgpa << endl;
    }
    return 0;
}