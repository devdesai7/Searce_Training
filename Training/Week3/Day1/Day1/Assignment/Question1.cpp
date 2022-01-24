#include <iostream>
using namespace std;

int * Reversed_Array(int *p,int len)
{
	int* l = p; //Storing the first element of the array
	int* q = p + len -1 ; //Storing the element of the array
	int checker = len / 2; // Creating a breakpoint for loop
	while (len-- != checker) // The loop will iterate half of the elements in array by swapping them on every iterate 
	{

		// Swap Logic 
		int temp = *p;
		*p = *q;
		*q = temp;

		//Counters for moving upwards and downwards in the array
		p++;
		q--;
		
	}

	return l; //Returning the orginal pointer address (Alternative we can also return void as the address remain the same)
}

int main()
{
	int q,p[100];
	cout << "Enter the legth of array\n";
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> p[i];
	}
	int *temp =Reversed_Array(&p[0], q); // Getting the pointer from the Reversed function

	for (size_t i = 0; i < q; i++)
	{
		cout << temp[i]<< " ";
	}

}

