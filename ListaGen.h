#include"Node.h"

template<typename T>

class ListaGen
{
private:

	Node<T>* head = NULL;

public:

	void add(T object) //addEnd
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
	
	void remove(int poz)
	{
		if (poz == 0)
		{
			head = head->next;
		}
		else
		{
			int ct = 0;

			Node<T>* iterator = head;

			while (iterator != NULL && ct != poz - 1)
			{
				iterator = iterator->next;

				ct++;
			}
			iterator->next = iterator->next->next;
		}
	}

	void remove(T object)
	{
		int poz = indexOf(object);

		if (poz != -1)
		{
			remove(poz);
		}
	}

	bool contains(T object)
	{
		int poz = indexOf(object);

		return poz != -1;
	}

	// return head
	bool isEmpty()
	{
		return this->head != NULL;
	}

	// pozitie
	int indexOf(T object)
	{
		Node<T>* iterator = head;

		int ct = 0;

		while (iterator != NULL)
		{
			if (iterator->data == object)
			{
				return ct;
			}

			ct++;
			iterator = iterator->next;
		}
		return -1;

	}

	int size()
	{
		Node<T>* iterator = head;

		int ct = 0;

		while (iterator != NULL)
		{
			ct++;

			iterator = iterator->next;
		}

		return ct;

	}

	T get(int poz)
	{
		Node<T>* iterator = head;

		int ct = 0;

		while (iterator != NULL && ct != poz)
		{
			iterator = iterator->next;
			ct++;
		}

		if (iterator != NULL)
		{
			return iterator->data;
		}

		return NULL;
	}

	Node<T>* itearator()
	{
		return head;
	}




};

