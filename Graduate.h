#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
#pragma once



class Graduate;
ostream& operator<<(ostream& os, const Graduate& obj);

class Graduate : public Student
{
	string diploma_theme;

public:
	const string& get_diploma_theme()const;
	void set_diploma_theme(const string& speciality);




	Graduate(
		const string& first_name, const string& last_name, unsigned int age,
		const string& speciality, const string& group, unsigned int year, unsigned int rating,
		const string& diploma_theme)
		:Student(first_name, last_name, age, speciality, group, year, rating), diploma_theme(diploma_theme);

	~Graduate();
	void info();


};
