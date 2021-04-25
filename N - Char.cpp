#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    char ch;
    cin >> ch;
    if (islower(ch)){
        ch = toupper(ch);
        cout <<ch; }
    else if (isupper(ch)) {
        ch = tolower(ch);
        cout << ch;
    }
        }

