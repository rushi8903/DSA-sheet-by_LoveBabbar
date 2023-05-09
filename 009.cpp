#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    // code here
    int ans[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            ans[count] = 0;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ans[count] = 1;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            ans[count] = 2;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = ans[i];
    }
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
    int n = 5;
    int arr[n] = {1, 0, 2, 0, 2};
    sort012(arr, n);
    displayArray(arr, n);
}


/*
Output :
0 0 1 2 2
*/