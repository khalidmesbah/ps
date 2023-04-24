#include<iostream>
using namespace std;



int main() {
	

	int n,arr[2000],min1,min2,min3;
	cin >> n;


	for (int i = 0; i < n; i++)cin >> arr[i];

	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[0])min1 = arr[0];
		if (arr[i] < min1)min1 = arr[i];
	}

	bool p = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == min1) continue;
		if (p) min2 = arr[i],p=0;
		if (arr[i] < min2) min2 = arr[i];
	}

	p = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == min1 || arr[i] == min2) continue;
		if (p) min3 = arr[i], p = 0;
		if (arr[i] < min3) min3 = arr[i];
	}

	cout << "min1: " << min1 << " ; min2: " << min2 << " ; min3: " << min3 << endl;




	return 0;
}
