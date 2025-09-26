#include <stdio.h>
int main () {
    int a,b,c;
    printf("Enter First Number: \n");
    scanf("%d" ,&a);
    printf("Enter Second Number: \n");
    scanf("%d" ,&b);
    printf("Enter Third Number: \n");
    scanf("%d" ,&c);
    if ((a>b)&&(a>c))
        printf("The Greatest Number is : %d \n" ,a);
    if ((b>a)&&(b>c))
        printf("The Greatest Number is : %d \n" ,b);
    if ((c>a)&&(c>b))
        printf("The Greatest Number is : %d \n" ,c);
    return 0;
    



}