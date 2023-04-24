#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, arr[200]{}, zeros = 0, ones = 0, subArrayLength = 0, MaximumSubArrayLength = 0;

	cin >> n;
	for (int i = 1; i <= n; i++)cin >> arr[i];


	for (int i = 1; i <= n; i++)
		for (int j = 0; j < i ; j++) {
			for (int k = j; k < i; k++) if (arr[k] == 0) zeros++, subArrayLength++;else ones++, subArrayLength++;
			if (ones == zeros && subArrayLength > MaximumSubArrayLength)MaximumSubArrayLength = subArrayLength;
			subArrayLength = 0,ones=0,zeros=0;
		}
	

	cout << "================ max_counter ================> " << MaximumSubArrayLength << endl;

	return 0;
}

