#include <iostream>
using namespace std;

string reverse_str(const string &str)
{
     string new_str{""};
     for (int i = 0; i < (int)str.size(); i++)
          new_str += str[str.size() - 1 - i];
     return new_str;
}

int main()
{
     cout << reverse_str("abcde") << endl;
     return 0;
}