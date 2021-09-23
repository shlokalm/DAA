#include <bits/stdc++.h>
using namespace std;
bool jump(int ar[], int n, int val, int &count)
{
    int x = sqrt(n);
    int start = 0;
    int end = x;
    while (ar[end] <= val and end < n)
    {
        count++;
        start = end;
        end += x;
        if (end > n - 1)
        {
            end = n;
        }
    }
    for (int i = start; i < end; i++)
    {
        if (ar[i] == val)
        {
            return true;
        }
    }

    return false;
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
        int count=1;
        if (jump(ar, n, val, count))
        {
            cout << "Present " << count<<"\n";
        }
        else
        {
            cout << "Not Present "<<count<<"\n";
        }
    }
    return 0;
}
