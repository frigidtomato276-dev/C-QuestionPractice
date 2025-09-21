// Write a program to find the octal equivalent of the entered
// number. 

#include <stdio.h>

void main(){
    int num,octal,rem;
    int place = 1;
    scanf("%d",&num);
    while (num>0){
        rem = num%8;
        num = num/8;
        octal += rem*place;
        place *= 10;
    }
    printf("%d",octal);
}