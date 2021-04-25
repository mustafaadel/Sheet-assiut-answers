    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        ios::sync_with_stdio(0);cin.tie(0);
        ios_base::sync_with_stdio(0);
        double a , b ;
        double div;
        cin >> a >> b ;
        div = a/b;

        cout<< "floor "<< a << " / " << b << " = "  << floor(div) << endl;
        cout<< "ceil "<< a << " / " << b <<" = "  << ceil(div) << endl;
        cout<< "round "<< a << " / " << b <<" = "  << round(div) << endl;
    }
