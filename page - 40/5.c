#include <stdio.h>

int main(){
    int n;
    printf("enter a number for sequence : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ",i * i * i );
    }
    return 0;
}