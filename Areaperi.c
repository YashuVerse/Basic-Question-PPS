#include <stdio.h>
int main() {
    int radius;
    printf("Radius of the circle :");
    scanf("%d" , &radius);
    int area=3.14*radius*radius;
    printf("The area of the circle = %d \n" ,area);
    int peri=2*3.14*radius;
    printf("The preimeter is equal to: %d \n" ,peri);
    return 0;



}