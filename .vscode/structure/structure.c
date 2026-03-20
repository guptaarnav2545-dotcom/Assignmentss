#include<stdio.h>
struct student
{
    char name[10];
    int roll,m1,m2,s;
    float result;
}
    void main()
{
    int i;
    char name[10];
    int roll,m1,m2,s;
    float result;
    struct student s[5];
    for(i=0;i<2;i++)
    {
        printf("\nEnter name: ");
        scanf("%s",s[i] name);
        printf("\nEnter roll no: ");
        scanf("%d",&s[i] roll);
        printf("\nEnter the marks in both subjects: ");
        scanf("%d %d",&s[i] m1,&s[i] m2);
        s[i]result=(s[i]m1+s[i]m2)/2;
        printf("\nResult: %f",result);
    }
}

