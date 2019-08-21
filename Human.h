#include<iostream>
#include<string>
using namespace std;
#pragma once


class Human;
ostream& operator<<(ostream& os, const Human& obj);

class Human
{
	string first_name;
	string last_name;
	unsigned int age;

public:
	const string& get_first_name() const
		;
	const string& get_last_name() const
		;
	unsigned int get_age() const
		;
	void set_first_name(const string& first_name)
		;
	void set_last_name(const string& last_name)
		;
	void set_age(unsigned int age)
		;

	Human(const string& first_name, const string&  last_name, unsigned int age)
		;

	virtual	~Human()
		;

	virtual void info()
		;
	/*virtual void some_metod = 0;*/
};







