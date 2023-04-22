#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int choice;
    char file_name[100], ch, data[500];
    FILE *fp;

    printf("\nFile Operations Menu");
    printf("\n---------------------");
    printf("\n1. Create a new file");
    printf("\n2. Open an existing file");
    printf("\n3. Read data from a file");
    printf("\n4. Write data to a file");
    printf("\n5. Close a file");
    printf("\n6. Exit");

    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("enter name of the file to be created : ");
        scanf("%s", file_name);
        fp = fopen(file_name, "w");
        if (fp == NULL)
        {
            printf("cannot create the file : ");
            exit(1);
        }
        printf("file created successfully !!");
        fclose(fp);
        break;

    case 2:
        printf("enter the file to be opened : ");
        scanf("%s", file_name);
        fp = fopen(file_name, "r");
        if (fp == NULL)
        {
            printf("cannot open the file : ");
            exit(1);
        }
        printf("file opened successfully !!");
        fclose(fp);
        break;

    case 3:
        printf("Enter the filename to read: ");
        scanf("%s", file_name);

        fp = fopen(file_name, "r");

        if (fp == NULL)
        {
            printf("\nError opening file!");
            exit(1);
        }

        printf("Data read from the file:\n");
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }

        fclose(fp);
        break;

    case 4:
        printf("Enter the filename to write: ");
        scanf("%s", file_name);

        fp = fopen(file_name, "w");

        if (fp == NULL)
        {
            printf("\nError opening file!");
            exit(1);
        }

        printf("Enter data to write to the file: ");
        scanf(" %[^\n]", data);

        fputs(data, fp);

        printf("Data written to the file successfully!");
        fclose(fp);
        break;

    case 5:
        printf("enter the file name to close : ");
        scanf("%s", file_name);
        fp = fopen(file_name, "r");
        if (fp == NULL)
        {
            printf("cannot open the file : ");
            exit(1);
        }
        printf("file closed successfully !!");
        fclose(fp);
        break;

    case 6:
        printf("\nexiting ....\n");
        exit(0);
        break;

    default:
        printf("invalid : ");
        break;
    }

    return 0;
}