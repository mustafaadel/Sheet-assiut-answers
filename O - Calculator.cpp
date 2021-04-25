#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    char ch;
    int a , b ;
    cin >> a ;
    cin >> ch;
    cin >> b ;
    if ( ch == '+')
        cout << a+b;
    else if (ch == '*')
        cout << a*b;
    else if (ch == '-')
        cout << a-b ;
    else if (ch = '/')
        cout <<a/b;
        }


