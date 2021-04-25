    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        ios::sync_with_stdio(0);cin.tie(0);
        ios_base::sync_with_stdio(0);
        int a , b ;
        cin >> a >> b ;
        if ( a % b == 0)
        {
            cout << "Multiples";
        }
        else if ( b % a == 0 )
        {
            cout << "Multiples";
        }
        else
            cout << "No Multiples";
    }
