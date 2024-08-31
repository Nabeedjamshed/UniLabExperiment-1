#include <iostream>
using namespace std;

class MedianCalculator
{
private:
    int *dataArray;
    int currentSize;
    int maxCapacity;

public:
    MedianCalculator()
    {
        currentSize = 0;
        maxCapacity = 1;
        dataArray = new int[maxCapacity];
    }
    ~MedianCalculator()
    {
        delete[] dataArray;
    }
    void insertNumber(int number)
    {
        if (currentSize == maxCapacity)
        {
            int *newArray = new int[maxCapacity * 2];
            maxCapacity *= 2;
            for (int i = 0; i < currentSize; i++)
            {
                newArray[i] = dataArray[i];
            }
            delete[] dataArray;
            dataArray = newArray;
        }
        int position = currentSize - 1;
        while (position >= 0 && dataArray[position] > number)
        {
            dataArray[position + 1] = dataArray[position];
            position--;
        }
        dataArray[position + 1] = number;
        currentSize++;
    }
    double getMedian()
    {
        if (currentSize % 2 == 0)
        {
            int middleIndex1 = currentSize / 2 - 1;
            int middleIndex2 = currentSize / 2;
            double median = (dataArray[middleIndex1] + dataArray[middleIndex2]) / 2.0;
            return median;
        }
        else
        {
            int middleIndex = currentSize / 2;
            double median = dataArray[middleIndex];
            return median;
        }
    }
};

int main()
{
    MedianCalculator medianCalculator;
    medianCalculator.insertNumber(1);
    medianCalculator.insertNumber(2);
    cout << medianCalculator.getMedian() << endl;
    medianCalculator.insertNumber(3);
    cout << medianCalculator.getMedian() << endl;
    return 0;
}