#define _CRT_SECURE_NO_WARNINGS //������ص�һ��,��Ȼstrcpy �ᱨ���ֲ���ȫ,Ī������Ĵ���
#include <stdio.h>
#include <stdlib.h>
#include <iostream> //û��.h,�������.h ȥ����.
#include <stdarg.h>

#define PI 3.14

using namespace std;

//�Զ��������ռ�
namespace NSP_A {
	int a = 9;
	namespace NSP_C {
		int c = 90;
	}
}
namespace NSP_B {
	int a = 12;
	struct Persion {
		const char* name;
		int age;
	};
}
//
//int main() {
//	printf("this is c %s", "���");
//	/*
//	std: ��׼�������ռ�,�����ռ�������Java�еİ�,����static ����.
//	<<���Ŵ��� �� ���������,
//	*/
//	//����Ǳ�׼��д��
//	//std::cout << "this is c plus plus" << std::endl; 
//	//using namespace std; ���������ռ��Ͳ���д��.
//	cout << "this is c plus plus" << endl;
//
//	//ʹ�������ռ�,
//	cout << NSP_A::a << endl;
//	cout << NSP_B::a << endl;
//	cout << NSP_A::NSP_C::c << endl;
//
//	//ʹ�������ռ��еĽṹ��
//	using namespace NSP_B;
//	Persion persion;
//	persion.name = "5646";
//	persion.age = 18;
//
//	getchar();
//	system("pause");
//}

//C++ �е���

//class MyCircle {
////���� (����Ȩ�޷������η�)
//private:
//	double r;
//	double s;
//	
//public:
//	void setR(double r) {
//		this->r = r;
//	}
//	//��ȡ���
//	double getS() {
//		return PI * r *r;
//	}
//};
//
//int main() {
//	MyCircle c1;
//	c1.setR(4);
//
//	cout << "Բ�����:" << c1.getS() << endl;
//
//	getchar();
//}

//C++ �еĽṹ��,�ṹ�岻�ܼ̳�,����Լ̳�
//struct MyTeacher {
//public:
//	char name[20];
//	int age;
//public:
//	void say() {
//		cout << this->age << "��" << endl;
//	}
//};
//void main() {
//	MyTeacher t1;
//	t1.age = 20;
//	t1.say();
//	getchar();
//}

//��������
/*
void main() {
	bool isSingle = true; // ������ ֻҪ����0 ����true;
	cout << isSingle << endl;
	if (isSingle) {
		cout << "����" << endl;
	}
	else
	{
		cout << "�ж���" << endl;
	}

	int a = 10, b = 20;
	//3Ŀ��������Ե�����ֵ, ��C�� �ǲ��е�.
	((a > b) ? a : b) = 30;
	cout << b << endl;
	getchar();
}
*/


//ָ�뽻��
/*
void swap_1(int *x, int *y) {
	int c = 0;
	c = *x;
	*x = *y;
	*y = c;
}
//���ý���
void swap_2(int &x, int &y) {
	int c = 0;
	c = x;
	x = y;
	y = c;
}

//����
//���õ���Ҫ����:��Ϊ�����Ĳ������߷���ֵ.
//�����Ǳ����ı���,ָ�뱣����ǵ�ַ.
void main() {
	//������-���ƺ�(�ڴ�ռ�0x00001�ı���,�ɲ����ж������?)
	int a = 10;

	//b ������ڴ�ռ�����һ������
	// & ��ʾC++���е�����.
	int &b = a;
	cout << b << endl;


	int x = 10;
	int y = 20;
	//swap_1(&x, &y);
	swap_2(x, y);
	printf("%d,%d \n", x, y);



	getchar();

}
*/

/*
struct Teacher {
	char* name;
	int age;
};
void getTeacher(Teacher **p) {
	Teacher *tmp = (Teacher*)malloc(sizeof(Teacher));
	tmp->age = 20;
	*p = tmp;
}
//ָ�������,�������ָ��
void getTeacher(Teacher* &p) {
	p = (Teacher*)malloc(sizeof(Teacher));
	p->age = 20;
};
void main() {
	Teacher *t = NULL;
	getTeacher(&t);
	cout << t->name << "," << t->age << endl;
	getchar();
}
*/

/*
//ָ�볣��, ����ָ��
void main() {
	//ָ�볣��
	int a = 2, b = 3;
	int *const p1 = &a;
	//p1 = &b; // ���ܸı��ַ.
	*p1 = 4;// ���ܸı��ַ,���ǿ��Ըı�����.

	//����ָ�� ,ָ������ָ��.
	const int *p2 = &a;
	// p2 = 2; //���ܸı�����,���ǿ��Ըı�ָ��.
	p2 = &b;
}
*/



//void myprintf(const int &a) {
//	cout << a << endl;
//
//}
//void main() {
//	int i = 9;
//	//���ñ���Ҫ��ֵ,����Ϊ��.
//	//int &a;
//	/*
//	const ����java�е�fianl
//	����������ȡ����û�����κ�����,����: ��Ϊ������������,
//	�ܱ�֤�������ݹ����в���������.
//	���ÿ���ֱ�Ӳ�������,ָ��Ҫͨ��ȡֵ(*p),��Ӳ�������,ָ��Ŀɶ��Բ�
//	*/
//	//������ 
//	int a = 10, b = 9;
//	const int &c = a; //const �Ͳ������¸�����ֵ��
//	//������
//	const int &d = 70; //
//
//	myprintf(d);
//	myprintf(c);
//	
//
//	getchar();
//}


//struct Teacher {
//	char name[20];
//	int age;
//};
////���õĴ�С
//void main() {
//	Teacher t;
//	Teacher &t1 = t;
//	Teacher *p = &t;
//	/*
//	���õĴ�С: 24  �����Ǳ����ı���
//	ָ��Ĵ�С: 8	ָ��洢���Ǳ����ĵ�ַ
//	*/
//	cout << sizeof(t1) << endl;
//	cout << sizeof(p) << endl;
//	
//	/*
//
//	*/
//
//	getchar();
//	
//}


//struct Teacher {
//	char name[20];
//	int age;
//};


//��ϰ���ú�ָ��: ���ò�������Ӹ�ֵ,���ÿ��Բ������ǿ��ж�.
//void myprintf1(Teacher *a) {
//	cout << a->name << a->age << endl;
//
//}
//void myprintf2(Teacher &a) {
//	cout << a.name << a.age << endl;
//
//}
//void main() {
//	Teacher t ;
//	//����ΪNULL,Ϊ�˷�ֹ������,��Ҫ���зǿ��ж�
//	Teacher *p = NULL;
//	myprintf1(p);
//
//	//���ò���Ϊ��,û������ȥ,���Բ����ж����Ƿ�Ϊ��
//	//Teacher &t2 = NULL;
//	//myprintf2(t2);
//}


//���� -- Ĭ�ϲ���
//void myprint(int x, int y, int z = 10) {
//	cout << z << endl;
//}
////����
//void myprint(int x, bool ret) {
//
//}
//�ɱ����
//void func(int i,...) {
//	va_list args_p;
//	va_start(args_p,i);
//	int value;
//	while (1) {
//		value = va_arg(args_p, int);
//		if (value <= 0)
//		{
//			break;
//		}
//		cout << value << endl;
//	}
//	
//	va_end(args_p);
//}
//void main() {
//	func(9,10,28,30);
//	getchar();
//}


//�� ��д�� �ͷ���ʵ��
//#include "MyTeacher.h"
//
//void main() {
//	MyTeacher t1;
//	t1.name = "Java";
//	t1.age = 20;
//	cout << t1.getName() << endl;
//
//}


//���캯��/  �������� / �������캯��
//class Persion {
//private:
//	char *name;
//	int age;
//public:
//	//�޲ι��캯��(д��,�ͻḲ��Ĭ�ϵ��޲ι��캯��);
//	Persion() {
//		cout << "�޲ι��캯��" << endl;
//		//�����ڴ�
//		//this->name = (char*)malloc(100);
//		
//	}
//	//�вҹ��캯�� �Ḳ��Ĭ�ϵ��޲ι��캯��
//	Persion(char *name, int age) {
//		this->name = name;
//		this->age = age;
//		cout << "�вι��캯��" << endl;
//	}
//	//��������,������Ҫ���ͷ�ʱ,��������������
//	//��Ҫ����:�ͷ�һЩ��Դ
//	~Persion()
//	{	//�ͷ��ڴ�
//		//delete this->name;
//		//free(this->name);
//		cout << "��������" << endl;
//	}
//
//	//�������캯��(ֵ����)
//	//Ĭ�Ͽ������캯��,����ֵ����.Ĭ�ϵĿ������캯��������������ɵ�.
//	Persion(const Persion &obj) {
//		this->name = obj.name;
//		this->age = obj.age;
//		cout << "�������캯��" << endl;
//	}
//	void myprint() {
//		cout << name << "," << age << endl;
//	}
//};
//void func() {
//	Persion p1;
//}
//void main() {
//	Persion p1;
//	/*
//	E0144	"const char *" ���͵�ֵ�������ڳ�ʼ�� "char *" ���͵�ʵ��
//	����C�е���������,����"Java"����const char* ����, ���Ǹ�ֵ��ָ��Ϳ��Ըı���,���������������.
//	*/
//	Persion p2((char*)"Java",20);
//	Persion p3 = Persion((char*)"Android", 21);
//	//Persion *p3 = new Persion((char*)"Android", 21);//new�Ļ������ͷ�
//	//��������
//	Persion p4((char*)"Test",26);
//	Persion p5 = p4;
//	
//	func();
//}


//ǳ����
//class Persion {
//private:
//	char *name;
//	int age;
//public:
//	//�вҹ��캯�� �Ḳ��Ĭ�ϵ��޲ι��캯��
//	Persion(char *name, int age) {
//		this->name = (char*)malloc(100);
//		strcpy(this->name, name);
//		this->age = age;
//		cout << "�вι��캯��" << endl;
//	}
//
//	//�������캯��(ֵ����)
//	//Ĭ�Ͽ������캯��,����ֵ����. Ĭ�ϵĿ������캯��������������ɵ�.
//	Persion(const Persion &obj) {
//		this->name = obj.name;
//		this->age = obj.age;
//		cout << "�������캯��" << endl;
//	}
//	void myprint() {
//		cout << name << "," << age << endl;
//	}
//	~Persion()
//	{
//		free(this->name);
//	}
//};
//
//void func() {
//	Persion p1((char*)"Java", 26);
//	Persion p2 = p1;
//	p1.myprint();
//	/*
//	ǳ����������:
//	ָ���Ǳ�������ĵ�ַ,��ôǳ���������������,
//	ֵ������ʲô,���� p1 �� p2 ��name ��һ���ڴ��ַ,
//	��funcִ����ɺ�,��������p1���ڴ�����,���ͷ�p2���ڴ��ַ,
//	һ���ڴ��ַ���ܱ��ͷ�����,���Ա���.
//	
//
//	*/
//	p2.myprint();
//}
//void main() {
//	func();
//	getchar();
//}

//��� : ��� ֻҪǣ�������ڴ�����,��Ҫ��д��������.ʹ�����.
//class Persion {
//private:
//	char *name;
//	int age;
//public:
//	//�вҹ��캯�� �Ḳ��Ĭ�ϵ��޲ι��캯��
//	Persion(char *name, int age) {
//		int len = strlen(name);
//		this->name = (char*)malloc(len+1);
//		strcpy(this->name,name);
//		this->age = age;
//		cout << "�вι��캯��" << endl;
//	}
//
//	//���
//	Persion(const Persion &obj) {
//		//����name ����
//		int len = strlen(obj.name);
//		this->name = (char*)malloc(len+1);
//		strcpy(this->name,obj.name);
//		//
//		this->age = obj.age;
//		cout << "�������캯��" << endl;
//	}
//	void myprint() {
//		cout << name << "," << age << endl;
//	}
//	~Persion()
//	{
//		cout << "��������" << endl;
//		free(this->name);
//	}
//};
//
//void func() {
//	Persion p1((char*)"Java", 26);
//	Persion p2 = p1;
//	p1.myprint();
//	/*
//	ǳ����������:
//	ָ���Ǳ�������ĵ�ַ,��ôǳ���������������,
//	ֵ������ʲô,���� p1 �� p2 ��name ��һ���ڴ��ַ,
//	��funcִ����ɺ�,��������p1���ڴ�����,���ͷ�p2���ڴ��ַ,
//	һ���ڴ��ַ���ܱ��ͷ�����,���Ա���.
//	���:
//	�����Ϊ�����¿��ٵ��ڴ�, ����name ���ڴ������Ƿֿ���,
//	�����������������ͷ��ڴ��ʱ��,�Ͳ��ᱨ��.
//	
//	*/
//	p2.myprint();
//}
//void main() {
//	func();
//	getchar();
//}



//���캯�������Գ�ʼ���б�
// ������ Teacher�����ȴ���,Student�ٴ����Լ�, Student�Լ�������,Teacher�������.
//class Teacher {
//private:
//	char* name;
//public:
//	Teacher(char* name) {
//		this->name = name;
//		cout << "Teacher �вι��캯��" << endl;
//	}
//	~Teacher()
//	{
//		cout << "Teacher ��������" << endl;
//	}
//	char* getName() {
//		return this->name;
//	}
//};
//class Student {
//private:
//	int id;
//	//���Զ���
//	Teacher t1;
//	Teacher t2;
//public:
//	Student(int id, char *t1_n, char *t2_n) :t1(t1_n), t2(t2_n) {
//		this->id = id;
//		cout << "Student �вι��캯��" << endl;
//	}
//	void myprint() {
//		cout << id << "," << t1.getName() << "," << t2.getName() << endl;
//	}
//	~Student()
//	{
//		cout << "Student ��������" << endl;
//	}
//};
//void func() {
//	Student s1(20, (char*)"ms cang", (char*)"mis liu");
//	Student s2(10, (char*)"ms bo", (char*)"mis la");
//	s1.myprint();
//	s2.myprint();
//}
//void main() {
//	func();
//	getchar();
//}


//��̬�ڴ����
//C++ ͨ��new(delete) ��̬�ڴ����ͻ���
//C �� malloc(free)
//�����������������: malloc +free  ������� ���캯������������.
/*
һ��Ҫ new + delete ��? ��Ҳ��һ��,new�� ��free Ҳ����,���ǾͲ���������������͹��캯����.
*/
//class Teacher {
//private:
//	char* name;
//public:
//	//������
//	static int total;
//	Teacher(char* name) {
//		this->name = name;
//		cout << "Teacher �вι��캯��" << endl;
//	}
//	~Teacher()
//	{
//		cout << "Teacher ��������" << endl;
//	}
//	char* getName() {
//		return this->name;
//	}
//	void setName(char* name) {
//		this->name = name;
//	}
//	static void count() {
//		Teacher::total++;
//	}
//};
//void func() {
//	//C++
//	Teacher *t1 = new Teacher((char*)"Java");
//	cout << t1->getName() << endl;
//	//�ͷ�
//	delete t1;
//
//	//C 
//	Teacher *t2 = (Teacher*)malloc(sizeof(Teacher));
//	t2->setName((char*)"Android");
//	cout << t2->getName() << endl;
//	free(t2);
//}
//void func01() {
//	//����
//	int *p1 = (int*)malloc(sizeof(int)*10);
//	p1[0] = 9;
//	free(p1);
//
//	int *p2 = new int[10];
//	p2[0] = 2;
//	//�ͷ����� []
//	delete[] p2;
//}
////��ʼ���ڲ���̬����
//int Teacher::total = 9;
////
//void func02() {
//	//ֱ��ͨ����������
//	Teacher::count();
//	cout << Teacher::total << endl;
//	//	BB::AA::Teacher::count; //Ƕ�������ռ�ķ��ʷ�ʽ
//
//}
//void main() {
//	func();
//	func01();
//	func02();
//	getchar();
//}

//��Ĵ�С
//class A {
//public:
//	int i;
//	int j;
//	int k;
//	static int m;
//};
//class B {
//public:
//	int i;
//	int j;
//	int k;
//	//void(*myprintf)() = myprintf; C �нṹ��������д
//	void myprintf() {
//		cout << "��ӡ" << endl;
//	}
//};
//void main() {
//	//C/C++ �ڴ����:ջ����������ȫ��������̬��Ա��ȫ�ֳ�Ա����
//	//���������ַ����������������
//	/*
//	JVM stack�������������͡���������ã���native Method stack�����ط���ջ����
//	�������������ʹ��룩�������������ֱ���ڴ�
//	C++�е���:
//	��ͨ���Ժͽṹ����ͬ���ڴ沼��,���Ǿ�̬��Ա����ȫ��������,
//	����Ϊ��Ĵ�С,���м���.��ĺ���Ҳ�Ǵ��ڴ���������,Ҳ��������.
//	֮���Էֿ�,��Ҫ��Ϊ�������������ж�������Щ���Ժͺ���.
//	
//	*/
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//}


//this �ؼ���
/*
JNIΪʲô C Ҫ��JNIEnv ��C++���ô�:
ԭ�������ΪC��û��this�ؼ���, ���������һ������ָ�뱣��һ��JniEnv��ָ��,����ȥ��,ģ�µ�this����.
*/
//class Teacher {
//private:
//	char* name;
//public:
//	//������
//	static int total;
//	Teacher(char* name) {
//		this->name = name;
//		cout << "Teacher �вι��캯��" << endl;
//	}
//	~Teacher()
//	{
//		cout << "Teacher ��������" << endl;
//	}
//	//������ ���ε���this constд����������,���������κζ������ܱ��ı�,��������Ϊ�˱�֤���ݰ�ȫ.
//	//�Ȳ��ܸı�ָ���ֵ,�ֲ��ܸı�ָ��ָ�������. 
//	void myprint() const {
//		printf("this ��ָ��%#x\n", this);
//		//this->name = (char*)"lala";
//		//�� const(���ݲ����޸�) Teacher* const(ֵ�����޸�) this  
//		/*(����һ��ָ�볣��)const Teacher* (����һ������ָ��)const this  
//		����д����˼���� ǰ��ָ�볣�������ݲ����޸�, ���泣��ָ���ֵ�����޸�.
//		*/
//		//this = (Teacher*)0x00009;
//		cout << this->name << endl;
//	}
//};
//void main() {
//	Teacher t1((char*)"java");
//	t1.myprint();
//	Teacher t2((char*)"java");
//	t2.myprint();
//	getchar();
//}



//��Ԫ���� 
//
//class A {
//private:
//	int i;
//public:
//	A(int i) {
//		this->i = i;
//	}
//	void myprint() {
//		cout << this->i << endl;
//	}
//	//��Ԫ����
//	friend void modify_i(A* p,int a);
//};
////��Ԫ������ʵ��,����Ԫ�����п��Է���˽�е�����.
//void modify_i(A *p,int a) {
//	p->i = a;
//}
//void main() {
//	A* a = new A(10);
//	a->myprint();
//	modify_i(a, 20);
//	a->myprint();
//	getchar();
//}

//��Ԫ��
/*
java ��
Class cls = Class.forName("com.test.Teacher");
cls.setAccessable(true);
Class ��һ����,com.test.Teacher��һ����, Class �����������Ԫ��,�ǲ�����.
Java �Ļ�������C��C++д��.
*/
//class A {
//	//��Ԫ��
//	friend class B;
//private:
//	int i;
//public:
//	A(int i) {
//		this->i = i;
//	}
//	void myprint() {
//
//	}
//
//};
//class B {
//private:
//	A a;
//public:
//	//B�����Ԫ����Է���A����κγ�Ա.
//	void accessAny() {
//		a.i = 30;
//		a.myprint();
//	}
//};
//void main() {
//
//}

/*
AndFix ����Ͱ����޸����:��Ȼ��ά����,��������ԭ�����ͨ��NDK ȥ�滻ԭ�е�class,��ԭ�еķ���,
����Ҫ����,��ʵ�ַ���ָ����滻.
*/

//���������: ���ʻ��Ǻ�������.

//class Point {
//public:
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) {
//		this->x = x;
//		this->y = y;
//	}
//	Point operator+(Point &p2) {
//		Point tmp(this->x + p2.x, this->y + p2.y);
//		return tmp;
//	}
//	void myprint() {
//		cout << this->x << "," << this->y << endl;
//	}
//};
////���� +��    �ⲿ����, Ҳ�������������ڲ�
////Point operator+(Point &p1, Point &p2) {
////	Point tmp(p1.x + p2.x, p1.y + p2.y);
////	return tmp;
////}
////���� -��
//Point operator-(Point &p1, Point &p2) {
//	Point tmp(p1.x - p2.x, p1.y - p2.y);
//	return tmp;
//}
//void main() {
//	Point p1(1, 12);
//	Point p2(2, 10);
//	//��������ڲ���������ؾ��൱�� p1.operator+(p2)��;
//	Point p3 = p1 + p2;
//	p3.myprint();
//	/*
//	Java �� String str3 = "abcd" + "efg";
//	��Java��Ϊʲô����String �������?
//	��ʵ������������������ʵ�ֵ�.
//	*/
//}




//������˽��, ��Ԫ������������������
//
//class Point {
//	friend Point operator+(Point &p1, Point &p2);
//private:
//	int x;
//	int y;
//public:
//	Point(int x = 0, int y = 0) {
//		this->x = x;
//		this->y = y;
//	}
//	void myprint() {
//		cout << this->x << "," << this->y << endl;
//	}
//};
//Point operator+(Point &p1,Point &p2) {
//	Point tmp(p1.x + p2.x, p1.y + p2.y);
//	return tmp;
//}
//void main() {
//	Point p1(1, 12);
//	Point p2(2, 10);
//	//��������ڲ���������ؾ��൱�� p1.operator+(p2)��;
//	Point p3 = p1 + p2;
//	p3.myprint();
//	/*
//	Java �� String str3 = "abcd" + "efg";
//	��Java��Ϊʲô����String �������?
//	��ʵ������������������ʵ�ֵ�.
//	*/
//}




//�̳�
//�����������
//class Human {
//public:
//	Human(char* name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	void say() {
//		cout << "˵��" << endl;
//	}
//protected:
//	char* name;
//	int age;
//};
//class Man : public Human {
//public:
//	//�����๹�캯������,�����Զ���ֵ
//	Man(char* brothers,char* s_name,int s_age, char* h_name, int h_age):Human(s_name, s_age) , h(h_name, h_age) {
//		this->brothers = brothers;
//	}
//	void chasing() {
//		cout << "���" << this->name << endl;
//	}
//private:
//	char* brothers;
//	Human h;
//};
//void work(Human& h) {
//	h.say();
//}
//void main() {
//	Man m1((char*)"Android",(char*)"Java",20, (char*)"Java1", 30);
//	m1.say();
//
//	//Human* h1 = &m1;
//	//h1->say();
//
//	//Human &h2 = m1;
//	//h2.say();
//
//	////�������͵Ķ���ֱ�ӳ�ʼ���������͵Ķ���.
//	//Human h3 = m1;
//	getchar();
//}


// �̳� �� ���캯�������������ĵ�������
// ������ -> �ӹ��� -> ������ -> ������
//class Human {
//public:
//	Human(char* name, int age) {
//		this->name = name;
//		this->age = age;
//		cout << "Human ���캯��" << endl;
//	}
//	void say() {
//		cout << "˵��" << endl;
//	}
//	~Human()
//	{
//		cout << "Human ��������" << endl;
//	}
//public:
//	char* name;
//	int age;
//};
//class Man : public Human {
//public:
//	//�����๹�캯������,�����Զ���ֵ
//	Man(char* brothers, char* s_name, int s_age) :Human(s_name, s_age) {
//		this->brothers = brothers;
//		cout << "Man ���캯��" << endl;
//	}
//	~Man()
//	{
//		cout << "Man ��������" << endl;
//	}
//	void chasing() {
//		cout << "���" << this->name << endl;
//	}
//	void say() {
//		cout << "����ϲ�����" << endl;
//	}
//private:
//	char* brothers;
//};
//void func() {
//	//���õĶ�������� say()�ĺ���
//	Man m1((char*)"Android", (char*)"Java", 20);
//	//m1.say();
//	//Human h1 = m1;
//	//h1.say();
//	// ���ø����say();
//	m1.Human::say();
//
//	//��������Ը�ֵ
//	m1.Human::age = 15;
//}
//void func01() {
//	Man m1((char*)"Android", (char*)"Java", 20);
//	m1.say();
//}
//void main() {
//	func();
////	func01();
//	getchar();
//}



//��̳�
//class Person {
//public:
//};
//class Citizen {
//
//};
//// ѧ�� ,������,���ǹ���
///*
//�̳еķ������η�:public private protected 
//*/
//class Student :public Person, public Citizen {
//public:
//	Student() :Person() {
//
//	}
//	Student() :Citizen() {
//
//	}
//	Student() :Person(), Citizen() {
//
//	}
//	
//};
//
//void main() {
//
//	getchar();
//}


//�̳еĶ����� : ��̳�
//class A {
//public:
//	char* name;
//};
//class A1 : virtual public A {
//};
//class A2 : virtual public A {
//};
//class B : public A1, public A2 {
//
//};
//void main() {
//	B b;
//	//b name ����ȷ,����
//	//b.name = "Java";
//
//	//��ʽ����,ָ������
//	b.A1::name = (char*)"Java";
//	b.A2::name = (char*)"Android";
//
//	//virtual ��̳������ ���ԵĶ�����,����ȷ������.
//	b.name = (char*)"Java";
//	//��Ȼ����϶�����ͬһ��name ��ͬ�����͵�����,�����������аٶ�
//
//	getchar();
//}

//�麯��: ��̬(�������չ��)
//��̬��̬:�������й�����,������һ������������(��д)
//��̬��̬:����
/*
������̬��̬������: 1. �̳� 2.��������û���ָ��ָ������Ķ��� 3.��������д
*/

//#include "Plane.h"
//#include "Jet.h"
//#include "Copter.h"
////ҵ����
//void bizplay(Plane& p) {
//	p.fly();
//	p.land();
//}
//void main() {
//	Plane p1;
//	bizplay(p1);
//	/*
//	Ҫ�����е�ʱ��ʵ�ֶ�̬,�ͱ����� Plane �ĺ����ϼ�virtuol�ؼ���
//	,����ʵ�ֶ�̬��,Ҳ�����麯��.
//	*/
//	Jet j1;
//	bizplay(j1);
//
//	Copter c1;
//	bizplay(c1);
//	getchar();
//}

//���麯�� ��(������)
//��һ�������һ�����麯��,�������ǳ�����
//�������ǲ���ʵ���������.
//����̳г�����,����Ҫʵ�ִ�����.���û��,����Ҳ�ǳ�����.
//��״
//class Shape {
//public:
//	//���麯��
//	virtual void sayArea() = 0;
//};
////Բ
//class Circle : public Shape {
//public:
//	Circle(int r) {
//		this->r = r;
//	}
//	void sayArea() {
//		this->area = 3.14159 * r *r;
//		cout << "Բ�����:" << area << endl;
//	}
//private:
//	int r;
//	int area;
//};
//void main() {
//	Circle c1(10);
//	c1.sayArea();
//	getchar();
//}

//�ӿ�: ֻ���߼��ϵĻ���,�﷨�Ϻͳ�����û���κ�����.

//ģ�庯��(����)
//void myswap(int& a, int& b) {
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void myswap(char& a, char& b) {
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
////����:������������ҵ���߼���һ��, ֻ���������Ͳ�һ������.
////����ʵ������,�Զ��Ƶ�.
//template <typename T>
//void myswap(T& a, T& b) {
//	char tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	cout << a << "," << b << endl;
//}
//void main() {
//	int a = 10, b = 20;
//	myswap(a, b);
//	cout << a << "," << b << endl;
//	char cx = 'w', cy = 'y';
//	myswap(cx, cy);
//	cout << cx << "," << cy << endl;
//	getchar();
//}