#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long arr[3],sorted[3];
	int i;
	for (i = 0; i < 3; i++) {
		cin >> arr[i];
		sorted[i] = arr[i];
	}
	sort(sorted, sorted + 3);
	for (i = 0; i < 3; i++) {
		cout << sorted[i] << endl;
	}
	cout << endl;
	for (i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
 
	return 0;
}
