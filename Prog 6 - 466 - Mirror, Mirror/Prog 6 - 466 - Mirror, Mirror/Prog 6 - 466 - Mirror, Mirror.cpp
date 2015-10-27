////////////////////////////////////////////////////
// Name: Taylor Murphy
// Class : CMPS 4883 Advanced Programing Techniques
// Date : 10 September 2015
// Program 6 - 466 - Mirror, Mirror
// I, Taylor Murphy, State that all of the following is my code.
////////////////////////////////////////////////////
/*
466 - Mirror, Mirror

A square pattern of light and dark cells is shown in its original state and a transformed state. 
Write a program that will recognize the minimum transformation that has been applied to the 
original pattern given the following list of possible transformations:

90 Degree Rotation:
The pattern was rotated to the right 90 degrees.

180 Degree Rotation:
The pattern was rotated to the right 180 degrees.

270 Degree Rotation:
The pattern was rotated to the right 270 degrees.

Vertical Reflection:
The pattern was reflected through a horizontal mirror positioned above the pattern.

Combination:
The pattern was subjected to a vertical reflection followed by one of the rotations.

Preservation:
The original pattern was preserved (the new pattern is identical to the original).

Improper:
The new pattern was not obtained via any of these treansformations.

Input

The input file will consist of an unknown number of pattern datasets on the standard input. Each 
pattern dataset will consist of an integer on a line by itself, which gives the dimensions of the 
square containing the pattern (the size will range from 1 to 10). The following lines will contain 
each line of the original and new (transformed) patterns in a side-by-side format, separated by a space. 
Light squares will be indicated by a dot (period), while dark squares will be represented with an X.

Output

The output from your program will be a sentence describing the relationship that the new pattern bears 
to the original. Each sentence will begin with a pattern ID number (starting with 1) and end stating 
the relatinship representing the minimal amount of work necessary to derive the new pattern from the 
original. For the purpose of evaluating the amount of work needed, rotations are considered less work 
than reflections, and smaller rotations are less work than larger ones. Of course, ``preservation'' 
involves no work at all.

Note that only the above possibilities should be considered -- there is no such thing as a 
``360 degree rotation'' for this problem (such a transformation would ``preserve'' the pattern), nor is 
there a ``horizontal reflection''. Also, remember that when a single rotation or reflection is not 
sufficient, your program should next consider rotated versions after a vertical reflection. Although 
a combination transformation might yield the same new pattern as one of the single transformations alone, 
the single transformation is the one you should output (the minimal transformation). Your output should be 
a complete sentence, ending with a period.

Look at the sample output below for the exact format.

Sample Input/Output

5										Pattern 1 was rotated 90 degrees.
X...X ....X
.X... ...X.
...X. .X...
..X.X ..X..
....X XX..X

6										Pattern 2 was rotated 270 degrees.
....XX X....X
...X.. X.X...
XX..X. .X..X.
..X... ...X.X
...X.. ..X...
..X..X ..X...

2										Pattern 3 was preserved.
X. X.
.X .X

4										Pattern 4 was reflected vertically.
..X. ...X
XX.. ....
.... XX..
...X ..X.

5										Pattern 5 was improperly transformed.
X.... .X...
.X... ..X..
.X... ..X..
...X. ....X
....X X....

4										Pattern 6 was reflected vertically and rotated 270 degrees.
.X.. ..X.
.X.X X...
.... ..XX
..X. ....

2										Pattern 7 was rotated 180 degrees.
.. XX
XX ..

Notes:
Use Vectors of Strings to scoop up each row

*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	
	return 0;
}

The Plussians believe that the
Airport Based Cargo Distribution & Embarkation Facility
(
ABCDEF
in
short) at the
Cosco International Airport
(
CIA
) is the largest such facility in the whole world though
second largest in Plussia.Cargo planes arrive from and leave for many countries all around the world
(Cermany, Q.S.A, Capan, Custralia etc.are some to name).
ABCDEF
is engaged in distributing,
loading and unloading the cargoes carried by these planes.
Each cargo is a cubic box of xed size and has a tag attached to it naming the destination country.
For convenience, each country is assigned a unique ID.For example, if there are
n
countries, each
country gets a unique integer ID ranging from 1 to
n
.
Every country
X
has its own
cargo station
identied by its country ID.There are two platforms
(platform
A
and platform
B
) in each station.In platform
A
are put those cargoes which are to be
transported(by air) to country
X
at some convenient time.Platform
B
is actually a queue of cargoes
which are to be carried to countries other than country
X
.The cargo stations have a circular(ring)
arrangement, that is, if there are
n
stations then each of the following station - pairs are adjacent :
(1
	;
2)
;
(2
	;
3)
;
(3
	;
4)
; : : : ;
(
	n
