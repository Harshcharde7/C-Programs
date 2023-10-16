// C program for the implementation of
// menu driven program for student
// management system
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variable to keep track of
// number of students
int i = 0;

// Structure to store the student
struct sinfo {
	char fname[50];
	char lname[50];
	int roll;
	float cgpa;
	int cid[10];
} st[55];

// Function to add the student
void add_student()
{

	printf("\nAdd the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of student : ");
	scanf("%s", st[i].fname);
	printf("\nEnter the last name"
		" of student : ");
	scanf("%s", st[i].lname);
	printf("\nEnter the Roll Number : ");
	scanf("%d", &st[i].roll);
	printf("\nEnter the CGPA "
		"you obtained : ");
	scanf("%f", &st[i].cgpa);
	printf("\nEnter the course ID"
		" of each course : ");
	for (int j = 0; j < 5; j++) {
		scanf("%d", &st[i].cid[j]);
	}
	i = i + 1;
}

// Function to find the student
// by the roll number
void find_rl()
{
	int x;
	printf("\nEnter the Roll Number"
		" of the student : ");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[i].roll) {
			printf(
				"\n\nThe Students Details are : ");
			printf(
				"\n\nThe First name is %s",
				st[i].fname);
			printf(
				"\n\nThe Last name is %s",
				st[i].lname);
			printf(
				"\n\nThe CGPA is %f",
				st[i].cgpa);
			printf(
				"\n\nEnter the course ID"
				" of each course...");
		}
		for (int j = 0; j < 5; j++) {
			printf(
				"\nThe course ID are %d",
				st[i].cid[j]);
		}
		break;
	}
}

// Function to find the student
// by the first name
void find_fn()
{
	char a[50];
	printf("\nEnter the First Name"
		" of the student\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"\n\nThe Students Details are\n");
			printf(
				"\n\nThe First name is %s\n",
				st[i].fname);
			printf(
				"\n\nThe Last name is %s\n",
				st[i].lname);
			printf(
				"\n\nThe Roll Number is %d\n ",
				st[i].roll);
			printf(
				"\n\nThe CGPA is %f\n",
				st[i].cgpa);
			printf(
				"\n\nEnter the course ID of each course\n");

			for (int j = 0; j < 5; j++) {
				printf(
					"The course ID are %d\n",
					st[i].cid[j]);
			}
			c = 1;
		}
		else
			printf(
				"The First Name not Found\n");
	}
}

// Function to find
// the students enrolled
// in a particular course
void find_c()
{
	int id;
	printf("\nEnter the course ID : ");
	scanf("%d", &id);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		for (int d = 0; d < 5; d++) {
			if (id == st[j].cid[d]) {

				printf("\n\nThe Students Details are\n");
					
				printf(
					"\n\nThe First name is %s\n",
					st[i].fname);
				printf(
					"\n\nThe Last name is %s\n",
					st[i].lname);
				printf(
					"\n\nThe Roll Number is %d\n ",
					st[i].roll);
				printf(
					"\n\nThe CGPA is %f\n",
					st[i].cgpa);

				c = 1;

				break;
			}
			else
				printf(
					"The First Name not Found\n");
		}
	}
}

// Function to print the total
// number of students
void tot_s()
{
	printf("The total number of"
		" Student is %d\n",
		i);
	printf("\n You can have a "
		"max of 50 students\n");
	printf("\tyou can have %d "
		"more students\n",
		50 - i);
}

// Function to delete a student
// by the roll number
void del_s()
{
	int a;
	printf("\nEnter the Roll Number"
		" which you want "
		"to delete : ");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("\nThe Roll Number"
		" is removed Successfully\n");
}

// Function to update a students data
void up_s()
{

	printf("\nEnter the roll number"
		" to update the entry : ");
	long int x;
	scanf("%ld", &x);
	for (int j = 0; j < i; j++) {
		if (st[j].roll == x) {
			printf("1. first name\n"
				"2. last name\n"
				"3. roll no.\n"
				"4. CGPA\n"
				"5. courses\n");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("\nEnter the new "
					"first name : ");
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("\nEnter the new "
					"last name : ");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("\nEnter the new "
					"roll number : ");
				scanf("%d", &st[j].roll);
				break;
			case 4:
				printf("\nEnter the new CGPA : ");
				scanf("%f", &st[j].cgpa);
				break;
			case 5:
				printf("\nEnter the new courses : ");
				scanf(
					"%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}

// Driver code
void main()

{
	int choice, count;
	while (i = 1) {
		printf("\n\t\t\t\t\tWELCOME TO (PCET'S) PIMPRI CHINCHWAD UNIVERSITY\n\n");
		printf("\t\t\t\t\t****The Task that you "
			"want to perform****\n\n");
		printf("\t\t\t\t\t\t DEVELOPER-Harsh Charde\n");	
		printf("\n\t\t\t\t\t1... Add the Student Details\n");
		printf("\t\t\t\t\t2... Find the Student "
			"Details by Roll Number\n");
		printf("\t\t\t\t\t3... Find the Student "
			"Details by First Name\n");
		printf("\t\t\t\t\t4... Find the Student "
			"Details by Course Id\n");
		printf("\t\t\t\t\t5... Find the Total number"
			" of Students\n");
		printf("\t\t\t\t\t6... Delete the Students Details"
			" by Roll Number\n");
		printf("\t\t\t\t\t7... Update the Students Details"
			" by Roll Number\n");
		printf("\t\t\t\t\t8... To Exit\n");
		printf("\n\t\t\t\t\tEnter your choice to "
			"find the task : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			find_rl();
			break;
		case 3:
			find_fn();
			break;
		case 4:
			find_c();
			break;
		case 5:
			tot_s();
			break;
		case 6:
			del_s();
			break;
		case 7:
			up_s();
			break;
		case 8:
			exit(0);
			break;
		}
	}
}
