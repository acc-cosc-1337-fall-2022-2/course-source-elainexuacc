//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
char get_letter_grade_using_if(int grade)
{
    if(grade >= 90 && grade <= 100)
        return 'A';
    else if(grade >= 80 && grade <= 89)
        return 'B';
    else if(grade >= 70 && grade <= 79)
        return 'C';
    else if(grade >= 60 && grade <= 69)
        return 'D';
    else
        return 'F';
}

char get_letter_grade_using_switch(int grade)
{
    int x=grade/10;
    char letter_grade;
    switch(x)
    {
        case 10:
            letter_grade='A';
            break;
        case 9:
            letter_grade='A';
            break;
        case 8:
            letter_grade='B';
            break;
        case 7:
            letter_grade='C';
            break;
        case 6:
            letter_grade='D';
            break;
        default:
            letter_grade='F';
            break;
    }
    return letter_grade;
}