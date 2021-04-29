#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
   atom;
    ll n , m, factorial = 1;
    cin >> n;
    for (ll i = 0 ; i < n ; i++ )
    {
        cin >> m ;
        if(m == 0) {
            cout << 1 << endl;
        }
        else {
            for (int j = 1; j <= m; j++) {
                factorial *= j;
            }
            cout << factorial << endl;
            factorial = 1;
        }
    }
    }


