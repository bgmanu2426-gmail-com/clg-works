#include<stdio.h> // to get the largest of three numbers using ternary oprators
#include<math.h>
#include<conio.h>

int main () {
    int a,b,c,large;

    printf("enter the values of a,b and c : \n");
    scanf("%d%d%d",&a,&b,&c);

    large = (a>b)?(a>c?a:c):(b>c?b:c);

    printf("largest value is %d \n",large);
    return 0;
}