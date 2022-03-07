#include"StivaGen.h"

template<typename T>

class Coada
{
private:

	Node<T>* head = NULL;

public:

	void push(T object)
	{
		if (head == NULL)
		{
			head = new Node<T>();
			head->next = NULL;
			head->data = object;
		}
		else
		{
			Node<T>* nou = new Node<T>();

			nou->next = NULL;
			nou->data = object;

			Node<T>* iterator = new Node<T>();

			iterator->next = head;

			while (iterator->next != NULL)
			{
				iterator = iterator->next;
			}
			iterator->next = nou;
		}
	}

	void pop()
	{
		
		head = head->next;
		
		

	}

	T peek()
	{
		return head->data;
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

	bool isEmpty()
	{
		return this->head != NULL;
	}







};
