#include <stdio.h>
#include <stdlib.h>
#include <iostream> //没有.h,升级后把.h 去掉了.
#define PI 3.14

using namespace std;

//自定义命名空间
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
//	printf("this is c %s", "输出");
//	/*
//	std: 标准的命名空间,命名空间类似于Java中的包,或者static 导包.
//	<<括号代表 ： 运算符重载,
//	*/
//	//这个是标准的写法
//	//std::cout << "this is c plus plus" << std::endl; 
//	//using namespace std; 加入命名空间后就不用写了.
//	cout << "this is c plus plus" << endl;
//
//	//使用命名空间,
//	cout << NSP_A::a << endl;
//	cout << NSP_B::a << endl;
//	cout << NSP_A::NSP_C::c << endl;
//
//	//使用命名空间中的结构体
//	using namespace NSP_B;
//	Persion persion;
//	persion.name = "5646";
//	persion.age = 18;
//
//	getchar();
//	system("pause");
//}

//C++ 中的类

//class MyCircle {
////属性 (公用权限访问修饰符)
//private:
//	double r;
//	double s;
//	
//public:
//	void setR(double r) {
//		this->r = r;
//	}
//	//获取面积
//	double getS() {
//		return PI * r *r;
//	}
//};
//
//int main() {
//	MyCircle c1;
//	c1.setR(4);
//
//	cout << "圆的面积:" << c1.getS() << endl;
//
//	getchar();
//}

//C++ 中的结构体,结构体不能继承,类可以继承
//struct MyTeacher {
//public:
//	char name[20];
//	int age;
//public:
//	void say() {
//		cout << this->age << "岁" << endl;
//	}
//};
//void main() {
//	MyTeacher t1;
//	t1.age = 20;
//	t1.say();
//	getchar();
//}

//布尔类型
/*
void main() {
	bool isSingle = true; // 正负数 只要不是0 就是true; 
	cout << isSingle << endl;
	if (isSingle) {
		cout << "单身" << endl;
	}
	else
	{
		cout << "有对象" << endl;
	}

	int a = 10, b = 20;
	//3目运算符可以当做左值, 在C中 是不行的.
	((a > b) ? a : b) = 30;
	cout << b << endl;
	getchar();
}
*/


//指针交换
/*
void swap_1(int *x, int *y) {
	int c = 0;
	c = *x;
	*x = *y;
	*y = c;
}
//引用交换
void swap_2(int &x, int &y) {
	int c = 0;
	c = x;
	x = y;
	y = c;
}

//引用 
//引用的主要功能:作为函数的参数或者返回值.
//引用是变量的别名,指针保存的是地址.
void main() {
	//变量名-门牌号(内存空间0x00001的别名,可不可有多个名字?)
	int a = 10;

	//b 就这个内存空间另外一个别名
	// & 表示C++当中的引用.  
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
//指针的引用,代替二级指针
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
//指针常量, 常量指针
void main() {
	//指针常量
	int a = 2, b = 3;
	int *const p1 = &a;
	//p1 = &b; // 不能改变地址.
	*p1 = 4;// 不能改变地址,但是可以改变内容.

	//常量指针 ,指向常量的指针.
	const int *p2 = &a;
	// p2 = 2; //不能改变内容,但是可以改变指针.
	p2 = &b;
}
*/



//void myprintf(const int &a) {
//	cout << a << endl;
//
//}
//void main() {
//	int i = 9;
//	//引用必须要有值,不能为空.
//	//int &a;
//	/*
//	const 就像java中的fianl
//	单纯给变量取别名没有有任何意义,引用: 作为函数参数传递,
//	能保证参数传递过程中不产生副本.
//	引用可以直接操作变量,指针要通过取值(*p),间接操作变量,指针的可读性差
//	*/
//	//常引用 
//	int a = 10, b = 9;
//	const int &c = a; //const 就不能重新给它赋值了
//	//字面量
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
////引用的大小
//void main() {
//	Teacher t;
//	Teacher &t1 = t;
//	Teacher *p = &t;
//	/*
//	引用的大小: 24  引用是变量的别名
//	指针的大小: 8	指针存储的是变量的地址
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


//练习引用和指针: 引用不用做间接赋值,引用可以不用做非空判断.
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
//	//引用为NULL,为了防止不报错,需要进行非空判断
//	Teacher *p = NULL;
//	myprintf1(p);
//
//	//引用不能为空,没法传进去,所以不用判断他是否为空
//	//Teacher &t2 = NULL;
//	//myprintf2(t2);
//}


//函数