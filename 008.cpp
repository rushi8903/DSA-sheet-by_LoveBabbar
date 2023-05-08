#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int len, int k) {
        len++;
        sort(arr, arr + len);
        return arr[k-1];
}

int main(){
    int arr[]={21,3,1123,112,424,2,44,1,24};
    int len=9,k=3;
    int temp =kthSmallest(arr,len,k);
    cout<<temp;
    return 0;
}

/*
Output :
3
*/