#include <bits/stdc++.h>
using namespace std;
int part (int ar[], int l, int r);
int ksmallest (int ar[], int lb, int ub, int k)
{
    if (k > 0 && k <= ub - lb + 1)
    {
        int pos = part(ar, lb, ub);
        if (pos == k-1)
            return ar[pos];
        if (pos-lb > k-1)
            return ksmallest(ar, lb, pos-1, k);
        return ksmallest(ar, pos+1, ub, k-pos+lb-1);
    }
    return INT_MAX;
}
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int ar[], int l, int r)
{
    int x = ar[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (ar[j] <= x)
        {
            swap (&ar[i], &ar[j]);
            i++;
        }
    }
    swap (&ar[i], &ar[r]);
    return i;
}
int part(int ar[], int l, int r)
{
    int n = r-l+1;
    int pivot = rand() % n;
    swap(&ar[l + pivot], &ar[r]);
    return partition(ar, l, r);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int k;
        cin>>k;
        cout << "K'th smallest " << ksmallest(ar, 0, n-1, k);
    }
    return 0;
}
