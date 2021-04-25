#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int n ;
    stringstream ss;
    ss << s[0];
    ss >> n;
    if (n % 2 == 0)
        cout << "EVEN";
    else if (n % 2 != 0)
        cout << "ODD";


}


----------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n ;
    n = n / 1000 ;
    if (n % 2 == 0)
        cout << "EVEN";
    else if (n % 2 != 0)
        cout << "ODD";
 
}
 
