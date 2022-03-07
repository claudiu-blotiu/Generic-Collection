#include"ListaGen.h"

template<typename T>

class Stiva
{
private:

	Node<T>* head = NULL;

public:

	//add start
	void push(T obj)
	{
		if (head == NULL)
		{
			head = new Node<T>();
			head->next = NULL;
			head->data = obj;
		}
		else
		{
			Node<T>* nou = new Node<T>();
			nou->next = head;
			nou->data = obj;

			head = nou;
		}
	}

	// eraseLast
	void pop()
	{
		head = head->next;
	}

	void show()
	{
		Node<T>* iterator = head;
		while (iterator != NULL)
		{
			cout << iterator->data->description() << endl;

			iterator = iterator->next;
		}
	}

	//return head
	T peek()
	{
		return head->data;
	}

	// return true/false;
	bool isEmpty()
	{
		return this->head != NULL;
	}








};
