#pragma once
class MyTeacher {
public:
	int age;
	const char* name;
public:
	void setAge(int age);
	int getAge();
	void setName(char* name);
	const char* getName();
};