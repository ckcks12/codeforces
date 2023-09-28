#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k, a;
        cin >> n >> k;
        bool yes = false;
        while(n--)
        {
            cin >> a;
            yes |= a == k;
        }
        cout << (yes ? "YES" : "NO") << endl;
    }
}
