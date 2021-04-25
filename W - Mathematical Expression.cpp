#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
    atom;
    int a ,b ,c ;
    char s , q ;
    cin >> a >> s >> b >> q >> c;
    if ( s == '+')
    {
        if (a + b == c )
            cout << "Yes";
        else
            cout << a + b ;
    }
    if ( s == '-')
    {
        if (a - b == c )
            cout << "Yes";
        else
            cout << a - b ;
    }
    if ( s == '*')
    {
        if (a * b == c )
            cout << "Yes";
        else
            cout << a * b ;
    }
}


