//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;
using std::string;


int main() 
{
	int grade;
	cin >> grade;

	if(grade >= 0 && grade <= 100)
	{
		string letter_grade_if;
		letter_grade_if = get_letter_grade_using_if(grade);
		cout<<"Letter grade using if: "<<letter_grade_if<<"\n";

		string letter_grade_switch;
		letter_grade_switch = get_letter_grade_using_switch(grade);
		cout<<"Letter grade using switch: "<<letter_grade_switch<<"\n";
	}
	else
	{
		cout<<"The number you entered is out of range."<<"\n";
	}
		

}