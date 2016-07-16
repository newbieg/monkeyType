#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>



class monkeyType
{
	public:
	monkeyType();
	void start(int count);
	std::vector <std::string> getTyping();
	void print();
	

	private:
	std::vector <std::string> monkeyBook;
	bool flag;
	
};
