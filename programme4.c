#include<stdio.h> // to swap the contents of two variables
#include<math.h>
#include<conio.h>

int main() {
    int a,b;

    printf("enter the values of a and b : \n");
    scanf("%d%d",&a,&b);

    a +=b;
    b = a-b;
    a -=b;

    printf("swapped values are a = %d and b = %d \n",a,b);
    return 0;
}