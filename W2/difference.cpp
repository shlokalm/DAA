#include<bits/stdc++.h>
using namespace std;
int differnce(int ar[],int n,int key)
{
    int count = 0;
    sort(ar, ar+n);
    int i = 0;
    int j = 0;
    while (j < n)
    {
        if (ar[j] - ar[i] == key)
        {
            count++;
            i++;
            j++;
        }
        else if (ar[j] - ar[i] > key)
            i++;
        else
            j++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i=0; i<n; i++)
        {
            cin >> ar[i];
        }
        int key;
        cin >> key;
        int ans = differnce(ar,n,key);
        cout << ans;
    }
    return 0;
}
