#include <iostream>
#include <limits.h>
using namespace std;

int sumMaxMin(int arr[], int len)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return max + min;
}

int main()
{
    int arr[] = {1, -3, -5, 6, -8, 4, 0};
    int len = 7;
    //returns the sum of maximum and minimum number of array
    int sum = sumMaxMin(arr, len);
    cout<<"The sum of maximum and minimum number of array : "<<sum<<endl;
}

/*
Output :

The sum of maximum and minimum number of array : -2
*/
