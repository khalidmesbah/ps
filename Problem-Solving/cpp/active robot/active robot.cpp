#include <iostream>
#include <string>


using namespace std;

int main() {

	int y, x, moves, direction, steps,robotX = 0,robotY = 0;
	cin >> y >> x >> moves;

	while (moves--) {
		cin >> direction >> steps;
		while (steps--) {
			if (direction == 1) robotY -= 1;
			if (direction == 2) robotX += 1;
			if (direction == 3) robotY += 1;
			if (direction == 4) robotX -= 1;
			if (robotX == -1) robotX = x-1;
			if (robotX == x) robotX = 0;
			if (robotY == -1) robotY = y-1;
			if (robotY == y) robotY = 0;
		}
		cout << robotY << " " << robotX << endl;
	}

	return 0;
}
