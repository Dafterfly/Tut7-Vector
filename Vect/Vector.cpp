#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <ctime>

using namespace std;

int main()
{
	vector <int> vect; // create an arbitrary sized vector

	int randomNo;
	// Generate vector
	srand(time(NULL)); // seed randomizer
	for (i = 0; i < 20; i++)
	{
		randomNo = rand() % 99 + 1; // randomize numbers across an arbitrary range
		vect.push_back(randomNo);
	}

}