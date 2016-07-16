/*	HINT: the unordered list type requires a c++11 compile
 *	wrather than the normal version.
 * */

#include <unordered_set>
#include <string>

class setWords
{
	public:
	setWords();
	bool load(std::string fileName);
	bool save(std::string fileName);
	bool checkSpell(std::string word);
	void addWord(std::string word);
	void remove(std::string word);
	void toLower(); // converts all strings to lowerCase.
	void print();
	
	

	private:

	std::unordered_set <std::string> uol; //short for un-ordered list

};

