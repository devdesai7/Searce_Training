#include <iostream>
#include <sstream>
#include <vector>

using namespace std;


class Stack
{

public:

	Stack(int sizez)
	{
		arr = new int[sizez]; 
		max = new int[sizez]; // Stack to track the Max Number 
		top = -1;
		maxtop = -1;
		size = sizez;
	}
	void push(int data)
	{
		if (top > size)
		{
			cout << " Stack Overflow ";
			return;
		}
		arr[++top] = data;
		if (top == -1)
		{
			max[++maxtop] = data;
		}
		if (data > max[maxtop])
		{
			max[++maxtop] = data;
		}

	}
	int pop()
	{
		if (top == -1)
		{
			cout << "Stack Underflow";
			return 0;
		}
		if (max[maxtop] == arr[top])
		{
			max[maxtop--];
		}

		return arr[top--];
	}
	int getMax()
	{
		if (top == -1)
		{
			cout << "Stack Underflow";
			return 0;
		}

		return max[maxtop];

	}
private:
	int* arr;
	int* max;
	int top;
	int maxtop;
	int size;
};



int main()
{
	int n; // n to take number of operation 
	cout << "Enter number of operations :";
	cin >> n;
	Stack S(n); 

	int Opt;
	string menu ;
	vector<string> Data;  
	cin.ignore();
	for (int i = 0; i < n; i++) { //Getting all the operations N times in String 
		
		getline(cin, menu);
		Data.push_back(menu);

	}
	for (int i = 0; i < n; i++) { //Performing actions on all the queries 


		//	Opt = stoi(Data[i]); //Converting String to Integer 
			stringstream ss(Data[i]); //Used StringStream as alternative to Stoi in above line
			ss >> Opt;
			if (Opt == 1)
			{

				//int data = stoi(Data[i].substr(Data[i].find(" ")+1, Data[i].length()-2)); // Fetching after space value 
				int data;
				ss >> data;
				S.push(data);
			}
			else if (Opt == 2)
			{
				S.pop();
			}
			else if (Opt == 3)
			{
				cout << S.getMax() << endl;

			}
			else
			{
				break;
			}
			

		}
	
}

