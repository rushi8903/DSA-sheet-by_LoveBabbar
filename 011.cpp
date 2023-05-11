#include <bits/stdc++.h>
using namespace std;

//time complexity = O(n) and space complexity = O(n)
int doUnion(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    int count = 0;
    for (auto &str : s)
    {
        count++;
    }
    return count;
}

int main()
{
    int a[] = {3, 2344, 4, 12412, 12, 44};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {23, 4, 41, 4, 24, 24, 2, 42, 4};
    int m = sizeof(b) / sizeof(b[0]);
    int union_=doUnion(a,n,b,m);
    cout<<union_<<endl;
    return 0;
}

/*
Output :
11
*/