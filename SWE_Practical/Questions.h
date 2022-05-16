#pragma once
#include <string>
using namespace std;

class Questions
{
public:
	Questions();
	~Questions();

	void DisplayQuestion();
	char correct;
	char guess;
};

