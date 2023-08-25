#include <iostream>
using namespace std;
int choice, number_of_employees{6};
// my database
string employees_name[500];
double employees_salary[500];
double employees_age[500];
char employees_gender[500];

void print_employees()
{
     for (int i = 0; i < number_of_employees; i++)
     {
          if (employees_name[i] != "")
          {
               cout << employees_name[i] << " "
                    << employees_age[i] << " "
                    << employees_salary[i] << " "
                    << employees_gender[i] << endl;
          }
     }
}

void delete_by_age()
{
     int start_age, end_age;
     cout << "Enter the start age & end age: ";
     cin >> start_age >> end_age;
     for (int i = 0; i < number_of_employees; i++)
     {
          if (start_age <= employees_age[i] && employees_age[i] <= end_age)
          {
               employees_name[i] = "";
               employees_age[i] = 0;
               employees_salary[i] = 0;
               employees_gender[i] = '0';
          }
     }
}

void update_salary_by_name()
{
     string name;
     int new_salary;
     cout << "Enter the name of the employee and it's new salary: ";
     cin >> name >> new_salary;

     bool is_found = false;
     for (int i = 0; i < number_of_employees; i++)
     {
          if (employees_name[i] == name)
          {
               is_found = true;
               employees_salary[i] = new_salary;
               break;
          }
     }
     if (!is_found)
     {
          cout << "there's no such a name!\n";
     }
}
void add_employee()
{
     cout << "Enter name,salary,gender: ";
     cin >> employees_name[number_of_employees] >>
         employees_age[number_of_employees] >>
         employees_salary[number_of_employees] >> employees_gender[number_of_employees];
     number_of_employees++;
}

void run_system()
{
     while (true)
     {
          choice = -1;
          cout << "==========================\n"
                  "Enter your choice:\n"
                  "1) Add new employee\n"
                  "2) print employees\n"
                  "3) Delete by age\n"
                  "4) Update salary by name\n"
                  "==========================\n";
          cin >> choice;

          if (cin.fail())
               break;

          if (!(1 <= choice && choice <= 4))
          {
               cout << "Invalid choice. Try again\n";
               continue;
          }

          if (choice == 1)
               add_employee();
          if (choice == 2)
               print_employees();

          if (choice == 3)
               delete_by_age();

          if (choice == 4)
               update_salary_by_name();
     }
}
int main()
{

     // some employees for testing
     employees_name[0] = "khaled";
     employees_age[0] = 21;
     employees_salary[0] = 0;
     employees_gender[0] = 'm';

     employees_name[1] = "sara";
     employees_age[1] = 19;
     employees_salary[1] = 312.321;
     employees_gender[1] = 'f';

     employees_name[2] = "hager";
     employees_age[2] = 15;
     employees_salary[2] = 322.322;
     employees_gender[2] = 'f';

     employees_name[3] = "osama";
     employees_age[3] = 10;
     employees_salary[3] = 332.323;
     employees_gender[3] = 'f';

     employees_name[4] = "mohamed";
     employees_age[4] = 23;
     employees_salary[4] = 255;
     employees_gender[4] = 'm';

     employees_name[5] = "gaber";
     employees_age[5] = 55;
     employees_salary[5] = 2000.5;
     employees_gender[5] = 'm';

     run_system();

     return 0;
}