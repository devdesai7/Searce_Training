#include <iostream>
#include <list>
#include <array>
#include <algorithm>

using namespace std;

//Seperate Chaining Practice
class Hash {
public : 
	Hash(int val) 
	{
		this->Data = val;
		table = new list <int>[Data];

	}
	void insert(int key)
	{
		int i = hashFunc(key);
		table[i].push_back(key);
	}
	void deleteHash(int key)
	{
		int index = hashFunc(key);
		list <int>::iterator i;

		for (i = table[index].begin(); i != table[index].end(); i++) {
			if (*i == key) {
				break;
			}
		}
		if (i != table[index].end()) {
			table[index].erase(i);
		}
	}
	int hashFunc(int x) 
	{
		return (x % Data);
	}
	void display()
	{
		for (int i = 0; i < Data; i++) 
		{
			for (auto x : table[i]) 
			{
				cout <<" " << x;
			}
		}
		cout << endl;
	}

private : 
	int Data;
	list <int> *table;

};


int main()
{
	Hash hash(5);
	hash.insert(10);
	hash.insert(20);
	hash.insert(40);
	hash.insert(50);
	hash.display();
	hash.deleteHash(20);
	hash.display();

	//Array inbuilt Practice 

	array<int,10> arr = {1,3,5,7,2,9,4,8,0,6};
	
	sort(arr.begin(), arr.end());
	cout << arr.front() << endl;
	cout << arr.back() << endl;

	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " " ;
	}


}


