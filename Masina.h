#include"Persoana.h"

class Masina
{
private:

	int id = 1;
	string brand = "";
	int speed = 1;

public:

	Masina()
	{

	}

	Masina(int id, string brand, int speed)
	{
		this->id = id;
		this->brand = brand;
		this->speed = speed;
	}

	void setId(int id)
	{
		this->id = id;
	}
	int getId()
	{
		return this->id;
	}

	void setBrand(string brand)
	{
		this->brand = brand;
	}
	string getBrand()
	{
		return this->brand;
	}

	void setSpeed(int speed)
	{
		this->speed = speed;
	}
	int getSpeed()
	{
		return this->speed;
	}

	string description()
	{
		string text = "";

		text += "ID: " + to_string(this->id) + "\n";
		text += "Brand: " + this->brand + "\n";
		text += "Speed: " + to_string(this->speed) + "\n";

		return text;
	}


};


