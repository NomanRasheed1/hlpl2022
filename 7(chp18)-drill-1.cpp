// Part 1 of the drill,Define a global int array ga of ten ints initialize




#include "std_lib_facilities.h"

// defining global array

    int ga[10] ={1,2,4,8,16,32,64,128,256,512};

    void f(int a[], int n)
{

// define local array
	
	    int la[10];
	
//Copy the values from ga into la
	    
	for (int i = 0;i < 10;i++)
		la[i] = ga[i];
	    
// Print out the elements of la
	    
	   
	for (int i = 0;i < 10;i++)
		cout<<la[i]<<" ";

// defining pointer p
	    
	int* p = new int[n];
	
// copy argumented from argument arr to free-store

	    for (int i = 0;i < 10;i++)
		p[i] = a[i];
// printing
	    
	cout << endl;
	for (int i = 0;i < 10;i++)
		cout << p[i] << " ";
	cout << endl;
	delete[] p;
}
int main()
{
	f(ga, 10);
	int aa[10] = {1,2,6,24,120,720,5040,40320,362880,3628800};
	f(aa, 10);

	
	return 0;
}
