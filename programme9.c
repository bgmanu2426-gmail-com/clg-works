#include<stdio.h> // to add 2 matrix
#include<conio.h>
#include<math.h>

int main()
{
int a[10][10],b[10][10],c[10][10],i,j,R,C;
printf("Enter the order of matrix : \n");
scanf("%d%d",&R,&C);

printf("enter the elements of matrix a : \n");
for(i = 0; i<R ; i++)
{
for(j =0; j<C; j++)
{
scanf("%d",&a[i][j]);
}}

printf("enter the elements of matrix b : \n ");
for(i = 0; i<R ; i++)
{
for(j =0; j<C; j++)
{
scanf("%d",&b[i][j]);
}}

for(i = 0; i<R ; i++)
{
for(j =0; j<C; j++)
{
c[i][j] = a[i][j] + b[i][j];
}}

printf("resultant matrix is : \n");

for(i = 0; i <R; i++)
{
for(j = 0; j <C; j++)
{
printf("%4d",c[i][j]);
}
printf(" \n");
}
return 0;
}
