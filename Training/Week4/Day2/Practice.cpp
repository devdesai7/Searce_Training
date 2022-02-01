#include <iostream>

using namespace std;

//Swap Logic
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
//Print Logic
void Print(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//Selection Sort
void SelectionSort(int arr[], int n)
{
    int min;
    for (size_t i = 0; i < n - 1; i++)
    {
        min = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
                swap(&arr[min], &arr[i]);
            }
        }
    }
}
//Bubble Sort
void BubbleSort(int arr[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {

        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {

                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
//Merge Sort
void merge(int arr[],int lower , int mid , int upper)
{
    int n = lower;
	int m = mid + 1;
	int k = lower;

	int temp[upper];

	while (n <= mid && m <= upper) {
		if (arr[n] <= arr[m]) {
			temp[k] = arr[n];
			n++;
			k++;
		}
		else {
			temp[k] = arr[m];
			m++;
			k++;
		}

	}

	while (n <= mid) {
		temp[k] = arr[n];
		n++;
		k++;

	}

	while (m <= upper) {
		temp[k] = arr[m];
		m++;
		k++;
	}

for (size_t i = lower; i <= upper; i++)
{
		arr[i] = temp[i];
}
 
}
void MergeSort(int arr[],int lower ,int upper)
{
if(lower<upper)
{
    int mid = (lower+upper)/2;
    MergeSort(arr,lower,mid);
    MergeSort(arr,mid+1,upper);
    merge(arr,lower,mid,upper);
}
}

//Insertion sort
void InsertionSort(int arr[], int n)
{
    int i,j,k;
    for (i = 1; i < n; i++)
    {
        j =i-1;
        k=arr[i];
        while (j>=0 && k < arr[j])
        {
                arr[j+1] = arr[j];
                j--;
        }
        arr[j+1]=k;
    }
}
int main()
{
    const int n = 10;
    int arr[n] = {1, 4, 2, 5, 7, 3, 9, 6, 0, 8};
    // SelectionSort(arr,n);
    BubbleSort(arr, n);
   //InsertionSort(arr, n);
  // MergeSort(arr,0,9);
  
    Print(arr, n);
}