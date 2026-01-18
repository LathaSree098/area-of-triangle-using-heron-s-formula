#include <stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3,S,area;
    printf("enter three sides of a triangle: ");
    scanf("%f  %f  %f",&s1,&s2,&s3);
    S=(s1+s2+s3)/2;
    area=sqrt(S*(S-s1)*(S-s2)*(S-s3));
    printf("Area of triangle is %f",area);
    
}
