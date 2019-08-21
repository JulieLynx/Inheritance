#include<iostream>
#include<string>
#include"Human.h"
using namespace std;
#pragma once


class Student;
ostream& operator<<(ostream& os, const Student& obj);
class Student : public Human
{
	string speciality;
	string group;
	unsigned int year;
	unsigned int rating;
public:
	const string& get_speciality()const
		;
	const string& get_group()const
		;
	unsigned int get_year()const
		;
	unsigned int get_rating()const
		;
	void set_speciality(const string& speciality)
		;
	void set_year(unsigned int year)
		;
	void set_group(unsigned int group)
		;
	void set_rating(unsigned int rating)
		;

	Student(const string& first_name, const string& last_name, unsigned int age, const string& speciality, const string&  group, unsigned int year, unsigned int rating) :Human(first_name, last_name, age);
	~Student()
		;
	void info()
		;
	void some_method();
	
};
