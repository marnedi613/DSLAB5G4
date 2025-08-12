#include<stdio.h>
int main()
{
    int roll_no;
    char name[20];
    int marks[4];
    int i,total=0;
    printf("Enter the roll number : ");
    scanf("%d",&roll_no);
    printf("Enter your name : ");
    scanf("%[^\n]",&name);
    printf("Enter the 4 subject marks:\n ");
    for(i=0;i<4;i++)
    {
    printf("subjects %d: ",i+1);
    scanf("%d",&marks[i]);
    total+=marks[i];
}
printf("student details");
printf("roll number: %d\n",roll_no);
printf("name : %s\n",name);
for(i=0;i<4;i++)
{
                printf("marks scored in subject %d: %d\n",i+1,marks[i]);
 }
                printf("total amrks: %d\n",total);
                return 0;
}
