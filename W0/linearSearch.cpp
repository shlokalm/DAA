#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, key, x = 1, count = 0;
    cin >> n;
    int ar[n];
    for (i=0; i<n; i++)
        cin >> ar[i];
    cin >> key;
    for (i=0; i<n; i++)
    {
        count++;
        if(key == ar[i])
        {
            x = 0;
            break;
        }
    }
    if(x == 0)
        cout << "Present" << " " << count;
    else
        cout << "Not Present" << " " << count;
    return 0;
}
