#include <iostream>
using namespace std;

int main()
{
     int idx{0};

     for (int row = 0; row < 3; row++)
     {
          for (int col = 0; col < 4; col++)
          {
               idx = row * 4 + col;
               cout << "the index: " << idx << " has r,c: " << row << " " << col << "\n";
               cout << "the index: " << idx << " has r,c: " << (idx - idx % 4) / 4 << " " << idx % 4 << "\n";
          }

          // index = i*cols+j;
          // i = index/cols =(index-index%4)/4 
          // j = index%cols
     }

     return 0;
}
