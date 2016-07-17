#include "monkeyType.h"
#include "setWords.h"
#include <fstream>
#include <vector>
#include <string>



using namespace std;

bool silence = false; // true = silence all output besides the final analyzed words

void qwrite(string input)
{
	if(!silence)
	{
		cout << input << endl;
	}
}

int main()
{
	int monkeysInTroop = 5256;
	int wordsPerMonkey = 1000;
	qwrite("Loading Dictionary... \n");
	setWords diction;
	diction.load("linux.words");
	diction.toLower();
	qwrite("Done\n");
	qwrite("\nMonkey troop is typing... \n");
	vector <monkeyType> troop;
	monkeyType bob;
	for(int count = 0; count < monkeysInTroop; count ++)	
	{
		bob.start(wordsPerMonkey);
		troop.push_back(bob);
		if(!silence)
			cout << count << " Monkies done.\n";
	}
	qwrite("Done.\n");


	string wordsFound = "";
	qwrite("Checking each monkey's writing skills\n");
	for(int i = 0; i < troop.size(); i ++)
	{
//		wordsFound += "\n\n";
		vector <string> input = troop[i].getTyping();
		for(int i = 0; i <  input.size(); i ++)
		{
			if(diction.checkSpell(input[i]))
			{
				wordsFound += input[i];
				wordsFound += " ";
			}
		}
	}

	cout << wordsFound + "\n";
	

	// qwrite(wordsFound << endl;
	
}
