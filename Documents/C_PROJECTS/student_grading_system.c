#include <stdio.h>
int main () {

char name[20];
int maths,eng,phy;
float average;
char grade;

    for(int i = 0; i < 5; i++){
    printf("Student: %d\n", i + 1);
        
        printf("Enter Student name: ");
        scanf(" %[^\n]", name);
        printf("Enter Score for Maths: ");
        scanf("%d", &maths);
        printf("Enter Score for English: ");
        scanf("%d", &eng);
        printf("Enter Score for Physics: ");
        scanf("%d", &phy);

        average = (maths + phy + eng) / 3.0;

        if(average >= 70 && average < 100)
        grade = 'A';
        else if(average >= 60 && average < 70)
        grade = 'B';
        else if(average >= 50 && average < 60)
        grade = 'C';
        else if(average >= 45 && average < 50)
        grade = 'D';
        else {
            grade = 'F';
        }

        printf("Name: %s\n", name);
        printf("Scores: %d %d %d\n", maths, eng, phy);
        printf("Average: %.2f\n", average);
        printf("Grade: %c\n", grade);

    }

return 0;

}