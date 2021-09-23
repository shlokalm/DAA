#include <bits/stdc++.h>
using namespace std;
int bin (int ar[], int low, int high, int val, int &count)
{
    while (low  <= high)
    {
        count ++;
        int mid = (high + low) / 2;
        if (ar[mid] == val)
        {
            return mid + 1;
        }
        else if (ar[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
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
        for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int val;
    cin >> val;
    int count=0;
    int pos = bin(ar, 0, n - 1, val, count);
    if (pos >= 0)
    {
        cout << "Present " << count;
    }
    else
    {
        cout << "Not Present " << count;
    }
    }
    return 0;
}
