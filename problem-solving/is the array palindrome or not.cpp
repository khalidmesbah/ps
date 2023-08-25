#include<iostream>
using namespace std;



int main() {
	

	int n, arr[2000];
	bool p = 1;
	cin >> n;


	for (int i = 0; i < n; i++)cin >> arr[i];

	for (int i = 0; i < n; i++) {
		p *= arr[i] == arr[n - i - 1];
	}
	if(p)cout << "palindrome"; else cout << "not palindrome";


	return 0;
}
