#include "setWords.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	if(argc > 1)
	{
		string word = argv[1];
		setWords bob;
		bob.load("linux.words");
		cout << "Loading Dictionary \n";
		if(bob.checkSpell(word))
		{
			cout << "Good Spellin'\n";
		}
		else
		{
			cout << "Not Good.\n";
		}
	}
	else
	{
		cout << "Expected one input word to test.";
	}
}


