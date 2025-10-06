#include<stdio.h>

int main(){

    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    printf("\n Table of %d : \n ", n);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
    
}