#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
   atom;
    int n , max = -1 ; ll num;
    cin >> n ;
    for (int i = 0 ; i < n ; i++) {
        cin >> num ;
        if ( num > max )
            max = num ;
    }
    cout << max ;
    }


