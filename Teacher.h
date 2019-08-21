#include<iostream>
#include<string>
#include"Human.h"
using namespace std;
#pragma once

class Teacher;
ostream& operator<<(ostream& os, const Teacher& obj);
class Teacher : public Human
{
	string speciality;
	unsigned int year;
	unsigned int expirience;
public:
	const string& get_speciality()const
		;
	unsigned int get_expirience()const
		;
	unsigned int get_year()const
		;


	void set_speciality(const string& speciality)
		;
	void set_year(unsigned int year)
		;
	void set_expirience(unsigned int group)
		;


	Teacher(const string& first_name, const string& last_name, unsigned int age, const string& speciality, unsigned int year, unsigned int experience) :Human(first_name, last_name, age);

	~Teacher()
		;
	virtual void info()
		;
	void some_method()
		;
};

