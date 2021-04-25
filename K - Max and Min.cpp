            #include <bits/stdc++.h>
            using namespace std;
            int main() {
                ios::sync_with_stdio(0);cin.tie(0);
                ios_base::sync_with_stdio(0);
                int a, b ,c , min , max;
                cin >> a >> b >> c ;
                if ( a <= b && a <= c)
                {
                    min = a;
                }
                else if ( b <= a && b <= c)
                {
                    min = b;
                }
                else if ( c <= a && c <= b )
                {
                    min = c;
                }
                if ( a >= b && a >= c ){
                    max = a;
                }
                else if ( b >= a && b >= c)
                {
                    max = b;
                }
                else if ( c >= a && c >= b )
                {
                    max = c;
                }
                
                cout << min << " " << max;
            }
