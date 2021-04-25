#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
    cout << fixed << setprecision(3);
    atom;
    float n , temp ;
    int x;
    cin >> n ;
    x = n ;
    temp = n-x ;
    if(temp > 0)
    {
        cout << "float " << x << " " << temp;
    }
    else if (temp == 0){
        cout << "int " << x;
    }



}
