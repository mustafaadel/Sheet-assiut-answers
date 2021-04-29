#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
   atom;
    int n , cnt = 0;
    cin >> n;
    for(int i = 2 ; i <= n ; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
if(cnt == 1)
    cout <<"YES";
else
    cout << "NO";
}


