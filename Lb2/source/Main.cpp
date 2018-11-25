#include<stdio.h>
#include<stdlib.h>
#define STU 3
#define EXAM 4

void minimum(int grades[][EXAM], int pupils, int tests);
void maximum(int grades[][EXAM], int pupils, int tests);
void average(int grades[][EXAM], int pupils, int tests);
void printArray(int grades[][EXAM], int pupils, int tests);
void printMenu(void);

int main()
{
	void(*processGrades[4])(int[][EXAM], int, int)
		= { printArray, minimum, maximum, average };
	int choice = 0;

	int studentGrades[STU][EXAM] = { 77,68,86,73,
									 96,87,89,78,
									 70,90,86,81 };
	while (choice != 4)
	{
		do
		{
			printMenu();
			scanf_s("%d", &choice);
		} while (choice < 0 || choice>4);

		if (choice != 4) {
			(*processGrades[choice])(studentGrades, STU, EXAM);
		}
		else {
			printf("Program Ended.\n");
		}
    }
	system("pause");
	return 0;
}



void minimum(int grades[][EXAM], int pupils, int tests)
{
	int i;
	int j;
	int lowGrade = 100;

	for  (i = 0; i <= pupils - 1; i++)
	{
		for (j = 0; j <= tests - 1; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}

		}

	}
	printf("\n\tThe lowest grade is %d\n", lowGrade);
}

void maximum(int grades[][EXAM], int pupils,int tests)
{
	int i;
	int j;
	int highGrade =0;
	for (i = 0; i <= pupils - 1; i++)
	{
		for (j = 0; j <= tests - 1; j++)

		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}


	printf("\n\tThe highest grade is %d\n", highGrade);

}

void average(int grades[][EXAM], int puplis, int tests)
{
	int i;
	int j;
	int total;
	printf("n");
	for (i = 0; i <= puplis - 1; i++)
	{
		total = 0;
		for (j = 0; j <= tests - 1; j++)
		{
			total += grades[i][j];
		}
		printf("\tThe average for student %d is %.1f\n",
			i + 1, (double)total / tests);


	}
}
void printArray(int grades[][EXAM], int pupils, int tests)
{
	int i;
	int j; 
	printf("\n\t                  [0]    [1]      [2]      [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\n\tstudantGrades[%d]", i);
		for (j = 0; j < tests; j++)
		{
			printf("  %-7d", grades[i][j]);

		}




	}


	printf("\n");
}
void printMenu(void)
{
	printf("\n\tEnter  a   choice:\n"
		"\t 0 print the array of grades\n"
		"\t 1 print the min grades\n"
		"\t 2 print the max grades\n"
		"\t 3 print the average on all"
		" tests for each student\n"
		"\t 4 Emd proaram\n"
		"\t?");






}




