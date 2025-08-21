#include <stdio.h>

int main()
{
    char a1[100], a2[100], r[200];
    int i,j,pos,len,choice;
    while(1)
    {
        printf("\nChoose operation:\n");
        printf("1. Length of a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Compare two strings\n");
        printf("4. Insert substring\n");
        printf("5. Delete substring\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();

        if (choice==1)
        {
            printf("Enter string: ");
            gets(a1);
            i=0;
            while (a1[i]!='\0')
            i++;
            printf("Length: %d\n",i);
        }

        else if (choice==2)
        {
            printf("Enter first string: ");
            gets(a1);
            printf("Enter second string: ");
            gets(a2);
            i=0;
            while (a1[i]!='\0')
            {
                r[i]=a1[i];
                i++;
            }
            j=0;
            while (a2[j]!='\0')
            {
                r[i]=a2[j];
                i++;
                j++;
            }
            r[i]=' \0';
            printf("Concatenated string: %s\n", r);
        }

        else if (choice==3)
        {
            printf("Enter first string: ");
            gets(a1);
            printf("Enter second string: ");
            gets(a2);
            i=0;
            int equal=1;
            while (a1[i]!='\0' && a2[i]!='\0')
            {
                if (a1[i]!=a2[i])
                {
                    equal=0;
                    break;
                }
                i++;
            }

            if (a1[i]!='\0'||a2[i]!='\0')
            equal = 0;
            if (equal)
            printf("Strings are equal.\n");
            else
            printf("Strings are not equal.\n");
        }

        else if (choice==4)
        {
            printf("Enter main string: ");
            gets(a1);
            printf("Enter substring to insert: ");
            gets(a2);
            printf("Enter position to insert at: ");
            scanf("%d",&pos);
            getchar();
            i=0;
            int k=0;
            while (i<pos && a1[i]!='\0')
            {
                r[k++]=a1[i++];
            }
            j=0;
            while (a2[j]!='\0')
            {
                r[k++]=a2[j++];
            }

            while (a1[i]!='\0')
            {
                r[k++]=a1[i++];
            }

            r[k]='\0';
            printf("string: %s\n", r);
        }

        else if (choice==5)
        {
            printf("Enter string: ");
            gets(a1);
            printf("Enter position to delete from: ");
            scanf("%d",&pos);
            printf("Enter length of substring to delete: ");
            scanf("%d",&len);
            getchar();
            i=0;
            int k=0;
            while (i<pos && a1[i]!='\0')
            {
                r[k++]=a1[i++];
            }
            i=i+len;
            while (a1[i]!='\0')
            {
                r[k++]=a1[i++];
            }

            r[k]='\0';
            printf("string: %s\n",r);
        }
        else
        {
        printf("Invalid choice.\n");
        }
    }
}
