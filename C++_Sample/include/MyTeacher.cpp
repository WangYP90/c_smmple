#include "MyTeacher.h"
void MyTeacher::setAge(int age) {
	this->age = age;
}
int MyTeacher::getAge() {
	return this->age;
}
void MyTeacher::setName(char* name) {
	this->name = name;
}
const char* MyTeacher::getName() {
	return this->name;
}