#include <stdio.h>
#include <stdlib.h>
#include <iostream> //û��.h,�������.h ȥ����.
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


struct Teacher {
	char name[20];
	int age;
};


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


//����