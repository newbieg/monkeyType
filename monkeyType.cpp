#include "monkeyType.h"
#include <iostream>

using namespace std;

monkeyType::monkeyType()
{
	srand(time(NULL));
}

void monkeyType::start(int number)
{
	flag = true;
	char alpha;
	int count = 0;
	string word = "";
	vector <string> contents;
	while(number > count)
	{
		alpha = rand()%28;
		alpha += 'a';
		if(alpha > 'z')
		{
			contents.push_back(word);
			count ++;
			word = "";
		}
		else
		{
			word += alpha;
		}
	}
	monkeyBook = contents;
}

vector <string> monkeyType::getTyping()
{
	return monkeyBook;
}

void monkeyType::print()
{
	for(int i = 0; i < monkeyBook.size(); i ++)
	{
		cout << monkeyBook[i] << " ";
	}
}

/*
int main()
{
	monkeyType bob;
	string words = bob.start(1000);
	cout << words;	
	
}
*/
