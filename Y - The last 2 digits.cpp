#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
    atom;
    ll a, b, c, d, multi ;
    cin >> a >> b >> c >> d;
    multi = (a%100 * b%100*  c%100 * d%100)%100;
    if (multi < 10)
    {
        cout << "0" << multi;
    }
    else
        cout << multi;


}


