#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int ID;
    char name[30];
    float grade;
};

int main (void)
{
    struct student s1 = {100, "jiah", 4.0};
    s1.ID=101;
    strcpy(s1.name,"jiah2");
    s1.grade=2.2;
    printf("ID:%i,name:%s,grade:%f\n",s1.ID,s1.name,s1);

    return 0;

}