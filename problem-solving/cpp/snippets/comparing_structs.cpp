#include <iostream>
using namespace std;

struct Name
{
    string name;
};

int main()
{

    Name n1 = {"khaled"};
    Name n2 = {"khaled"};

    cout << (n2.name == n1.name);
    return 0;
}