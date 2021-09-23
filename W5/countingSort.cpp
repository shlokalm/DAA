#include <bits/stdc++.h>
using namespace std;
void count(char *ar, int n)
{
    int i;
    int c[26] = {0};
    for (i=0; i<n; i++)
        c[ar[i]-'a']++;
    int max = 0;
    for (i=1; i<26; i++)
        if (c[i] > c[max])
            max = i;
    if (c[max] == 1)
    {
        cout << "No duplicates";
        return;
    }
    cout << char('a' + max) << "-" << c[max];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n;
        cin >> n;
        char ar[n];
        for (i=0; i<n; i++)
            cin >> ar[i];
        count (ar, n);
    }
    return 0;
}
