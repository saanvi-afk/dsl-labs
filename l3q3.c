#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

void read(struct Student *s, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("\nEnter details for student %d:\n",(i+1));
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Roll Number: ");
        scanf("%d",&s[i].roll_no);
        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
}


void show(struct Student *s, int n)
{
    printf("\nName  Roll No   Marks\n");
    for (int i=0;i<n;i++)
    {
        printf("%s   %d   %.2f\n",s[i].name,s[i].roll_no,s[i].marks);
    }
}

void topper(struct Student *s, int n)
{
    int top=0;
    for (int i=1; i<n;i++)
    {
        if (s[i].marks>s[top].marks)
        {
            top=i;
        }
    }
    printf("\nTopper\n");
    printf("Name: %s\n",s[top].name);
    printf("Roll No: %d\n",s[top].roll_no);
    printf("Marks: %.2f\n",s[top].marks);
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct Student students[n];
    read(students,n);
    show(students,n);
}
