#include <stdio.h>

int main() {
    int columns;
    int i;
    printf("enter no of columns \n");
    scanf("%d",&columns);
    for(int i=1;i<=columns;i++)
    {
        printf("* \t");
    }
}