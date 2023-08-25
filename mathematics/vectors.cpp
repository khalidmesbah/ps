// do an oop class called vectors with operations and stuff

// // 2d
// addition
// multiplication
// division
// substraction


// //3d // space vectors
// addition
// multiplication
// division
// substraction


#include <math.h>
#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int arr1[3];
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] + arr2[i] << " ";
    }

    return 0;
}
