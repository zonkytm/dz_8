#include "Student.h"




istream& operator >>(istream& in, Student& p) {
	in >> p.name >> p.group >> p.age >> p.height >> p.weight>>p.on_lesson;
	return in;

}


ostream& operator <<(ostream& os, const Student& p) {
	return os << "name=" << p.name << "\tgroup= " << p.group << "\tage= " << p.age << "\theight= " << p.height << "\tweight= " << p.weight << "\ton_lesson= " << p.on_lesson << endl;

}