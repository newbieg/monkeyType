/*	HINT: the unordered list type requires a c++11 compile
 *	wrather than the normal version.
 * */

#include <unordered_set>
#include <string>
#include <iostream>
#include <fstream>

class words
{
	public:
	words();
	bool load(std::string fileName);
	bool save(std::string fileName);
	bool checkSpell(std::string word);
	bool checkSpell_CS(std::string word);
	void addWord(std::string word);
	void remove(std::string word);
	void print();
	
	

	private:

	std::unordered_set <std::string> uol; //short for un-ordered list

};


using namespace std;

words::words()
{

}

bool words::load(string fileName)
{
	string word;
	bool result = false;
	ifstream inFile(fileName.c_str());
	if(inFile.good())
	{
		result = true;
		while(!(inFile.eof()) && inFile.good())
		{
			inFile >> word; 
			addWord(word);
		}
	}
	
	inFile.close();
	return result;
}

bool words::save(string fileName)
{
	bool notDone = true;
	ofstream outFile(fileName.c_str());
	if(outFile.good())
	{
		for(const string& nextWord: uol)
		{
			outFile << nextWord << endl;
		}
	}	

	return !(notDone);
}


void words::addWord(string word)
{
	uol.emplace(word);
}

void words::remove(string word)
{
	uol.erase(word);
}

void words::print()
{
	for(const string& nextWord: uol)
	{
		cout << nextWord << endl;
	}
}

int main()
{
	words bob;
	bob.load("linux.words");
//	bob.print();
	bob.save("linux.words.txt");	
}
