/******************************************************************/

#include <iostream>
#include "header.h"

using namespace std;

/******************************************************************/

int main ()
{
	int list[SIZE] = {22,2,24,5,6,14,16,2,22,30,3};
	
	cout << endl << "STARTING LIST:" << endl;
	
	display(list,SIZE);
	
	cout << endl;
	
	binary_sort(list,0, SIZE-1);
	
	cout << "SORTED LIST:" << endl;
	
	display(list,SIZE);
	
	cout << endl;
	
	cout << "/***** TESTS *****/" << endl << endl;
	
	cout << "At what index is number 24 in list from 0 - 10 (answer 9)";
	cout << endl;
	cout << "Result: " << binary_search(24, list, 0, 10) << endl;
	
	cout << "At what index is number 24 in list from 2 - 6 (answer -1)";
	cout << endl;
	cout << "Result: " << binary_search(24, list, 2, 6) << endl;
	
	cout << "At what index is number 22 in list from 0 - 10 (answer 7 or 8)";
	cout << endl;
	cout << "Result: " << binary_search(22, list, 0, 10) << endl;
	
	cout << endl;
	
	return 0;
}

/******************************************************************/
