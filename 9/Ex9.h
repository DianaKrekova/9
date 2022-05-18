#ifndef EX9_H
#define EX9_H
#include <iostream>
using namespace std;
class Property
{
public:
	Property();
	Property(double wth);
	double get_worth();
	virtual double tax() = 0;
	~Property();
private:
	double worth;
};

class Apartment:public Property
{

	
public:
	Apartment(double wth);
	double tax() override;
	~Apartment();
};

class Car :public Property
{

public:
	Car(double wth);
	double tax() override;
	~Car();
};

class CountryHouse :public Property
{

public:
	CountryHouse(double wth);
	double tax() override;
	~CountryHouse();
};
#endif
