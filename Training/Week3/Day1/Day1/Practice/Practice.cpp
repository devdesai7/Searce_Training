#include <iostream>
#include <stack>
#include <queue>
using namespace std;

#define size 10

void Queue()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout << q.front();

	deque<int> dq;
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(30);

	cout << dq.front();
 
}
void Stack()
{

	stack <int> st;
	st.push(10);
	st.push(20);
	st.push(30);

	cout <<st.top();
	st.pop();
	cout << st.top();

}
class stack_user
{

public:

	stack_user()
	{
		arr = new int[size];
		top = -1;
	}
	void push(int data)
	{
		if (top > size)
		{
			cout << " Stack Overflow ";
			return;
		}
		arr[++top] = data;
	}
	int pop()
	{
		if (top == -1)
		{
			cout << "Stack Underflow";
			return 0;
		}
		
		return arr[top--];
	}
	int peek()
	{
		if (top == -1)
		{
			cout << "Stack Underflow";
			return 0 ;
		}

		return arr[top];

	}

private:
	int* arr;
	int top;
};
void Stack_User()
{
	stack_user s;

	s.push(10);
	s.push(20);
	cout << s.peek();
	cout << s.pop();
	cout << s.peek();

}
class queue_user
{
public:
	queue_user()
	{
		data = new int[size];
		
	}
	bool insert(int val)
	{
		if (end > size)
		{
			cout << "Queue Full";
			return false;
		}

		data[end++]= val;
		return true;
	}

	bool remove()
	{
		if (end == 0)
		{
			cout << "Queue Already Empty ";
		}
		for (size_t i = 1; i < end; i++)
		{
			data[i - 1] = data[i];
		}
		end--;
		return true;
	}

	void display()
	{
		for (size_t i = 0; i < end ; i++)
		{
			cout << data[i] << " <-- ";
		}
		cout << endl;
	}
private:
	int end = 0;
	int* data;
};
void Queue_User()
{
	queue_user q; 
	q.insert(10);
	q.insert(20);
	q.insert(30);
	q.display();
	q.remove();
	q.display();

}


int main()
{
//Stack_User();
//Queue_User();
//Stack();
//Queue();
}

