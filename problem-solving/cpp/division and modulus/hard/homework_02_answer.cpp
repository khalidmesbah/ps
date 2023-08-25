#include <iostream>
using namespace std;

int main()
{

	int days;
	cin >> days;
	int years = days / 360;
	days %= 360; // days -= years * 360
	int months = days / 30;
	days %= 30; // days -= months * 30

	cout << "years: " << years << "\nmonths: " << months << "\ndays: " << days;

	return 0;
}
