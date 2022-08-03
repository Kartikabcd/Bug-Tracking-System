// C program for report a bug
// in Bug Tracking System

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to report the Bug
// in the Bug Tracking System
void report()
{
	printf("**********");
	printf("REPORT");
	printf("**********\n");

	FILE* fp;
	char name[50];

	// Asking the Filename to report
	// the bug of the file
	printf("Enter file name:\n");
	scanf("%s", name);
	char ex[] = ".txt";
	strcat(name, ex);

	// Opening the file into the
	// Read mode
	fp = fopen(name, "r");

	char ch;
	ch = getc(fp);

	// Character of the File
	while (ch != EOF) {
		printf("%c", ch);
		ch = getc(fp);
	}

	fclose(fp);
	getch();
}
