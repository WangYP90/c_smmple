#include <iostream>

using namespace std;


//void* func(int type) {
//	int i = 0;
//	char a = 'A';
//	switch (type) {
//	case 1:
//		return &i;
//	case 2:
//		return &a;
//	default:
//		return NULL;
//	}
//}
//void func2(char* str) {
//	cout << *str << endl;
//}
////C++ ����ת��
//void main() {
//	//int i = 0;
//	//double d = i; //�Զ�����ת��,C������Դ���
//
//	/*
//	double d = 9.5;
//	int i = d;
//	��������ԭʼ����ת��,�ɶ��Բ���,�п�����Ǳ�ڵķ���.
//
//	static_cast
//	const_cast
//	dynamic_cast
//	reinterpret_cast
//	*/
//	int i = 8;
//	double d = 9.5;
//	i = static_cast<int>(d);
//
//	char* c_p = (char*)func(2);
//	cout << *c_p << endl;
//
//	//C++ ������ת��д��
//	func2(static_cast<char*>(func(2))); 
//	// C��д��
//	func2((char*)(func(2)));
//
//	cout << i << endl;
//	getchar();
//}

//const_cast
//
//void func(const char c[]) {
//	//c[1] = 'h';
//	char* c_p = (char*)c;
//	c_p[1] = 'X';
//	/*
//	ǿתΪָ������ ��Ӹ�ֵ ,�����˲���֪��,���ת����Ϊ��ȥ����.
//	������C++ ��
//	*/
//	char* c_pp = const_cast<char*>(c);
//	c_pp[2] = 'Y';
//
//	cout << c << endl;
//}
//void main() {
//	char c[10] = "Hello";
//	func(c);
//	getchar();
//}

//dynamic_cast
//class Person {
//public:
//	virtual void print() {
//		cout << "��" << endl;
//	}
//};
//class Man : public Person {
//public:
//	virtual void print() {
//		cout << "����" << endl;
//	}
//	void chasing() {
//		cout << "���" << endl;
//	}
//};
//class Woman :public Person {
//public:
//	virtual void print() {
//		cout << "Ů��" << endl;
//	}
//	void carebaby() {
//		cout << "������" << endl;
//	}
//};
//void func(Person* obj) {
//	obj->print();
//	//������������еĺ���,תΪʵ������
//	//����ȫ ��������,������Woman����,ȴתΪ��Man���� ,����֪��ת��ʧ��
//	//Man* m1 = (Man*)obj;
//	//m1->print();
//
//	//dynamic_cast ���ת��ʧ��,����NULL, 
//	Man* m2 = dynamic_cast<Man*>(obj);
//	if (m2 != NULL) {
//		m2->print();
//	}
//	Woman* w = dynamic_cast<Woman*>(obj);
//	if (w != NULL) {
//		w->carebaby();
//	}
//
//
//}

//void main() {
//	Woman w1;
//	Person *p1 = &w1;
//	func(p1);
//
//
//
//	getchar();
//}


//reinterpret_cast

//void fun_r1() {
//	cout << "fun_r1" << endl;
//}
//char* fun_r2() {
//	cout << "fun_r2" << endl;
//	return (char*)"abc";
//}
//typedef void(*fr_p1)();
//void main() {
//	//reinterpret_cast ,���߱���ֲ��,�����뺯����ָ��ת��
//	fr_p1 f_array[6];
//	f_array[0] = fun_r1;
//	
//	//C�ķ�ʽ
//	f_array[1] = (fr_p1)fun_r2;
//	f_array[1]();
//	//C++�ķ�ʽ ,��һ�������гɹ�,���Һܶ��������һ��֧������ת��,���в��߱���ֲ��.
//	f_array[2] = reinterpret_cast<fr_p1>(fun_r2);
//	f_array[2]();
//	getchar();
//}



#include <fstream>
//IO��
//�ı��ļ�
//void main() {
//	char* fname = (char*)"D://BaiduNetdiskDownload//test1.txt";
//	//�����
//	ofstream fout(fname);
//	//����ʧ��
//	if (fout.bad()) {
//		cout << "�����ļ�ʧ��!" << endl;
//		return;
//	}
//	fout.close();
//
//	ifstream fin(fname);
//	if (fin.bad())
//	{
//		cout << "���ļ�ʧ��!" << endl;
//		return;
//	}
//	char ch;
//	while (fin.get(ch))
//	{	//���
//		cout << ch <<endl;
//	}
//	fin.close();
//
//	//fopen(fname,"rb");
//	getchar();
//}

//�����Ʋ����ļ�
//void main() {
//	char* src = (char*)"D://BaiduNetdiskDownload//timg.jpg";
//	char* dest = (char*)"D://BaiduNetdiskDownload//timg1.jpg";
//	//������
//	ifstream fin(src, ios::binary);
//	//�����
//	ofstream fout(dest, ios::binary);
//	if (fin.bad() || fout.bad())
//	{
//		return;
//	}
//	while (!fin.eof())
//	{	
//		//��Ϊ��while ѭ��,ѭ��һ�ξ��ͷ���,
//		//���һ��ֻ����X���ַ�,����ʣ�µĶ����ᱻд��ȥ.
//		//��ȡ
//		char buff[1024] = { 0 };
//		fin.read(buff, 1024);
//
//		fout.write(buff,1024);
//	}
//	fin.close();
//	fout.close();
//
//	getchar();
//}


//C++ ����ĳ־û�
//class Person {
//public:
//	Person() {
//
//	}
//	Person(char* name,int age) {
//		this->name = name;
//		this->age = age;
//	}
//	void print() {
//		cout << name << "," << age << endl;
//	}
//private:
//	char* name;
//	int age;
//};
//
//void main() {
//	Person p1((char*)"����", 22);
//	Person p2((char*)"rese",18);
//	//�����
//	ofstream fout("D://c_obj.data",ios::binary);
//	//ָ���ܹ���ȡ����ȷ������,��ȡ�ڴ����ĳ���
//	fout.write((char*)(&p1), sizeof(Person));
//	fout.write((char*)(&p2), sizeof(Person));
//	fout.close();
//
//	//������
//	ifstream fin("D://c_obj.data",ios::binary);
//	Person tmp;
//	fin.read((char*)(&tmp), sizeof(Person));
//	tmp.print();
//
//	fin.read((char*)(&tmp), sizeof(Person));
//	tmp.print();
//	
//	getchar();
//
//
//}


//stl standard template library ��׼ģ���
//util C++����-> java����
//��NDK���� JNI������, string�ǲ���ֱ�ӷ��ص�,jstring��һ��char*,
//������ҪC++ string ת��C��string char*
#include <string>
//void main() {
//	string s1 = "craig david";
//	string s2("7 days");
//	string s3 = s1 + s2;
//	cout << s3 << endl;
//	
//	//תc�ַ���
//	const char* c_str = s3.c_str();
//	cout << c_str << endl;
//
//	s1.at(2);
//
//	getchar();
//}


//����
#include <vector>

void main() {
	//��̬����
	//����Ҫʹ�ö�̬�ڴ����, �Ϳ���ʹ�ö�̬����
	vector<int> v;
	v.push_back(12);
	v.push_back(10);
	v.push_back(5);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	getchar();
}