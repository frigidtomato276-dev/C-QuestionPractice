// Write a program to print all prime numbers from 1 to 300.
// (Hint: Use nested loops, break and continue)


// #include <stdio.h>



#include <stdio.h>

void main(){
    int i=1;
    while (i<299){
        i+=1;
        int j=2;
        for ( j ;j<=i ;j++ ){
            if (i%j ==0){
                break;
            }
             
        }
        if (i==j){
            printf("\n%d",i);
        }

    }
}