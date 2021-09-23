#include <bits/stdc++.h>
using namespace std;
void duplicate (int *ar, int n, int key)
{
    int low, high, mid, first, last;
    low = 0;
    high = n-1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (ar[mid] == key)
        {
            int x = mid;
            first = mid;
            last = mid;
            while (ar[--x] == key)
                first = x;
            x = mid;
            while (ar[++x] == key)
                last = x;
            cout << key << " - " << last-first+1;
            return;
        }
        else if (key < ar[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    cout << "Not present";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, key;
        cin >> n;
        int ar[n];
        for (i=0; i<n; i++)
            cin >> ar[i];
        cin >> key;
        duplicate(ar, n, key);
    }
    return 0;
}
