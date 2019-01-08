#include <iostream>


using namespace std;

//C++����ת��
//static_cast �ձ����
//const_cast ȥ����
//dynamic_cast ��������תΪ��������
//reinterpret_cast ����ָ��ת�ͣ����߱���ֲ��

//ԭʼ����ת���������������һ��д�����ɶ��Բ��ߣ��п�����Ǳ�ڵķ���

/*
void* func(int type){	
	switch (type){
	case 1:	{
				int i = 9;
				return &i;
	}
	case 2:	{
				int a = 'X';
				return &a;
	}
	default:{
				return NULL;
	}

	}	
}

void func2(char* c_p){
	cout << *c_p << endl;
}

void main(){	
	//int i = 0;
	//�Զ�ת��
	//double d = i;
	//double d = 9.5;
	//int i = d;

	//int i = 8;
	//double d = 9.5;
	//i = static_cast<int>(d);
	
	//void* -> char*
	//char* c_p = (char*)func(2);
	//char* c_p = static_cast<char*>(func(2));

	//C++ ��ͼ����
	func2(static_cast<char*>(func(2)));
	//C
	func2((char*)(func(2)));
	
	system("pause");
}
*/


/*
void func(const char c[]){
	//c[1] = 'a';
	//ͨ��ָ���Ӹ�ֵ
	//�����˲���֪�������ת����Ϊ��ȥ����
	//char* c_p = (char*)c;
	//c_p[1] = 'X';
	//����˿ɶ���
	char* c_p = const_cast<char*>(c);
	c_p[1] = 'Y';

	cout << c << endl;
}

void main(){
	char c[] = "hello";
	func(c);

	system("pause");
}
*/

/*
class Person{
public:
	virtual void print(){
		cout << "��" << endl;
	}
};

class Man : public Person{
public:
	void print(){
		cout << "����" << endl;
	}

	void chasing(){
		cout << "���" << endl;
	}
};


class Woman : public Person{
public:
	void print(){
		cout << "Ů��" << endl;
	}

	void carebaby(){
		cout << "������" << endl;
	}
};

void func(Person* obj){	

	//������������еĺ�����תΪʵ������
	//����֪��ת��ʧ��
	//Man* m = (Man*)obj;
	//m->print();

	//ת��ʧ�ܣ�����NULL
	Man* m = dynamic_cast<Man*>(obj);	
	if (m != NULL){
		m->chasing();
	}

	Woman* w = dynamic_cast<Woman*>(obj);
	if (w != NULL){
		w->carebaby();
	}
}

void main(){
	
	//Woman w1;
	//Person *p1 = &w1;

	//func(p1);

	Woman w1;
	Woman* w_p = &w1;
	

	system("pause");
}
*/

/*
void func1(){
	cout << "func1" << endl;
}

char* func2(){
	cout << "func2" << endl;
	return "abc";
}

typedef void(*f_p)();

void main(){
	//����ָ������
	f_p f_array[6];
	//��ֵ
	f_array[0] = func1;

	//C��ʽ
	//f_array[1] = (f_p)(func2);
	//C++��ʽ
	f_array[1] = reinterpret_cast<f_p>(func2);

	f_array[1]();

	system("pause");
}

*/

#include <fstream>

//IO��
//�ı��ļ�����
/*
void main(){
	char* fname = "c://dest.txt";
	//�����
	ofstream fout(fname);
	//����ʧ��
	if (fout.bad()){ 
		return;
	}

	fout << "jack" << endl;
	fout << "rose" << endl;
	
	//�ر�
	fout.close();

	//��ȡ
	ifstream fin(fname);
	if (fin.bad()){
		return;
	}
	char ch;
	while (fin.get(ch)){
		//���
		cout << ch;
	}
	fin.close();

	system("pause");
}
*/

//�������ļ�
/*
void main(){
	char* src = "c://src.jpg";
	char* dest = "c://dest.jpg";

	//������
	ifstream fin(src, ios::binary);
	//�����
	ofstream fout(dest, ios::binary);

	if (fin.bad() || fout.bad()){
		return;
	}

	while (!fin.eof()){
		//��ȡ
		char buff[1024] = {0};
		fin.read(buff,1024);

		//д��
		fout.write(buff,1024);
	}

	//�ر�
	fin.close();
	fout.close();

	system("pause");
}
*/

/*
//C++����ĳ־û�
class Person
{
public:
	Person()
	{

	}
	Person(char * name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void print()
	{
		cout << name << "," << age << endl;
	}
private:
	char * name;
	int age;
};


void main()
{
	Person p1("����", 22);
	Person p2("rose", 18);
	//�����
	ofstream fout("c://c_obj.data", ios::binary);
	fout.write((char*)(&p1), sizeof(Person)); //ָ���ܹ���ȡ����ȷ�����ݣ���ȡ�ڴ����ĳ���
	fout.write((char*)(&p2), sizeof(Person));
	fout.close();

	//������
	ifstream fin("c://c_obj.data", ios::binary);
	Person tmp;
	fin.read((char*)(&tmp), sizeof(Person));
	tmp.print();

	fin.read((char*)(&tmp), sizeof(Person));
	tmp.print();

	system("pause");

}
*/


//stl standard template library ��׼ģ���
//util
//c++ ����-> java ����

#include <string>

/*
void main()
{
	string s1 = "craig david";
	string s2(" 7 days");
	string s3 = s1 + s2;

	cout << s3 << endl;
	
	//תc�ַ���
	const char* c_str = s3.c_str();
	cout << c_str << endl;

	//s1.at(2);


	system("pause");
}
*/

//����
#include <vector>

void main()
{
	//��̬����
	//����Ҫʹ�ö�̬�ڴ���䣬�Ϳ���ʹ�ö�̬����
	vector<int> v;
	v.push_back(12);
	v.push_back(10);
	v.push_back(5);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	system("pause");
}

