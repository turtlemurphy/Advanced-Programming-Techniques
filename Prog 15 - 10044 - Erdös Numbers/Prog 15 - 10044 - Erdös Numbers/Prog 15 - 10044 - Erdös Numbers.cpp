////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 13 October 2015
// Program 15 - 10044 Erdös Numbers
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
10044 Erdös Numbers

The Hungarian Paul Erdös (1913–1996, speak as “Ar-dish”) not only was one of the strangest mathematicians
of the 20th century, he was also one of the most famous. He kept on publishing widely
circulated papers up to a very high age and every mathematician having the honor of being a co-author
to Erdös is well respected.

Not everybody got the chance to co-author a paper with Erdös, so many people were content if they
managed to publish a paper with somebody who had published a scientific paper with Erdös. This
gave rise to the so-called Erdös numbers. An author who has jointly published with Erdös had Erdös
number 1. An author who had not published with Erdös but with somebody with Erdös number 1
obtained Erdös number 2, and so on.
Today, nearly everybody wants to know which Erdös number he or she has. Your task is to write a
program which computes Erdös numbers for a given set of scientists.

Input
The first line of the input contains the number of scenarios.
The input for each scenario consists of a paper database and a list of names. It begins with the line
P N
where P and N are natural numbers. Following this line are P lines containing descriptions of papers
(this is the paper database). A paper appears on a line by itself and is specified in the following way:
Smith, M.N., Martin, G., Erdos, P.: Newtonian forms of prime factors matrices
Note that umlauts like ‘ö’ are simply written as ‘o’. After the P papers follow N lines with names.
Such a name line has the following format:
Martin, G.

Output
For every scenario you are to print a line containing a string “Scenario i” (where i is the number of the
scenario) and the author names together with their Erdös number of all authors in the list of names.
The authors should appear in the same order as they appear in the list of names. The Erdös number
is based on the papers in the paper database of this scenario. Authors which do not have any relation
to Erdös via the papers in the database have Erdös number “infinity”.

Sample Input
1
4 3
Smith, M.N., Martin, G., Erdos, P.: Newtonian forms of prime factor matrices
Erdos, P., Reisig, W.: Stuttering in petri nets
Smith, M.N., Chen, X.: First oder derivates in structured programming
Jablonski, T., Hsueh, Z.: Selfstabilizing data structures
Smith, M.N.
Hsueh, Z.
Chen, X.
Universidad de Valladolid OJ: 10044 – Erdös Numbers 2/2

Sample Output
Scenario 1
Smith, M.N. 1
Hsueh, Z. infinity
Chen, X. 2


Notes:

	//BFS
	Q.insert(root);
	while !Q.empty()
	{
		x = Q.front();
		Q.pop();
		//for all adjacent veritices V
		//if not visited
		//Q.insert(v);
	}



*/

#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <map>

using namespace std;

//class Node
//{
//	public:
//		set<string> v;
//		unsigned int dist;
//		bool visited;
//};

//class Graph
//{
//	map<string, Node> G;
//	
//	public:
//		Graph::Graph()
//		{
//
//		}
//
//		Graph::~Graph()
//		{
//
//		}
//
//		int Graph::GetDist(string n)
//		{
//			int d;
//			map<string, Node >::iterator iter;
//			if ((iter = G.find(n)) != G.end)
//			{
//				d = (*iter).second.dist;
//				if (d < MAX) return d;
//				else return -1;
//			}
//			else
//				return -1;
//		}
// 
//		void Graph::addUEdge(string a, string b)
//		{
//			G[a].v.insert(b);
//			G[a].visited = false;
//			G[b].v.insert(a);
//			G[b].visited = false;
//		}
//
//		void Graph::Dump()
//		{
//			cout << "Graph Dump..." << endl;
//			for (map<string, Node >::iterator i = G.begin(); i != G.end(); i++)
//			{
//				cout << (*i).second.dist << " " << (*i).first << " : ";
//			
//				for (map<string, Node >::iterator j = (*i).second.v.begin(); j != (*i).second.v.end(); j++)
//				{
//					cout << (*j) << " ";
//				}
//			}
//		}
//
//		void Graph::BFS(string name)
//		{
//	
//		}
//
//};

int main(int argc, char* argv[])
{
	string input, names, title, temp, name, secondLine, scenarioNum, paperNum, namesNum;
	
	getline(cin, scenarioNum);
	cout << scenarioNum << '\n';
	
	getline(cin, secondLine);
	
	istringstream lineStream(secondLine);
	getline(lineStream, paperNum, ' ');
	getline(lineStream, namesNum, ' ');
	cout << paperNum << " " << namesNum << '\n';

	getline(cin, input);

	istringstream ss(input);

	getline(ss, names, ':');
	cout << names << '\n';
	getline(ss, title, ':');
	cout << title << '\n';

	istringstream nameStream(names);
	
	while (getline(nameStream, temp, ','))
	{
		name = "";
		name += temp;
		getline(nameStream, temp, ',');
		name += temp;
		cout << name << '\n';
	}
	
		

	return 0;
}