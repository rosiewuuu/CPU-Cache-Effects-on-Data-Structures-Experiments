#include<time.h>
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include "ulliststr.h"
//#include "ulliststr.cpp"
#include "list.h"

#define maxlength 10
using namespace std;
double elapsed_time(clock_t start, clock_t finish) { // returns elapsed time in milliseconds
	return (finish - start) / (double) (CLOCKS_PER_SEC );
}

int main() {

	int number = 500000;
	int array_1[number];
	List<int> list;
	ULListStr ull;
	clock_t start, finish;
	int a;

	for (int i = 0; i < number; i++) {
		//insert items in array, linked list, ull
		int x = ((clock() * rand() * 5679) % 256) + 5;
		array_1[i] = x;
		list.push_back(x);
		ull.push_back(x);
	}


	start = clock();
	for (int i = 0; i < number; i++) {
		a = array_1[i];

	}
	finish = clock();
	double array_time = elapsed_time(start, finish);

	start = clock();
	ull.traverse();
	finish = clock();
	double ull_time = elapsed_time(start, finish) ;

	start = clock();
	list.traverse();
	finish = clock();
	double list_time = elapsed_time(start, finish) ;

	cout << "Array traversal time: " << array_time <<" seconds."<< endl;
	cout << "ULL traversal time: " << ull_time <<" seconds."<< endl;
	cout << "Linked list traversal time: " << list_time <<" seconds."<< endl;

}
