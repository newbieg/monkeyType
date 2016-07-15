#include <iostream>
#include <cstdlib>

class typeMonkey
{
	public:
	typeMonkey();
	void start();
	void stop();

	private:
	bool flag;
	
};

using namespace std;

typeMonkey::typeMonkey()
{
	srand(time(NULL));
}

void typeMonkey::start()
{
	flag = true;
	char alpha;
	while(flag)
	{
		alpha = rand()%27;
		alpha += 'a';
		if(alpha > 'z')
		{
			alpha = ' ';
		}
		cout << alpha;
	}

}

void typeMonkey::stop()
{

}


int main()
{
	typeMonkey bob;
	bob.start();
	
}
