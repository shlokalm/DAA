#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, flag=0, n, sum;
        cin >> n;
        int ar[n];
        for (i=0;i<n;i++)
        cin >> ar[i];
        cin >> sum;
        sort(ar, ar+n);
        i = 0;
        j = n-1;
        while (i < j)
        {
            int s = ar[i]+ar[j];
            if (s == sum)
            {
                cout << ar[i] << " " << ar[j];
                flag = 1;
                i++;
                j--;
            }
            else if (s < sum)
            i++;
            else
            j--;
        }
        if (flag == 0)
        cout << "No such pair";
    }
    return 0;
}
