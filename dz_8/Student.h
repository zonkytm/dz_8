#ifndef student_H

#define student_H
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name="", group="";
	int age=0, height=0, weight=0;
	bool on_lesson=0;

};

istream& operator >>(istream& in, Student& p);
ostream& operator <<(ostream& os, const Student& p);

#endif