////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 8 September 2015
// Program 5 - 591 - Box of Bricks
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
591 - Box of Bricks

Little Bob likes playing with his box of bricks. He puts the bricks one upon another 
and builds stacks of different height. ``Look, I've built a wall!'', he tells his 
older sister Alice. ``Nah, you should make all stacks the same height. Then you would 
have a real wall.'', she retorts. After a little con- sideration, Bob sees that she 
is right. So he sets out to rearrange the bricks, one by one, such that all stacks 
are the same height afterwards. But since Bob is lazy he wants to do this with the 
minimum number of bricks moved. Can you help?

Input
The input consists of several data sets. Each set begins with a line containing the 
number n of stacks Bob has built. The next line contains n numbers, the heights hi 
of the n stacks. You may assume 1 < n < 50 and 1 < hi < 100

The total number of bricks will be divisible by the number of stacks. Thus, it is 
always possible to rearrange the bricks such that all stacks have the same height.

The input is terminated by a set starting with n = 0. This set should not be processed.

Output
For each set, first print the number of the set, as shown in the sample output. 
Then print the line ``The minimum number of moves is k.'', where k is the minimum 
number of bricks that have to be moved in order to make all the stacks the same height.

Output a blank line after each set.

Sample Input

6
5 2 4 1 7 5
0

Sample Output

Set #1
The minimum number of moves is 5.

5 2 4 1 7 5 - Move 0
4 3 4 1 7 5 - Move 1  1
4 4 4 1 6 5 - Move 2  1
4 4 4 2 5 5 - Move 3
4 4 4 3 4 5 - Move 4
4 4 4 4 4 4 - Move 5


add up bricks
divide by # of stacks --> (avg)
+1 to # of moves for every stack that is not equal to ((Brick #)/(Stacks #))


*/
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int brix;
	int brickTot = 0;
	int stackTot = 0;
	int avgBrixPerStack = 0;
	int Sum = 0;
	int setnum = 0;
	vector<int> v;
		
	cin >> N;

	while (N != 0)
	{
		setnum++;
		Sum = 0;
		brickTot = 0;
		stackTot = N;
		vector<int> v;
		vector<int>::iterator it;
		it = v.begin();

		for (int i = 0; i < N; i++)
		{
			cin >> brix;
			v.push_back(brix);
		}

		for (it = v.begin(); it != v.end(); it++)
		{
			brickTot += *it;
		}
		
		avgBrixPerStack = (brickTot/stackTot);

		for (it = v.begin(); it != v.end(); it++)
		{
			Sum += abs(*it - avgBrixPerStack);
		}
		
		cout << "Set #" << setnum << endl;
		cout << "The minimum number of moves is " << Sum / 2 << "." << endl;
		cin >> N;
	}
	return 0;
}