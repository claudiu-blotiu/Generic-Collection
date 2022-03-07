#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Persoana
{
private:

	int id = 1;
	string name = "";
	int age = 1;

public:

	Persoana()
	{

	}

	Persoana(int id, string name, int age)
	{
		this->id = id;
		this->name = name;
		this->age = age;
	}

	void setId(int id)
	{
		this->id = id;
	}
	int getId()
	{
		return this->id;
	}

	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}

	void setAge(int age)
	{
		this->age = age;
	}


	int getAge()
	{
		return this->age;
	}

	string description()
	{
		string text = "";

		text += "ID: " + to_string(this->id) + "\n";
		text += "Name: " + this->name + "\n";
		text += "Age: " + to_string(this->age) + "\n";

		return text;
	}



};


