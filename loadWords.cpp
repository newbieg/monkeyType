#include <vector>
#include <string>
#include <fstream>

class words
{
	public:
	words();
	bool load(std::string fileName);
	bool save(std::string fileName);
	bool checkSpell(std::string word);
	bool checkSpell_CS(std::string word);
	bool addWord(std::string word);
	bool remove(std::string word);
	std::string nextword(int position);
	
	

	private:

	unsigned int cursor;
	std::vector <std::string> num;
	std::vector <std::string> a;
	std::vector <std::string> b;
	std::vector <std::string> c;
	std::vector <std::string> d;
	std::vector <std::string> e;
	std::vector <std::string> f;
	std::vector <std::string> g;
	std::vector <std::string> h;
	std::vector <std::string> i;
	std::vector <std::string> j;
	std::vector <std::string> k;
	std::vector <std::string> l;
	std::vector <std::string> m;
	std::vector <std::string> n;
	std::vector <std::string> o;
	std::vector <std::string> p;
	std::vector <std::string> q;
	std::vector <std::string> r;
	std::vector <std::string> s;
	std::vector <std::string> t;
	std::vector <std::string> u;
	std::vector <std::string> v;
	std::vector <std::string> w;
	std::vector <std::string> x;
	std::vector <std::string> y;
	std::vector <std::string> z;
	std::vector <std::string> ncw;

};


using namespace std;

words::words()
{
	cursor = 0;
}

bool words::load(string fileName)
{
	string word;
	bool result = false;
	ifstream inFile(fileName.c_str());
	if(inFile.good())
	{
		result = true;
		while(inFile.eof() && inFile.good())
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
		while(outFile.good() && notDone)
		{
			outFile << this->nextword(cursor) << endl;
		}
	}	
	return !(notDone);
}

string words::nextword(int position)
{
	return "Not Implemented...";
}

bool words::addWord(string word)
{
	return false;
}

int main()
{
	words bob;
	bob.load("linux.words");
	bob.save("linux.words.txt");	
}
