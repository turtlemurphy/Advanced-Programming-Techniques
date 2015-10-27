////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 3 September 2015
// Program 3 - 673 - Parentheses Balance
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
673 - Parentheses Balance

You are given a string consisting of parentheses () and []. A string of this type is said to be correct:

(a)
if it is the empty string
(b)
if A and B are correct, AB is correct,
(c)
if A is correct, (A) and [A] is correct.
Write a program that takes a sequence of strings of this type and check their correctness. Your program 
can assume that the maximum string length is 128.

Input
The file contains a positive integer n and a sequence of n strings of parentheses () and [], one string a line.

Output
A sequence of Yes or No on the output file.

Sample Input
3
([])
(([()])))
([()[]()])()

Sample Output
Yes
No
Yes

Notes
use getline
stringstream

str>>x

string line, s
getline(cin,line)
stringstream ss(line)
ss >> s

*/
#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	int count = 0, chrcount = 0;	
	string line, ct;
	
	getline(cin, ct);
	count = atoi(ct.c_str());
		
	for (int i = count; i > 0; i--)
	{
		line = "";
		getline(cin, line);
		chrcount = line.size();
		stack<char> balancerOPar, balancerCPar, balancerOBra, balancerCBra;

		if (line[0] == ']' || line[0] == ')')
		{
			cout << "No" << endl;
			continue;
		}
		else
		{
			for (int j = 0; j < chrcount; j++)
			{
				if (line[j] == ')')
				{
					balancerCPar.push(line[j]);
				}

				else if (line[j] == ']')
				{
					balancerCBra.push(line[j]);
				}

				else if (line[j] == '(')
				{
					balancerOPar.push(line[j]);
				}

				else if (line[j] == '[')
				{
					balancerOBra.push(line[j]);
				}
			}
		}
		
		if ((balancerOPar.size() == balancerCPar.size()) && (balancerOBra.size() == balancerCBra.size()))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}