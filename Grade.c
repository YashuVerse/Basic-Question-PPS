#include <stdio.h>

int main() {
    int maths,physics,english,hindi,social;
    printf("Enter Marks in Maths : \n");
    scanf("%d" ,&maths);
    printf("Enter Marks in Physics : \n");
    scanf("%d" ,&physics);
    printf("Enter Marks in English : \n");
    scanf("%d" ,&english);
    printf("Enter Marks in Hindi : \n");
    scanf("%d" ,&hindi);
    printf("Enter Marks in SST : \n");
    scanf("%d" ,&social);

    float total=maths+physics+english+hindi+social;
    printf("Your Total Marks are : %f \n" ,total);
    float percen=(total/500)*100;
    printf("Your Percentage : %f \n" ,percen);
    if ((percen>=90)&&(percen<=100))
        printf("You Got Grade A \n");
    if ((percen>=80)&&(percen<90))
        printf("You Got Grade B \n");
    if ((percen>=60)&&(percen<80))
        printf("You Got Grade C \n");
    if (percen<60)
        printf("You Got Grade D \n");
    if (percen>100)
        printf("Error \n");
    
    
    return 0;
}