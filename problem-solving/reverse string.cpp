#include <iostream>
#include<string>
using namespace std;


void reverse(string str) {
	for (int i = 0; i < str.length()/2; i++) {
		char tmp = str[i];
		str[i] = str[str.length() - i - 1];
		str[str.length() - i - 1] = tmp;
	}
	cout << str << endl;
	cout << "---Try-again--- " << endl;
}




int main() {

	while (true)
	{
		string  str;
		cin >> str;
		reverse(str);
	}

	
	return 0;
}
