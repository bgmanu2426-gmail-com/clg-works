#include<stdio.h> // to make sum of two integers
#include<math.h>
#include<conio.h>

int main() {
    int a,b,total;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);

    total=a+b;
    printf("the sum of two numbers is %d \n",total);
    return 0;
}