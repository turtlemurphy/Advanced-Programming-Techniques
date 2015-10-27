////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 22 September 2015
// Prog 8 - 10226 - Hardwood Species
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
10226 - Hardwood Species

Hardwoods are the botanical group of trees that have broad leaves, produce a fruit or nut, 
and generally go dormant in the winter. America’s temperate climates produce forests with 
hundreds of hardwood species —trees that share certain biological characteristics. Although
oak, maple and cherry all are types of hardwood trees, for example, they are different 
species. Together, all the hardwood species represent 40 percent of the trees in the United 
States. On the other hand, softwoods, or conifers, from the Latin word meaning 
“cone-bearing”, have needles. Widely available US softwoods include cedar, fir, hemlock, 
pine, redwood, spruce and cypress. In a home, the softwoods are used primarily as structural 
lumber such as 2×4s and 2×6s, with some limited decorative applications. Using satellite 
imaging technology, the Department of Natural Resources has compiled an inventory of every
tree standing on a particular day. You are to compute the total fraction of the tree 
population represented by each species.

Input
The first line is the number of test cases, followed by a blank line. Each test case of 
your program consists of a list of the species of every tree observed by the satellite; 
one tree per line. No species name exceeds 30 characters. There are no more than 10,000 
species and no more than 1,000,000 trees. There is a blank line between each consecutive 
test cases.

Output
For each test case print the name of each species represented in the population, in 
alphabetical order, followed by the percentage of the population it represents, to 4 
decimal places. Print a blank line between 2 consecutive test cases.

Sample Input
1

Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow

Sample Output
Ash 13.7931
Aspen 3.4483
Basswood 3.4483
Beech 3.4483
Black Walnut 3.4483
Cherry 3.4483
Cottonwood 3.4483
Cypress 3.4483
Gum 3.4483
Hackberry 3.4483
Hard Maple 3.4483
Hickory 3.4483
Pecan 3.4483
Poplan 3.4483
Red Alder 3.4483
Red Elm 3.4483
Red Oak 6.8966
Sassafras 3.4483
Soft Maple 3.4483
Sycamore 3.4483
White Oak 10.3448
Willow 3.4483
Yellow Birch 3.4483


Notes:

output

start
case #
newline
case #
newline
case #
end

//iter->first;
//iter->second;

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

bool notAllSpace(char* s)
{
	for (int i = 0; s[i] != 0; i++)
	{
		if (s[i] != ' ')
		{
			return true;
		}
	}
	return false;
}

int main(int argc, char* argv[])
{
	int cases = 0;
	int a = 0;
	double percentage = 0.0000;
	char species[40];
	cout << std::fixed;
	cout << std::setprecision(4);

	cin >> cases;
	cin.getline(species, 35);
	cin.getline(species, 35);

	for (int acase = 0; acase < cases; acase++)
	{
		map<string, int> mymap;
		double count = 0.0000;
		cin.getline(species, 35); //skip space
		
		while (notAllSpace(species))
		{
			//cout << species << endl;
			mymap[species]++;
			count++;
			cin.getline(species, 35);
		}

		map<string, int>::iterator iter;
		iter = mymap.begin();
		
		for (iter = mymap.begin(); iter != mymap.end(); iter++)
		{
			a = (*iter).second;
			percentage = (a / count);
			cout << iter->first << " " << percentage * 100 << endl;
		}
		
		if (acase != (cases - 1))
		{
			cout << endl;
		}
	}
	return 0;
}