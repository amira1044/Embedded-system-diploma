#include <stdio.h>
#include <stdlib.h>
struct students
{
    char name[50];
    float marks;
}d[3];
void info()
{
  int i;
  printf("Enter information of students:\n\n");
  for(i=0;i<3;i++)
  {
      printf("For roll number %d\n",i+1);
      printf("Enter name:");
      scanf("%s",&d[i].name);
      printf("Enter marks:");
      scanf("%f",&d[i].marks);
      printf("\n");

  }
};
void print ()
{
    int i;
    printf("Information for students:\n\n");
    for(i=0;i<3;i++)
  {
      printf("information for roll number %d\n",i+1);
      printf("Name:%s\n",d[i].name);
      printf("marks:%.2f",d[i].marks);
      printf("\n");

  }
};
int main()
{
    info();
    print();
    return 0;
}
