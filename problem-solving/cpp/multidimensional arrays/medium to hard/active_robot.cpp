#include <iostream>
using namespace std;

int main()
{

    int y, x, moves, direction, steps, robotX{0}, robotY{0};
    cin >> y >> x >> moves;

    while (moves--)
    {
        cin >> direction >> steps;
        while (steps--)
        {
            if (direction == 1)
                --robotY;
            else if (direction == 2)
                ++robotX;
            else if (direction == 3)
                ++robotY;
            else if (direction == 4)
                --robotX;
            else
                cout << "wrong direction\n";

            if (robotX == -1)
                robotX = x - 1;
            if (robotX == x)
                robotX = 0;
            if (robotY == -1)
                robotY = y - 1;
            if (robotY == y)
                robotY = 0;
        }
        cout << "(" << robotY << " , " << robotX << ")" << endl;
    }

    return 0;
}
// another solution
/*

#include <iostream>
using namespace std;

int main()
{

    int y, x, moves, direction, steps, robotX{0}, robotY{0};
    cin >> y >> x >> moves;

    int rd[4] = {-1, 0, 1, 0};
    int cd[4] = {0, 1, 0, -1};

    while (moves--)
    {
        cin >> direction >> steps;
        --direction;
        robotX = (robotX + rd[direction] * steps) % y;
        robotY = (robotY + cd[direction] * steps) % x;
        if (robotX < 0)
            robotX += y;
        if (robotY < 0)
            robotY += x;
        cout << "(" << robotX << " , " << robotY << ")" << endl;
    }

    return 0;
}
/*
3 4
4
2 1
3 2
4 2
1 3

=>0,1
=>2,1
=>2,3
=>2,3
 */

* /