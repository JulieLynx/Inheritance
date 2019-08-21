#include<iostream>
#include<string>
using namespace std;

class Human
{
	string first_name;
	string last_name;
	unsigned int age;

public:
	const string& get_first_name() const
	{
		return this->first_name;
	}
	const string& get_last_name() const
	{
		return this->last_name;
	}
	unsigned int get_age() const
	{
		return this->age;
	}
	void set_first_name(const string& first_name)
	{
		this->first_name = first_name;
	}
	void set_last_name(const string& last_name)
	{
		this->last_name = last_name;
	}
	void set_age(unsigned int age)
	{
		this->age = age;
	}

	Human(const string& first_name, const string&  last_name, unsigned int age)
	{
		set_first_name(first_name);
		set_last_name(last_name);
		set_age(age);
		cout << "HConstructor:\t" << this << endl;
	}
	
virtual	~Human()
	{
		cout << "HDestructor:\t" << this << endl;
	}

	virtual void info()
	{
		cout << last_name << " " << first_name << " " << age << "let.\n";
	}
	/*virtual void some_metod = 0;*/
};
class Student : public Human
{
	string speciality;
	string group;
	unsigned int year;
	unsigned int rating;
public:
	const string& get_speciality()const
	{
		return this->speciality;
	}
	const string& get_group()const
	{
		return this->group;
	}
	unsigned int get_year()const
	{
		return this->year;
	}

	unsigned int get_rating()const
	{
		return this->rating;
	}
	void set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	void set_year(unsigned int year)
	{
		this->year = year;
	}
	void set_group(unsigned int group)
	{
		this->group = group;
	}
	void set_rating(unsigned int rating)
	{
		this->rating = rating;
	}

	Student(const string& first_name, const string& last_name, unsigned int age, const string& speciality, const string&  group, unsigned int year, unsigned int rating) :Human(first_name, last_name, age)
	{
		this->speciality = speciality;
		this->year = year;
		this->rating = rating;
		this->group = group;
		cout << "SConstructor:\t" << this << endl;
	}

	~Student()
	{
		cout << "SDestructor:\t" << this << endl;
	}
	void info()
	{
		Human::info();
		cout << speciality << " " << group << " " << year << " kurs,rating " << rating << endl;
	}
	void some_method()
	{
		cout << "chto to dlya prilichiya" << endl;
	}
};
class Teacher : public Human
{
	string speciality;
	unsigned int year;
	unsigned int expirience;
public:
	const string& get_speciality()const
	{
		return this->speciality;
	}
	unsigned int get_expirience()const
	{
		return this->expirience;
	}
	unsigned int get_year()const
	{
		return this->year;
	}


	void set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	void set_year(unsigned int year)
	{
		this->year = year;
	}
	void set_expirience(unsigned int group)
	{
		this->expirience = expirience;
	}


	Teacher(const string& first_name, const string& last_name, unsigned int age, const string& speciality, unsigned int year, unsigned int experience) :Human(first_name, last_name, age)
	{
		this->speciality = speciality;
		this->year = year;
		this->expirience = experience;
		cout << "TConstructor:\t" << this << endl;
	}

	~Teacher()
	{
		cout << "TDestructor:\t" << this << endl;
	}
	virtual void info()
	{
		Human::info();
		cout << speciality << " " << expirience << " лет" << year << " лет" << endl;
	}
	void some_method()
	{
		cout << "chto to dlya prilichiya" << endl;
	}
};

class Graduate : public Student
{
	string diploma_theme;

public:
	const string& get_diploma_theme()const
	{
		return this->diploma_theme;
	}

	void set_diploma_theme(const string& speciality)
	{
		this->diploma_theme = speciality;
	}



	Graduate(
		const string& first_name, const string& last_name, unsigned int age,
		const string& speciality, const string& group, unsigned int year, unsigned int rating,
		const string& diploma_theme)
		:Student(first_name, last_name, age, speciality, group, year, rating), diploma_theme(diploma_theme)
	{
		cout << "GConstructor:\t" << this << endl;
	}

	~Graduate()
	{
		cout << "GDestructor:\t" << this << endl;
	}
	void info()
	{
		Student::info();
		cout << "Тема дипломного проекта" << diploma_theme << endl;
	}
	
};

ostream& operator<<(ostream& os, const Human& obj)
{
	os << obj.get_last_name() << " " << obj.get_first_name() << " " << obj.get_age() << "let.\n";
	return os;
}
ostream& operator<<(ostream& os, const Student& obj)
{
	os << (Human&)obj;
	os << obj.get_last_name() << " " << obj.get_first_name() << " " << obj.get_age() << "let.\n";
	return os;
}
ostream& operator<<(ostream& os, const Teacher& obj)
{
	os << (Human&)obj;
	os<< obj.get_speciality() << " " << obj.get_expirience() << " лет" << obj.get_year() << " лет" << endl;
	return os;
}
ostream& operator<<(ostream& os, const Graduate& obj)
{
	os << (Student&)obj << endl;;
	os << "Тема дипломного проекта: " << obj.get_diploma_theme();
	return os;
}
void main()
{
	setlocale(LC_ALL, "");
	//Human h("Василий", "Дурко", 21);
	//h.info();
	//Student s("Игорь", "Васильев", 19, "повар", "СТ ПУ 34а", 1, 0);
	//s.info();
	//Teacher Andrey("Андрей", "Анатольевич", 41, "Программирование", 20, 3);
	//Graduate Anatolievich("Андрей", "Анатольевич", 41, "Программирование",
	//	"STU 34a", 3,1," Новые мышки");
	//Human* pAnd = &Andrey;
	//Human* pAna = &Anatolievich;
	//cout << "\n\\\\\\\\\\\\\\\\\\\\\\\\\n";
	//pAnd->info();
	////Human(*pAnd).info();
	//cout << "\n\\\\\\\\\\\\\\\\\\\\\\\\\n";

	Human*group[] =
	{
		new Graduate("Виталий","Гавриш",20,"РПО","СТ ПУ 34а",1,100,"Самообучение ИИ +ы и -ы"),
		new Student("Юлия","Рыбакова",18,"РПО","СТ ПУ 34а",1,70),
		new Teacher("Андрей","Кобылинский",40,"HardwarePC",18,1),
		new Student("Евгений","Ковтун",18,"РПО","СТ ПУ 34а", 1, 70),
		new Graduate("Мариванна","Забрянская",17,"РПО","СТ ПУ 34а",1,80,
			"Как разработать свою игру, чтобы тебя хоть кт-то заметил"),
		new Teacher("Роман","Шерстюк",33,"WebDev",5,1)
	};

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		cout << "\n---------------------------------\n";
	
		if (typeid(*group[i]) == typeid(Student))
			cout << *dynamic_cast<Student*>(group[i]) << endl;

		if (typeid(*group[i]) == typeid(Graduate))
			cout << *dynamic_cast<Graduate*>(group[i]) << endl;

		if (typeid(*group[i]) == typeid(Teacher))
			cout<<*dynamic_cast<Teacher*>(group[i]) << endl;


		//group[i]->info();
		//cout << *group[i] << endl;
	}
	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		delete group[i];
	}
	
}