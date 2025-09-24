#include <stdio.h>

int main(){

    int a,b;

    printf("Enter the number : ");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("Maximum number is %d",a);
    }
    else if (b>a)
    {
        printf("Maximum nuber is %d",b);
    }
    
    else{
        printf("both number are equal %d", a);
    }
    return 0;
}