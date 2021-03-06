////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 1 September 2015
// Program 2 - 10082 - WERTYU
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
10082 - WERTYU

A common typing error is to place the hands on the keyboard one row to the right of the correct 
position. So Q is typed as W and J is typed as K and so on. You are to decode a 
message typed in this manner.

Input
Input consists of several lines of text. Each line may contain digits, spaces, upper case letters (except
Q, A, Z), or punctuation shown above [except back-quote ()]. Keys labelled with words [Tab, BackSp,
Control, etc.] are not represented in the input.

Output
You are to replace each letter or punction symbol by the one immediately to its left on the QWERTY
keyboard shown above. Spaces in the input should be echoed in the output.

Sample Input
O S, GOMR YPFSU/

Sample Output
I AM FINE TODAY.

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
	string AlphaInput =  "BCDEFGHIJKLMNOPRSTUVWXY,;[";
	string AlphaOutput = "VXSWDFGUHJKNBIOEARYCQZTMLP";
	string input;
	string output;
	string::iterator it;
	
	getline(cin, input);

	for (it = input.begin(); it != input.end(); it++)
	{
		cout << *it;
	}	

	return 0;
}