// C program for changing Status
// in Bug Tracking System

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to Change the status
// of the Bug
void changestatus()
{
	printf("*************");
	printf("Change status");
	printf("**************\n");

	// Current Time
	time_t CurrentTime;
	time(&CurrentTime);

	FILE* file;
	char name[50];

	// Bug File name
	printf("Enter file name:\n");
	scanf("%s", name);
	char ex[] = ".txt";
	strcat(name, ex);

	// Opening the Bug in Append Mode
	file = fopen(name, "a");

	printf("\n 1. NOT YET ASSIGNED\n");
	printf(" 2.IN PROCESS\n 3.FIXED\n");
	printf(" 4.DELIVERED\n ENTER YOUR CHOICE:");

	// Change the Status
	int k;
	scanf("%d", &k);

	fprintf(file, "\n");
	fprintf(file, "DATE AND TIME : %s",
			ctime(&CurrentTime));

	fprintf(file, "BUG STATUS:");

	// Changing the status on the
	// basis of the user input
	switch (k) {
	case 1:
		fprintf(file, "NOT YET ASSIGNED\n");
		break;
	case 2:
		fprintf(file, "IN PROCESS\n");
		break;
	case 3:
		fprintf(file, "FIXED\n");
		break;
	case 4:
		fprintf(file, "DELIVERED\n");
		break;
	default:
		printf("invalid choice\n");
		break;
	}
	fclose(file);
}
