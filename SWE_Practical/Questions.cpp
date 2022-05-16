#include "Questions.h"
#include <iostream>

Questions::Questions()
{

}

Questions::~Questions()
{

}

void Questions::DisplayQuestion()
{
	string q1 {"How much wood could a woodchuck chuck if a woodchuck could chuck wood?\n a)3\n b)30 \n c)5 \n d)What's a woodchuck?"};
	string q2{ "What does the phrase 'Cogito ergo sum' mean?\n a) I think, therefore I am\n b)nothing gold can stay \n c)the inner machinations of my mind are an enigma\n d)live and let live" };
	string q3{ "Which of these video game franchises is known for its punishing difficulty?\n a)Pokemon \n b)Animal Crossing\n c) Dark Souls\n d)Super Mario Bros." };
	string q4{ "Someone once said 'the opposite of love is not hate, it's ___\n a)disgust\n b)indifference\n c)spite\n d)disdain" };

	
	int random = (rand() % 3);
	string questArr[4]{ q1, q2, q3, q4 };
	cout << questArr[random];

	//set correct answer for each question
	char correct;
	if (random == 0)
	{
		correct = 'd';
	}
	else if (random == 1)
	{
		correct = 'a';
	}
	else if (random == 2)
	{
		correct = 'c';
	}
	else
	{
		correct = 'b';
	}
	
	//prompt and evaluate answer
	char guess;
	cout << endl;
	cin >> guess;

	if (guess == correct)
	{
		cout << endl << "That's correct!, thanks for playing.";
	}

	else if (guess != correct)
	{
		cout << endl << "Sorry, that is incorrect. Better luck next time!";
	}

    
}



