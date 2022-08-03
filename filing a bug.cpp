#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
void filebug(int id)
{
    printf("**********");
    printf("FILING A BUG");
    printf("***********\n");
 
    // Current Time
    time_t CurrentTime;
    time(&CurrentTime);
 
    char name[20], bugtype[50];
    char bugdescription[1000];
    char bugpriority[30];
    int bugstatus;
 
    FILE* ptr;
 
    // User name
    printf("Enter your name:\n");
    scanf("%s", name);
    char ids[10];
    itoa(id, ids, 10);
    strcat(name, ids);
    char ex[] = ".txt";
    strcat(name, ex);
 
    // Filename of the Bug
    printf("Filename :%s\n", name);
    ptr = fopen(name, "w");
 
    // Case when file cannot be created
    if (ptr == NULL)
        printf("cannot create file!!!\n");
 
    fprintf(ptr, "DATE AND TIME : %s",
            ctime(&CurrentTime));
 
    // ID in the Text File
    fprintf(ptr, "BUG ID    :    %d\n", id);
 
    // Adding New Line in Text File
    fprintf(ptr, "\n");
 
    // Bug ID
    printf("BUG ID:%d\n", id);
 
    fprintf(ptr, "BUG FILED BY: %s\n",
            name);
    fprintf(ptr, "\n");
 
    printf("Enter bug type:\n");
    scanf(" %[^\n]", bugtype);
 
    // Bug Type
    fprintf(ptr, "TYPE OF BUG: %s",
            bugtype);
    fprintf(ptr, "\n");
 
    // Bug Priority
    printf("Enter bug priority:\n");
    scanf(" %[^\n]s", bugpriority);
 
    fprintf(ptr, "BUG PRIORITY: %s\n",
            bugpriority);
    fprintf(ptr, "\n");
 
    // Bug Description
    printf("Enter the bug description:\n");
    scanf(" %[^\n]s", bugdescription);
 
    fprintf(ptr, "BUG DESCRIPTION: %s\n",
            bugdescription);
    fprintf(ptr, "\n");
 
    printf("Status of bug:\n");
    printf("1. NOT YET ASSIGNED\n");
    printf("2.IN PROCESS\n 3.FIXED\n");
    printf("4.DELIVERED\n ENTER YOUR CHOICE:");
 
    int j;
    scanf("%d", &j);
 
    // Date and time of Bug Creation
    fprintf(ptr, "DATE AND TIME: %s",
            ctime(&CurrentTime));
 
    fprintf(ptr, "BUG STATUS:");
 
    // Switching for the Status of the
    // Bug
    switch (j) {
    case 1:
        fprintf(ptr, "NOT YET ASSIGNED\n");
        break;
    case 2:
        fprintf(ptr, "IN PROCESS\n");
        break;
    case 3:
        fprintf(ptr, "FIXED\n");
        break;
    case 4:
        fprintf(ptr, "DELIVERED\n");
        break;
    default:
        printf("invalid choice\n");
        break;
    }
 
    fclose(ptr);
}
