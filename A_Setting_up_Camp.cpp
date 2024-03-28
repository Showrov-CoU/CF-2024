#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll a, b, c, x;
    cin >> a >> b >> c;
    a += (b / 3);
    x = ((b % 3) + c);

    if (x < 3 && b % 3 != 0)
    {
        cout << "-1" << endl;
        return;
    }
    a += ceil(x / 3.0);
    cout << a << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
