// Write a program to print out all Armstrong numbers between
// 1 and 500. If sum of cubes of each digit of the number is
// equal to the number itself, then the number is called an
// Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5
// * 5 ) + ( 3 * 3 * 3 ) 


#include <stdio.h>

void main(){
    int num=1;
    while (num<=500){
        int a,b,c;
        c = num%10;
        b = (num%100 - c )/10;
        a = num/100;
        
        if (a*a*a + b*b*b + c*c*c == num)
        printf("\n %d" , num);
        
        num++;
    }
}