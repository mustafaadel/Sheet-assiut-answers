#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
    atom;
    ll l1 , l2 , r2 , r1 ,m1 , m2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 < l2 || l1 > r2 ) {
        cout << -1;
    }
    else {
        if (r2 > r1) {
            m2 = r1;
        } else if (r1 > r2) {
            m2 = r2;
        }
        if (l2 > l1 && l2 < m2) {
            m1 = l2;
        } else if (l1 > l2 && l1 < m2) {
            m1 = l1;
        }
        else if (l1 > l2){
            m1 = l1;
        }
        else if ( l2 > l1){
            m1 = l2;
        }

        cout << m1 << " " << m2;
    }
}


