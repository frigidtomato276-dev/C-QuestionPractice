// //According to the Gregorian calendar, it was Monday on the
// date 01/01/1900. If any year is input through the keyboard
// write a program to find out what is the day on 1st January of
// this year. 

#include <Stdio.h>

void main(){
    int year,day=0;
    scanf("%d",&year);
    int odddays,gap,leap,normal,total;
    if (year>=1900){
        leap = ((year-1)/4) - ((1900-1)/4) - ((year-1)/100 - (1900-1)/100) + ((year-1)/400 - (1900-1)/400);



        total = year-1900;
        normal = total-leap;
        day = normal + leap *2 ;
    }

    //days
    day = day%7;
    if (day==0)
    printf("Monday");
    else if (day==1)
    printf("Tuesday");
    else if (day==2)
    printf("Wednesday");
    else if (day==3)
    printf("Thursday");
    else if (day==4)
    printf("Friday");
    else if (day==5)
    printf("Saturday");
    else if (day==6)
    printf("Sunday");

    
}