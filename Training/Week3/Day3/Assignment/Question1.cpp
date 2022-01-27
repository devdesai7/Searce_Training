#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

//For Comparing while sorting the element in pair in the vector 
bool sortbySecondElement(const pair<int, int>& x,
	const pair<int, int>& y)
{
	return (x.second < y.second);
}

int main()
{
	pair<int, int> data; // Creating a Pair elements for Ti Li
	vector<pair<int, int>> V; //For Storing above in pair in the vector

	// Taking User Input and storing into vector of pair
	int n;
	cout << "Enter The Customers:  ";
	cin >> n;
	cin.ignore();

	int temp_data[2];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t i = 0; i < 2; i++)
		{
			cin >> temp_data[i];
			
		}
		data.first = temp_data[0];
		data.second = temp_data[1];
		V.push_back(data);
	}
	//End Storing Data

	
	sort(V.begin(), V.end(), sortbySecondElement); //Sorting the elements on basis of Li

	int avg_sum =0;
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += V[i].second; //Applying the logic to calculate the avg waiting time
		avg_sum += sum  - V[i].first;
	}

	cout << (avg_sum / n);

}



