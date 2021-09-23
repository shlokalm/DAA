#include <bits/stdc++.h>
using namespace std;
void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int partition(int *ar, int l, int r, int *c, int *s)
{
    int x = rand() % (r-l+1) + l;
    swap (&ar[x],&ar[r]);
    int pivot = ar[r];
    int i,j;
    for (i=l-1,j=l; j<r; j++)
    {
        (*c)++;
        if (ar[j]<pivot)
        {
            i++;
            (*s)++;
            swap (&ar[i], &ar[j]);
        }
    }
    swap (&ar[i+1], &ar[r]);
    return (i+1);
}
void qsort(int *ar, int l, int r, int *c, int *s)
{
    if (l<r)
    {
        int pivot = partition(ar, l, r, c, s);
        qsort (ar, l, pivot-1, c, s);
        qsort (ar, pivot+1, r, c, s);
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
        int i, c=0, s=0;
        int ar[n];
        for (i=0; i<n; i++)
            cin >> ar[i];
        qsort (ar, 0, n-1, &c, &s);
        for (i=0; i<n; i++)
            cout << ar[i] << " ";
        cout << endl;
        cout << "comparisons" << c << endl;
        cout << "swaps" << s;
    }
    return 0;
}
