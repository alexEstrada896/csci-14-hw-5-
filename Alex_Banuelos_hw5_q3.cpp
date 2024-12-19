/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <cmath>
#include <string>
int main()
{
	int seconds;

//asks user to enter seconds
	cout << "Enter the amount of seconds: " << endl;
	cin >> seconds;




// converts seconds to minutes
	int minutes;
	minutes = seconds / 60;
//gets remainder of minutes
	int rsecondsm;
	rsecondsm = seconds % 60;


//converts seconds to hours
	int hours;
	hours = seconds / 3600;

//remaining minutes from hours
	int rhoursm;
	rhoursm = (seconds%3600)/60;
//remainding seconds from hours
	int rhoursms;
	rhoursms = rhoursm%60;

//converts seconds to days
	int days;
	days = seconds /86400;
//remaining hours from days
	int rdaysh;
	rdaysh =(seconds%86400)/3600;
//remaining minutes from days
	int rdaysm;
	rdaysm = rdaysh/60;
//remaining seconds from days
	int rdayshms;
	rdayshms = rdaysm%60;





// if seconds is greater to or equal to 60
	if (seconds < 3600)
	{
		cout<<seconds<<" seconds is "<<minutes<<" minutes and "<<rsecondsm <<" seconds"<<endl;
	}
//if seconds is greater than or equal to 3600
	    else if (seconds < 86400 )
	    {
		 cout <<seconds<<" seconds is "<<hours<<" hours, "<<rhoursm<<" minutes and "<<rhoursms <<" seconds"<<endl;
	    }
//if seconds is greater than or equal to 86400
	        else
	        {
	    	cout <<seconds<<" seconds is "<<days<<" days, "<<rdaysh<<" hours, "<<rdaysm<<" minutes and "<<rdayshms<<" seconds"<<endl;
	        }
	return 0;
}