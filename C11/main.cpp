#include <iostream>
#include <string>
using namespace std;

#include "Question.hpp"

int main()
{
	int score = 0;

	FitbQuestion question1;
	question1.SetQuestion("What is 2 + 2?");
	question1.SetAnswer("4");
	if (question1.AskQuestion())
	{
		score++;
	}

	TrueFalseQuestion question2;
	question2.SetQuestion("Are we in Kansas?");
	question2.SetAnswer(true);
	if (question2.AskQuestion())
	{
		score++;
	}

	string answers[4] = { "30", "29", "28", "31" };
	MultipleChoiceQuestion question3;
	question3.SetQuestion("How many days are in December?");
	question3.SetAnswers(answers, 3);
	if (question3.AskQuestion())
	{
		score++;
	}

	cout << "Final score: " << score << endl;

	return 0;
}
