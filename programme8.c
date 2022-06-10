#include<stdio.h> // the sum of each digit of a three digit number is reduces to one digit
#include<math.h>
#include<conio.h>

int main() {
    int i,n,rem,sum = 0;
    printf("enter the 3 digit number : \n");
    scanf("%d",&n);

    for (i = 0; i <= 3; i++)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n/10;
    }
    printf("sum of three digit number is : %d \n",sum);
    return 0;
}