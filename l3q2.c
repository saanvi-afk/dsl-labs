struct student
{
    char name[50];
    int roll_no;
    char grade;
};

void read(struct student s[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("\nEnter details for student %d:\n",(i + 1));
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Roll Number: ");
        scanf("%d",&s[i].roll_no);
        printf("Grade: ");
        scanf(" %c",&s[i].grade);
        getchar();
    }
}

void display(struct student s[], int n)
{
    printf("\nName    Roll   Grade\n");
    for (int i=0;i<n;i++)
    {
    printf("%s  %d  %c\n",s[i].name,s[i].roll_no,s[i].grade);
    }
}

void sort(struct student s[], int n)
{
    struct student temp;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (s[i].roll_no>s[j].roll_no)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student students[n];
    read(students,n);
    printf("\nStudent Information\n");
    display(students,n);
    sort(students,n);
    printf("\nStudents Sorted by Roll Number\n");
    display(students,n);
    return 0;
}
