#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
    atom;
    ull a,b,c,d ;
    cin >> a >> b >> c >> d ;
    if ( b == d )
    {
        if (a > c)
            cout << "YES";
        else
            cout << "NO";
    }
    else if ( a == c && b == d )
        cout << "NO";
    else if(b*log(a) > d*log(c))
    {
        cout << "YES";
    }
    else
        cout << "NO";

}


