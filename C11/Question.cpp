#include "Question.hpp"

void BaseQuestion::SetQuestion(const string& question)
{
	m_question = question;
}

void FitbQuestion::SetAnswer(const string& answer)
{
	m_answer = answer;
}

bool FitbQuestion::AskQuestion()
{
	cout << "Question: ";
	cout << m_question << endl;

	string answer;
	cout << "What is your answer? ";
	getline(cin, answer);

	if (answer == m_answer)
	{
		cout << "Correct" << endl;
		return true;
	}
	else
	{
		cout << "Incorrect" << endl;
		return false;
	}
}

void TrueFalseQuestion::SetAnswer(bool isTrue)
{
	m_isTrue = isTrue;
}

bool TrueFalseQuestion::AskQuestion()
{
	cout << "Question: ";
	cout << m_question << endl;

	int input;
	bool answer;
	cout << "Answer: (1) True, (2) False" << endl << "Choice: ";
	cin >> input;

	if (input == 1)
	{
		answer = true;
	}
	else
	{
		answer = false;
	}

	if (m_isTrue == answer)
	{
		cout << "Correct" << endl;
		return true;
	}
	else
	{
		cout << "Incorrect" << endl;
		return false;
	}
}

void MultipleChoiceQuestion::SetAnswers(const string answers[4], int correctIndex)
{
	for (int i = 0; i < 4; i++)
	{
		m_answers[i] = answers[i];
	}

	m_correctIndex = correctIndex;
}

bool MultipleChoiceQuestion::AskQuestion()
{
	cout << "Question: ";
	cout << m_question << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << ". " << m_answers[i] << endl;
	}
	int answer;
	cout << "What is your answer? ";
	cin >> answer;
	
	if (answer - 1 == m_correctIndex)
	{
		cout << "Correct" << endl;
		return true;
	}
	else
	{
		cout << "Incorrect" << endl;
		return false;
	}
}