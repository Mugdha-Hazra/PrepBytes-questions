#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n], g, c = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        g = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < g)
                c += i;
            g = a[i];
        }
        cout << c << endl;
    }
}
