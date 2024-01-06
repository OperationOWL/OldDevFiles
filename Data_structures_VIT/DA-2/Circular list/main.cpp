#include <iostream>
#define SIZE 5
using namespace std;

class queue
{
	private:
		int items[SIZE], front, rear;

	public:
		queue()
		{
			front = -1;
			rear = -1;
		}

	bool isFull()
	{
		if (front == 0 && rear == SIZE - 1)
		{
			return true;
		}
		if (front == rear + 1)
		{
			return true;
		}
		return false;
	}

	bool empty()
	{
		if (front == -1)
			return true;
		else
			return false;
	}

	void enq(int element)
	{
		if (isFull())
		{
			cout << "queue is full";
		}
		else
		{
			if (front == -1) front = 0;
			rear = (rear + 1) % SIZE;
			items[rear] = element;
			cout << endl <<
				"Inserted " << element << endl;
		}
	}

	int deq()
	{
		int element;
		if (empty())
		{
			cout << "queue is empty" << endl;
			return (-1);
		}
		else
		{
			element = items[front];
			if (front == rear)
			{
				front = -1;
				rear = -1;
			}
			else
			{
				front = (front + 1) % SIZE;
			}
			return (element);
		}
	}

	void display()
	{

		int i;
		if (empty())
		{
			cout << endl <<
				"Empty queue" << endl;
		}
		else
		{
			cout << "Front -> " << front;
			cout << endl <<
				"Items -> ";
			for (i = front; i != rear; i = (i + 1) % SIZE)
				cout << items[i];
			cout << items[i];
			cout << endl <<
				"Rear -> " << rear;
		}
	}
};

int main()
{
	queue q;
	q.deq();
	q.enq(1);
	q.enq(2);
	q.enq(3);
	q.enq(4);
	q.enq(5)
	q.enq(6);
	q.display();
	int elem = q.deq();
	if (elem != -1)
		cout << endl <<
		"Deleted Element is " << elem;
	q.display();
	q.enq(7);
	q.display();
	q.enq(8);
	return 0;
}