# monkeyType

In this program we will be creating a wrather large collection of randomly created characters. These characters will then be tested against a dictionary of US/British English words (dictionary provided by "/usr/share/dict" on a linux machine). 

Let's see if shakespear's genius can truly be reproduced by a monkey creating a program to type random letters.

Now let's do the math. If a monkey could type for 8 hours a day all year long (no vacation or sick days) and it could type at 30 words per minute;
	8hr/day X 365days/year X 60 min/hr X 30wpm = 5,256,000 words per year.
	
My findings are about 700,000 "recognizeable" words will be created out of the 5 million garbled words. Recognizable is in quotations because most of these words are in fact single letters of the alphabet, abreviations, or linux commands because of my choice of dictionary refference. 

To compile use a c++ 11 standards capable compiler;
	g++ -std=c++11 monkeyType.cpp main.cpp setWords.cpp


