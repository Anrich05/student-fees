#include <iostream>

using namespace std;

bool IsNum(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
        return false;

    return true;
}


int main()
{
    string studcode, studnum;
    char ch;

 do
 {
    cout << "Please provide us your Student Number" << endl;
    cin >> studnum;

    if (IsNum(studnum)) //Changing lower capital letter to capital
        {
        cout << "Please provide your student code(Answer: F/P)" << endl;
        cin >> ch;
        ch = ch - 32;
        }


         switch (ch) // To differ between full time and part time students
         {
            case 'F':
            {
               const int Regfees = 1500, module = 7000;
               int studserv, extra, modules, num, num1, Total;

               cout << "Please enter the amount of modules you would like" << endl;
               cin >> num;
               modules = num * module; //Figures out the price of the modules

               cout << "Please enter amount of student services you would like" << endl;
               cin >> num1;

                if (num1 > 5) // Runs to work out extra services price
                {
                   extra = num1 - 5;
                   extra = extra * 1000;
                   studserv = extra + 4000;
                }

                else
                {
                   studserv = 4000;
                }

              Total = 0;
              Total = Total + Regfees + studserv + modules; // Total fees for full time students

              cout << "Student number:  " << studnum << endl;
              cout << "Student code:  " << ch << endl;
              cout << "Number of modules:  " << num << endl;
              cout << "Number of student services:  " << num1 << endl;
              cout << "Your Total balance is:  R" << Total << endl;
              break;
            }

            case 'P':
            {
              const int Regfees = 800, module = 1600, studserv = 4000;
              int modules, Total, num;

              cout << "Please enter the amount of modules you would like" << endl;
              cin >> num;
              modules = num * module; //Figures out the price of the modules

              Total = 0;
              Total = Total + Regfees + studserv + modules; // Total fees for part time students

              cout << "Student number:  " << studnum << endl;
              cout << "Student code:  " << ch << endl;
              cout << "Number of modules:  " << num << endl;
              cout << "Your Total balance is:  R" << Total << endl;
              break;
            }

            default:
            {
              cout << "You have inputted the wrong value, please try again!" << endl << endl;
              break;
            }
         }


 }
 while (true);



return 0;
 }
