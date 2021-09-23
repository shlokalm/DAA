#include <bits/stdc++.h>
using namespace std;
void twoSum(int ar[],int n)
{
    int i = 0, j, k, found = 0;
    j = i+1;
    k = n-1;
    for (k=n-1; k>=0; k--)
    {
        i = 0;
        j = k-1;
        while (i<j)
        {
            if (ar[i]+ar[j] == ar[k])
            {
                found = 1;
                break;
            }
            else if (ar[i]+ar[j]>ar[k])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        if (found == 1)
            break;
    }
    if (found == 1)
    {
        cout << i+1 << " " << j+1 << " " << k+1;
    }
    else
    {
        cout << "Sequence not found";
    }
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
        twoSum(ar,n);
    }
}
