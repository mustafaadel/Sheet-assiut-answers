#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
   atom;
    int n , pass = 1999;
    cin >> n ;
    while( n!= pass) {
        cout << "Wrong\n";
        cin >> n;
        if (n == pass) {
            cout << "Correct\n";
            exit(0);
        }
    }
}


