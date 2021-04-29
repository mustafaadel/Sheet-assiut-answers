#include <bits/stdc++.h>
#define atom ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
int main() {
   atom;
        int n;
        int nums, cnt_even = 0, cnt_odd = 0, pos = 0, neg = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> nums;
            if (nums % 2 == 0){
                cnt_even++;
            }
            else if (nums % 2 != 0){
                cnt_odd++;
            }
            if (nums > 0){
                pos++;
            }
            else if (nums < 0){
                neg++;
            }

        }
        cout << "Even: " << cnt_even << endl;
        cout << "Odd: " << cnt_odd << endl;
        cout << "Positive: " << pos << endl;
        cout << "Negative: " << neg << endl;
        return 0;
    }


