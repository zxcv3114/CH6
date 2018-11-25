#include<staio.h>
#include<stdlib.h>
#define ISSUES 5
#define RATINGS  10

void recordResponse(int i, int response);
void highestRatings();
void lowertRating();
float averageRating(int issue);
void displayResults();

int responses[ISSUES][RATINGS];
const char *topics[ISSUES] = { "Global warming","The Economy","War",
	"Health Care","Education" };

int main(void)
{
	int response;
	int i;

	do
	{
		printf("please rate the following topic on a scale from 1-10"
			"\n 1=least important, 10=most important\n");
		for (i = 0; i < ISSUES; i++)
		{
			do
			{
				printf("%s", topics[i]);
				printf("?");
				scanf_s("%d", &response);
			} while (response < 1 || response>10);
			recordResponse(i, response);


		}
		printf("Enter 1 to stop.Enter 0 to rate the issues again");
		scanf_s("%d", &response);
	} while (response != 1);

	displayResult();
	system("pause");
	return 0;
}
void recordResponse(int issue, int rating)
{
	response[issue][rating - 1]++;

}
void highestRatings(void)
{
	int highRatinf = 0;
	int highTopic = 0;
	int i;
	int j;
	for (i = 0; i < ISSUES; i++)
	{
		int topicRating = 0;
		for (j = 0; j < RATINGS, j++)
		{
			topicRating += respomses[i][j] * (j + 1);
		}
		if (highRating < topicRating)
		{
			highRating = topicRating;
			highTopic = i;
		}


	}
	printf("The highest rated topic was");
	printf("%s", topics[highTopic]);
	printf(" with a total rating of %d\n", highRating);

}
void lowerRating(void)
{
	int lowRating;
	int lowTopic = 0;
	int i;
	int j;
	for (i = 0; i < ISSUES; i++)
	{
		topicRating += responses[i][j] * (j + 1);
	}
	if (i == 0)
	{
		lowRating = topicRating;
		
	}

	if(lowRating>topicRating)
	{
		lowRating = topicRating;

		lowTopic = i;
}

}
printf("The lowest rated ")