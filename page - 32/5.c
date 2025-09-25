#include <stdio.h>

int main(){

    int a, b, c, d, max;
    
    printf("Enter the four number : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) max = a; 
    else max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("The number of maximum is : %d \n ", max);

    return 0;
    
}