#include <iostream>
using namespace std;

int main() {
  cout << "===========================\n";

  while (1) {
    int n;
    cin >> n;
    int nn{n};
    int row{1};
    while (n-- > 0) {

      if (row < nn) {
        int start = nn - row;
        while (start-- >= 0)
          cout << " ";
        int nofe = 2 * row++ - 1;
        while (nofe--)
          cout << "*";
        cout << endl;
      } else if (row == nn) {
        int start = nn - row;
        while (start-- >= 0)
          cout << " ";
        int nofe = 2 * row++ - 1;
        while (nofe--)
          cout << "*";
        cout << endl;

        n = nn + 1;
        while (n) {
          int start = nn - row;
          while (start-- >= 0)
            cout << " ";
          int nofe = 2 * row-- - 1;
          while (nofe--)
            cout << "*";
          cout << endl;
          n--;
        }
      }
    }
  }

  cout << "\n===========================\n";
  return 0;
}
