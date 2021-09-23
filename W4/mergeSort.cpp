#include <bits/stdc++.h>
using namespace std;
void merge(int *ar, int l, int mid, int h)
{
    int i, j, k, n1, n2;
    n1 = mid-l+1;
    n2 = h-mid;
    int left[n1], right[n2];
    for (i=0; i<n1; i++)
        left[i] = ar[i+l];
    for(i=0; i<n2; i++)
        right[i] = ar[i+mid+1];
    i=0;
    j=0;
    k=l;
    while (i<n1 && j<n2)
    {
        if (left[i] <= right[j])
        {
            ar[k] = left[i];
            i++;
            k++;
        }
        else
        {
            ar[k] = right[j];
            j++;
            k++;
        }
    }
    for (i; i<n1; i++,k++)
        ar[k] = left[i];

    for (j; j<n2; j++,k++)
        ar[k] = right[j];
}
void mersort(int *ar,int l,int h)
{
    if (l<h)
    {
        int mid = (l+h)/2;
        mersort(ar,l,mid);
        mersort(ar,(mid+1),h);
        merge(ar,l,mid,h);
    }
}
void duplicates(int *ar,int n)
{
    int i;
    for (i=0; i<n-1; i++)
    {
        if(ar[i] == ar[i+1])
        {
            cout << "YES";
            return;
        }
    }
    cout<<"NO";
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
        for (i=0; i<n; i++)
            cin >> ar[i];
        mersort(ar,0,n-1);
        duplicates(ar,n);
    }
    return 0;
}
