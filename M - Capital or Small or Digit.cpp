        #include <bits/stdc++.h>
        using namespace std;
        int main() {
            ios::sync_with_stdio(0);
            cin.tie(0);
            ios_base::sync_with_stdio(0);
            char ch;
            cin >> ch;
            if (ch>=65 && ch<=90)
                cout<<"ALPHA\n"
                      "IS CAPITAL";
            else if (ch>=97 && ch<=122)
                cout<<"ALPHA\n"
                      "IS SMALL";
            else if (ch>=48 && ch<=57)
                cout<<"IS DIGIT";
        }
