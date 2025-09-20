// (k)
// Given the coordinates (x, y) of a center of a circle and it’s radius,
// write a program which will determine whether a point lies inside
// the circle, on the circle or outside the circle. 
#include <stdio.h>
#include <math.h>
void main(){
    float c1,c2;
    printf("Enter centers of the circle.\n");
    scanf("%f %f",&c1,&c2);
    float rad;
    printf("Enter radius of circle : \n" );
    scanf("%f",&rad);
    float p1,p2;
    printf("Enter coordinates of point : ");
    scanf("%f %f",&p1,&p2);
    float dist;
    dist = sqrt((p1 - c1) * (p1 - c1) + (p2 - c2) * (p2 - c2)); // distance of point from center formula = root[ (px - cx)^2 + (py-xy)^2  ]
    if (dist< rad){
        printf("Point is inside the circle")
    ;

    }
    else if (dist == rad){
        printf("Point is on the circle");
    
    }
    else printf("Point is outside the circle");
    
}