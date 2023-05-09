#include <bits/stdc++.h>
using namespace std;

// time complexity = O(n) and space complexity = O(n).
void moveNegative(int arr[], int n)
{
    int temp[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
/*
// For time complexity = O(1) and space complexity O(1).
// similar to the Dutch National Flag Algorithm.

void reArrange(int arr[],int n){
      int low =0,high =1;
      while(high<n){
      if(arr[low]<0){
          low++;
          high++;
      }else if(arr[high]>0){
          high++;
      }else{
        swap(arr[low],arr[high]);
        low++;
        high++;
      }
    }
}
*/

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
    int n = 9;
    int arr[n] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    (arr, n);
    displayArray(arr, n);
}

/*
Output :
-12 -13 -5 -7 -3 -6 11 6 5
*/

