////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 1 September 2015
// Program 4 - 12356 - Army Buddies
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
12356 - Army Buddies

Nlogonia is fighting a ruthless war against the neighboring country of Cubiconia. The Chief General of
Nlogonia�s Army decided to attack the enemy with a linear formation of soldiers, that would advance
together until conquering the neighboring country. Before the battle, the Chief General ordered that
each soldier in the attack line, besides protecting himself and attacking, should also protect his two
(nearest) neighbors in the line, one to his left and one to his right. The Chief General told the soldiers
that for each of them, his �buddies� would be these two neighbors, if such neighbors existed (because
the leftmost soldier does not have a left neighbor and the rightmost soldier does not have a right
neighbor). The Chief General also told the soldiers that protecting their buddies was very important
to prevent the attack line from being broken. So important that, if the left or right buddy of a soldier
is killed, then the next living neighbor to the left or to the right of the soldier, respectively, should
become his buddy.

The battle is fierce, and many soldiers in the attack line are being killed by fire shots, grenades and
bombs. But following the Chief General�s orders, immediately after knowing about losses in the attack
line, the Army�s information systems division has to inform the soldiers who their new buddies are.
You are given the number of soldiers in the attack line, and a sequence of loss reports. Each loss
report describes a group of contiguous soldiers in the attack line that were just killed in the battle.
Write a program that, for each loss report, prints the new buddies formed.

Input
Each test case is described using several lines. The first input line contains two integers S and B
representing respectively the number of soldiers in the attack line, and the number of loss reports
(1 ? B ? S ? 105). Soldiers are identified by different integers from 1 to S, according to their
positions in the attack line, being 1 the leftmost soldier and S the rightmost soldier. Each of the next
B input lines describes a loss report using two integers L (left) and R (right), meaning that soldiers
from L to R were killed (1 ? L ? R ? S). You may assume that until that moment those soldiers were
alive and were just killed.
The last test case is followed by a line containing two zeros.

Output
For each test case output B + 1 lines. In the i-th output line write the new buddies formed by removing
from the attack line the soldiers that were just killed according to the i-th loss report. That is, for the
loss report �L R�, print the first surviving soldier to the left of L, and the first surviving soldier to the
right of R. For each direction, print the character �*� (asterisk) if there is no surviving soldier in that
direction. Print a line containing a single character �-� (hyphen) after each test case.

Sample Input
1 1
1 1
10 4
2 5
6 9
1 1
10 10
5 1
1 1
0 0

Sample Output
* *
-
1 6
1 10
* 10
* *
-
* 2
-

use a vector or a list


*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

	return 0;
}