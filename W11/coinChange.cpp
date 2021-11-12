#include<bits/stdc++.h>
using namespace std;

int N = 1e3+2;
int coin (int a[],int n,int x)
{
    for (int i=0;i<n;i++)
    if (x == 0)
      return 1;
    if (x < 0)
      return 0;
    if (n <= 0)
      return 0;
    return coin (a,n,x-a[n-1])+coin(a,n-1,x);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << coin(arr,n,x);
    return 0;
}
