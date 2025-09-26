#include <stdio.h>
int main() {
    int c;
    printf("Enter Temperature in Celsius: \n");
    scanf("%d" ,&c);
    float f;
    f=(c*1.8)+32;
    printf("Temperature in Fahrenheit %f \n" ,f);
    


    return 0;
}