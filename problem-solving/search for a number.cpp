#include<iostream>
using namespace std;



int main() {
	

int t,q, arr[200],arr2[200],li;

	cin >> t;
	for (int i = 0; i < t; i++) cin >> arr[i];

	cin >> q;
	for (int j = 0; j < q; j++) {
		cin >> arr2[j];
		li = -1;
		for (int i = 0; i < t; i++) if (arr2[j] == arr[i])li = i;
		cout << endl <<arr2[j]<< " --> " << li << endl;
	}

	// 5 1 2 7 3 7 3 7 9 2


	return 0;
}
