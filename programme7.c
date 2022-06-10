#include<stdio.h> // to find the factorial of the given number
#include<math.h>
#include<conio.h>

int main () {
    float n,fact = 1;
    printf("enter the number : \n");
    scanf("%f",&n);

    for (int i = 1; i <=n ; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of %f is %f",n,fact);
    return 0;
}