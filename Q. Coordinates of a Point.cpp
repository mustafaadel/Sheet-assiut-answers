#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    float x , y;
    cin >> x >> y ;
    if ( x > 0 && y > 0)
    {
        cout << "Q1";
    }
    else if ( x < 0 && y > 0)
    {
        cout << "Q2";
    }
    else if (x < 0 && y < 0) {
        cout << "Q3";
    }
    else if (x > 0 && y < 0){
        cout << "Q4";
    }
    if(x == 0 && y!= 0){
        cout << "Eixo Y";
    }
    else if (y == 0 && x != 0)
    {
        cout << "Eixo X";
    }
    else if ( x == 0 && y == 0)
    {
        cout << "Origem";
    }
}


