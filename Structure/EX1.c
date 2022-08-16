#include <stdio.h>
#include <stdlib.h>
struct students
{
    char name [50];
    int roll;
    int marks;
};
int main()
{
    struct students x;
    printf("Enter the student name:");
    gets(x.name);
    printf("Enter the student roll:");
    scanf("%d",&x.roll);
    printf("Enter the student mark:");
    scanf("%d",&x.marks);
    printf("Student information:\n");
    printf("Student name:%s\nStudent roll:%d\nStudent mark:%d",x.name,x.roll,x.marks);

    return 0;
}
