#include<iostream>
using namespace std;
 // guess the output of the following code
int main() {
	char str[] { "abcdef" };
 
	int cnt = 0;
 
	for (int i = 0; i < 6; ++i)
		cnt += str[i] - 'a';
 
	cout << cnt << "\n";
 
	return 0;
}