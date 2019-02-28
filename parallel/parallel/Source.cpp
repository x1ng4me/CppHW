#include<iostream>
#include<thread>
#include<omp.h>

using namespace std;

int main() {
	cerr << "\nMax threads:" << omp_get_max_threads();
	int num_thread = omp_get_thread_num();/**
#pragma omp parallel //if(num_thread >1) num_threads(4)
		{
			//cerr << "\nNested" << omp_get_thread_num()<<endl;
			cerr << "\nhello from thread" << " " << omp_get_thread_num() << endl;
		}*/
#pragma omp parallel for
	for (int i = 0l; i < 10; i++) {
		cerr << "\nhello for !" << omp_get_thread_num();
	}


	system("pause");
	return 0;
}