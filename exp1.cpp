#include<time.h>
#include<cstdlib>
#include<time.h>
#include <iostream>
#include <iomanip>
using namespace std;

double elapsed_time(clock_t start, clock_t finish) { // returns elapsed time in milliseconds
	return (finish - start) / (double) (CLOCKS_PER_SEC); //return in second
}
int main() {
	int number = 100000;
	int *array_1 = new int[number];
	int *array_2 = new int[number];
	clock_t start, finish;

	//loop 1
	start = clock();
	for (int i = 0; i < number; i++) {
		//int x = (rand()% 256) + 5;
		array_1[i] = rand();
	}
	for (int i = 0; i < number; i = i + 64) {
		for (int j = 0; j <= 16; j++) {
			array_1[i + j] *= 3;

		}
	}
	finish = clock();
	double loop1_time = elapsed_time(start, finish);

	//loop 2
	start = clock();
	for (int i = 0; i < number; i++) {
		//int x = (rand()% 256) + 5;
		array_2[i] = rand();
	}
	for (int i = 0; i < number; i = i + 64) {
		array_1[i] *= 3;

	}
	finish = clock();
	double loop2_time = elapsed_time(start, finish);

	cout << "Loop 1 time: " << loop1_time << " seconds." << endl;
	cout << "Loop 2 time: " << loop2_time << " seconds." << endl;
}
