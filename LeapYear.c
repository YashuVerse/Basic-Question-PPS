#include <stdio.h>
int main() {
    int a;
    printf("Enter the Year: \n");
    scanf("%d" ,&a);
    if (a%4==0)
        printf("Its a Leap Year \n");
    else
        printf("Its Not a Leap Year \n");
    return 0;


}