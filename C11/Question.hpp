#ifndef QUESTION_HPP
#define QUESTION_HPP

#include <string>
#include <iostream>
using namespace std;

class BaseQuestion
{
public:
	void SetQuestion(const string& question);

protected:
	string m_question;
};

class FitbQuestion : public BaseQuestion
{
public:
	void SetAnswer(const string& answer);
	bool AskQuestion();

protected:
	string m_answer;
};

class TrueFalseQuestion : public BaseQuestion
{
public:
	void SetAnswer(bool isTrue);
	bool AskQuestion();

protected:
	bool m_isTrue;
};

class MultipleChoiceQuestion : public BaseQuestion
{
public:
	void SetAnswers(const string answers[4], int correctIndex);
	bool AskQuestion();

protected:
	string m_answers[4];
	int m_correctIndex;
};

#endif
