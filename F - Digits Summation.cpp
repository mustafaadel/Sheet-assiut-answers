#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long m , n ;
    int reminder1 , reminder2 , sum;
    cin >> m >> n ;
    reminder1 = m % 10 ;
    reminder2 = n % 10;
    sum = reminder2 + reminder1;
    cout << sum;


}
