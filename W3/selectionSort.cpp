#include <bits/stdc++.h>
using namespace std;
void selsort(int *ar, int n)
{
    int i, j, comps = 0, swaps = 0, min, pos;
    for (i=0;i<n-1;i++)
    {
        min = ar[i];
        pos = i;
        for (j=i+1;j<n;j++)
        {
            comps++;
            if (min > ar[j])
            {
                pos = j;
                min = ar[j];
            }
        }
        if (pos != i)
        {
            int t = ar[i];
            ar[i] = ar[pos];
            ar[pos] = t;
            swaps++;
        }
    }
    for (i=0;i<n;i++)
        cout << ar[i] << " ";
    cout << endl;
    cout << "comparisons = " << comps << endl;
    cout << "swaps = " << swaps;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i,n;
        cin >> n;
        int ar[n];
        for (i=0;i<n;i++)
        cin >> ar[i];
        selsort(ar,n);
    }
    return 0;
}
