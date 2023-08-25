int mod(int a , int b) {
	return a - a / b * b;
}

int main() {

	cout << mod(60, 24); //12
	cout << mod(9, 2); //1
  
	return 0;
}
