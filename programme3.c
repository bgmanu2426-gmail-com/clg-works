#include<stdio.h> // to get the area of circle triangle square & rectangle
#include<math.h>
#include<conio.h>

int main() {
    float L,W,B,H,R;
    float cir,tri,sqr,rect;

    printf("enter the value of length width base height and radius : \n");
    scanf("%f%f%f%f%f",&L,&W,&B,&H,&R);
    
    cir = 3.142*pow(R,2);
    tri = 0.5*B*H;
    sqr = L*L;
    rect = L*W;

    printf("area of circle = %f \n area of triangle = %f \n area of square = %f \n area of rectangle = %f \n",cir,tri,sqr,rect);
    return 0;
}