#include<stdio.h> // to compute simple intrest given the principal,intrest and time
#include<math.h>
#include<conio.h>

int main() {
    float si,p,r,t;

    printf("enter the values of p,r,t : \n");
    scanf("%f%f%f",&p,&r,&t);

    si = (p*r*t)/100;

    printf("the simple interst is %f \n",si);
    return 0;
}