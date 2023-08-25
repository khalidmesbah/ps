#include <iostream>
using namespace std;

double add(double &a, double &b)
{
     cout << "=> " << a + b;
     return a + b;
}
double subtract(double &a, double &b)
{
     cout << "=> " << a - b;
     return a - b;
}
double multiply(double &a, double &b)
{
     cout << "=> " << a * b;
     return a * b;
}
double divide(double &a, double &b)
{
     if (b != 0)
     {
          cout << "=> " << a / b;
          return a / b;
     }
     else
          cout << "=> infinity";
     return 0;
}

void display_menu()
{
     while ("forever")
     {

          cout << "\n==========================\n"
                  "Enter your choice from 1 to 5:- "
                  "\n1)add two numbers"
                  "\n2)subtract two numbers"
                  "\n3)multiply two numbers"
                  "\n4)divide two numbers"
                  "\n5)end the program"
                  "\n==========================\n";
          int choice;
          cin >> choice;
          if (cin.fail())
               break;

          if (1 <= choice && choice <= 5)
          {
               if (choice == 5)
                    break;
               cout << "Enter the two numbers: ";
               double a, b;
               cin >> a >> b;

               if (choice == 1)
                    add(a, b);
               else if (choice == 2)
                    subtract(a, b);
               else if (choice == 3)
                    multiply(a, b);
               else
                    divide(a, b);
          }
          else
          {
               cout << "Invalid choice.try again\n";
               continue;
          }
     }
}

int main()
{
     display_menu();
     return 0;
}
