#include <stdio.h>
#include <stdlib.h>
struct emploee
{
    char name[50];
    int id;
};
int main()
{
    struct emploee emp1={"Amira khaled",2},emp2={"Mostafa",3};
    struct emploee *arr[2]={&emp1,&emp2};
    struct emploee*(*p)[2]=&arr;
    printf("Emploee name:%s\n",(*(*p+1))->name);
    printf("Emploee ID:%d",(*(*p+1))->id);


    return 0;
}
