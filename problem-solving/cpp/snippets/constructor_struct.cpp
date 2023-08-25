#include <iostream>
#include <algorithm>
using namespace std;

struct full_name
{
    string first, middle, last;
    full_name() // Empty constructor.Better always provide it
    {
        first = middle = last = "";
    }
    full_name(string _first, string _last = "") // constructor
    {
        first = _first;
        last = _last;
        middle = " ";
    }
};
int main()
{
    full_name man = full_name("khaled", "mesbah");

    cout << man.first << man.middle << man.last;

    return 0;
}