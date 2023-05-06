#include <iostream>
using namespace std;

void takeArrayInput(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Enter the arr[" << i << "] = ";
        cin >> arr[i];
    }
}

int *reverseArray(int arr[], int len)
{
    int *reverseArr = new int[len];
    for (int i = 0; i < len; i++)
    {
        reverseArr[i] = arr[len - i - 1];
    }
    return reverseArr;
}

void displayArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int len;
    cout << "Enter the length of array :" << endl;
    cin >> len;
    int arr[len];
    takeArrayInput(arr, len);
    displayArray(arr, len);
    int *reversedArr = reverseArray(arr, len);
    cout << "Reversed array is : ";
    displayArray(reversedArr, len);
    return 0;
}

/*
Output:

Enter the length of array :
3
Enter the arr[0] = 1
Enter the arr[1] = 2
Enter the arr[2] = 3
1 2 3
Reversed array is :3 2 1
*/


