// OOPInheritanceExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Human
{
public:
    std::string GetName()
    {
        return name;
    }
	void SetName(std::string name)
	{
		this->name = name;  
	}
private:
    std::string name;

};


class Student : public Human
{
public:
	std::string GetGroup()
	{
		return group;
	}
	void  Learn()
	{
		std::cout << "I am learning" << std::endl;
	}
private:
    std::string group;
};


class ExtramuralStudent : public Student
{
public:
	void Learn()
	{
		std::cout << "I am learning not all time" << std::endl;
	}
};


class Professor : public Human
{
public:
	std::string GetSubject()
	{
		return subject;
	}
private:
    std::string subject;
};

int main()
{
	Student student;
	student.GetName();

	ExtramuralStudent extraSt;
	extraSt.Student::GetGroup();
}
