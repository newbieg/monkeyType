#include "monkeyType.h"
#include "setWords.h"
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int monkeysInTroop = 1000;
	int wordsPerMonkey = 1000;
	cout << "Loading Dictionary... \n";
	setWords diction;
	diction.load("linux.words");
	diction.toLower();
	cout << "Done" << endl;
	cout << "\nMonkey troop is typing... \n";
	vector <monkeyType> troop;
	monkeyType bob;
	for(int count = 0; count < monkeysInTroop; count ++)	
	{
		bob.start(wordsPerMonkey);
		troop.push_back(bob);
		cout << count << " Monkies done.\n";
	}
	cout << "Done.\n";


	string wordsFound = "";
	cout << "Checking each monkey's writing skills\n";
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

	cout << wordsFound << endl;
	

	// cout << wordsFound << endl;
	
}
