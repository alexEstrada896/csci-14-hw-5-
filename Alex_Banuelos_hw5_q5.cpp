/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
int year;
//asks user to enter a year
cout << "Enter a year: " <<endl;
cin>>year;
//determins if the year is a leap year or not
//determins if year is divisible by 100
if (year % 100 == 0)
{
//determins if year is divisible by 400 after 
    if (year % 400 == 0)
    {
        cout <<year<<" is a leap year"<<endl;
    }
 //if year is not also divisible by 400 it is not a leap year
    else
    {
        cout<<year<<" is not a leap year"<<endl;
    }
}
//checks if year is divisible by 4 if not divisible by 100
else if (year % 4 == 0)
{
    cout<<year<<" is a leap year"<<endl;
}
else 
{
    cout << year<<" is not a leap year"<<endl;
}

	return 0;
}