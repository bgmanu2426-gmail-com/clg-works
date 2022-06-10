#include<stdio.h> // to get the memory size of diffrent data types
#include<math.h>
#include<conio.h>

int main()
{
    int a,b,c;
    float d;
    char ch;

    printf("enter the values : \n");
    scanf("%d%d%d%f%c",&a,&b,&c,&d,&ch);

    printf("size of a = %d bytes \n size of b =%d bytes \n size of c =%d bytes \n size of d =%d bytes \n size of ch =%d bytes \n "
    ,sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(ch));

    return 0;


}