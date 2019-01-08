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
////C++ 类型转换
//void main() {
//	//int i = 0;
//	//double d = i; //自动类型转换,C里面就自带了
//
//	/*
//	double d = 9.5;
//	int i = d;
//	上面这是原始类型转换,可读性不高,有可能有潜在的风险.
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
//	//C++ 的类型转换写法
//	func2(static_cast<char*>(func(2))); 
//	// C的写法
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
//	强转为指针类型 间接赋值 ,其他人并不知道,这次转型是为了去常量.
//	下面是C++ 中
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
//		cout << "人" << endl;
//	}
//};
//class Man : public Person {
//public:
//	virtual void print() {
//		cout << "男人" << endl;
//	}
//	void chasing() {
//		cout << "泡妞" << endl;
//	}
//};
//class Woman :public Person {
//public:
//	virtual void print() {
//		cout << "女人" << endl;
//	}
//	void carebaby() {
//		cout << "生孩子" << endl;
//	}
//};
//void func(Person* obj) {
//	obj->print();
//	//调用子类的特有的函数,转为实际类型
//	//不安全 存在隐患,传的是Woman类型,却转为了Man类型 ,并不知道转型失败
//	//Man* m1 = (Man*)obj;
//	//m1->print();
//
//	//dynamic_cast 如果转型失败,返回NULL, 
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
//	//reinterpret_cast ,不具备移植性,常用与函数的指针转换
//	fr_p1 f_array[6];
//	f_array[0] = fun_r1;
//	
//	//C的方式
//	f_array[1] = (fr_p1)fun_r2;
//	f_array[1]();
//	//C++的方式 ,不一定能运行成功,而且很多编译器不一定支持这种转换,所有不具备移植性.
//	f_array[2] = reinterpret_cast<fr_p1>(fun_r2);
//	f_array[2]();
//	getchar();
//}



#include <fstream>
//IO流
//文本文件
//void main() {
//	char* fname = (char*)"D://BaiduNetdiskDownload//test1.txt";
//	//输出流
//	ofstream fout(fname);
//	//创建失败
//	if (fout.bad()) {
//		cout << "创建文件失败!" << endl;
//		return;
//	}
//	fout.close();
//
//	ifstream fin(fname);
//	if (fin.bad())
//	{
//		cout << "打开文件失败!" << endl;
//		return;
//	}
//	char ch;
//	while (fin.get(ch))
//	{	//输出
//		cout << ch <<endl;
//	}
//	fin.close();
//
//	//fopen(fname,"rb");
//	getchar();
//}

//二进制操作文件
//void main() {
//	char* src = (char*)"D://BaiduNetdiskDownload//timg.jpg";
//	char* dest = (char*)"D://BaiduNetdiskDownload//timg1.jpg";
//	//输入流
//	ifstream fin(src, ios::binary);
//	//输出流
//	ofstream fout(dest, ios::binary);
//	if (fin.bad() || fout.bad())
//	{
//		return;
//	}
//	while (!fin.eof())
//	{	
//		//因为是while 循环,循环一次就释放了,
//		//最后一次只读了X个字符,后面剩下的都不会被写进去.
//		//读取
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


//C++ 对象的持久化
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
//	Person p1((char*)"柳岩", 22);
//	Person p2((char*)"rese",18);
//	//输出流
//	ofstream fout("D://c_obj.data",ios::binary);
//	//指针能够读取到正确的数据,读取内存区的长度
//	fout.write((char*)(&p1), sizeof(Person));
//	fout.write((char*)(&p2), sizeof(Person));
//	fout.close();
//
//	//输入流
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


//stl standard template library 标准模板库
//util C++集合-> java集合
//在NDK开发 JNI操作中, string是不能直接返回的,jstring是一个char*,
//所以需要C++ string 转成C的string char*
#include <string>
//void main() {
//	string s1 = "craig david";
//	string s2("7 days");
//	string s3 = s1 + s2;
//	cout << s3 << endl;
//	
//	//转c字符串
//	const char* c_str = s3.c_str();
//	cout << c_str << endl;
//
//	s1.at(2);
//
//	getchar();
//}


//容器
#include <vector>

void main() {
	//动态数组
	//不需要使用动态内存分配, 就可以使用动态数组
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