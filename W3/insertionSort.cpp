#include <bits/stdc++.h>
using namespace std;
void insort(int *ar, int n)
{
    int i,j;
    int comps = 0, shifts = 0, key;
    for (i=1;i<n;i++)
    {
        key = ar[i];
        j = i-1;
        while (j>=0 && ar[j]>key)
        {
            comps ++;
            shifts ++;
            ar[j+1] = ar[j];
            j--;
        }
        shifts ++;
        ar[j+1] = key;
    }
    for(i=0;i<n;i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "comparisons = " << comps;
    cout << "shifts = " << shifts;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        int ar[n];
        for (i=0;i<n;i++)
        cin >> ar[i];
        insort (ar,n);
    }
    return 0;
}
