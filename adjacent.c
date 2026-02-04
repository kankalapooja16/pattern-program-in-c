#include <stdio.h>

int main() {
    int rows;
    int columns;
    printf("enter no of rows \n");
    scanf("%d",&rows);
    printf("enter no of columns \n");
    scanf("%d",&columns);
    for(int i=1;i<=rows;i++)
    {
         for(int j=1;j<=columns;j++)
{
    if(j==1||i==rows||i>=j)
{
    printf("* ");
}
    else
{
    printf("  ");
}
}
    printf("\n");