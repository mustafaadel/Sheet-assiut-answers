#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
    atom;
    ll n ,reversed = 0, rem , temp;
    cin >> n;
    temp = n;
    while ( temp != 0)
    {

        rem = temp%10;
        reversed = reversed*10+rem;
        temp/=10;
    }
    if(n == reversed)
    {
        cout << reversed << "\n" << "YES";
    }
    else
        cout << reversed << endl << "NO";
}

 
