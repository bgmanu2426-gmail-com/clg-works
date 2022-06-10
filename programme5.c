#include<stdio.h> // to get the largest of three numbers
#include<math.h>
#include<conio.h>

int main () {
    int a,b,c;

    printf("enter the values a,b and c \n");
    scanf("%d%d%d",&a,&b,&c);

    if ( a>b && a>c)
    printf("a is the largest value");
    else if (b>a && b>c)
    printf("b is the largest value");
    else if (c>a && c>b)
    printf("c is the largest value");
    else
    printf("error");
    return 0;    
}