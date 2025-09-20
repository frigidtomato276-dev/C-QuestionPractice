// Given three points (x1, y1), (x2, y2) and (x3, y3), write a
// program to check if all the three points fall on one straight line. 

#include <stdio.h>

void main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1 x2 x3:");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("Enter y1 y2 y3:");
    scanf("%d %d %d",&y1,&y2,&y3);

    int slope1,slope2;
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);
    
    if (slope1==slope2)
    printf("Straight Line");
    else printf("Not a straight line");
}