#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <ctime>

using namespace std;

template <typename t>
void printVect(vector<t> vec) // prints a vector of an arbitrary type
{
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << *v << endl;
		v++;
	}
	cout << endl;
}

int main()
{
	vector <int> vect; // create an arbitrary sized vector
	
	int i; 
	int randomNo;
	// Generate vector
	srand(time(NULL)); // seed randomizer
	for (i = 0; i < 20; i++)
	{
		randomNo = rand() % 99 + 1; // randomize numbers across an arbitrary range
		vect.push_back(randomNo);
	}

	// Print Generated vector: using iterators
	cout << "Generated vector:" << endl;
	printVect(vect);

	// Sort vector - sort() sorts in ascending order
	sort(vect.begin(), vect.end());
	reverse(vect.begin(), vect.end()); // reverse to get in descending order

	// Print Sorted vector: using iterators
	cout << "Sorted vector:" << endl;
	printVect(vect);

	return 0;
}