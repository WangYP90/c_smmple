#define _CRT_SECURE_NO_WARNINGS //必须加载第一行,不然strcpy 会报各种不安全,莫名其妙的错误
#include <stdio.h>
#include <stdlib.h>
#include <iostream> //没有.h,升级后把.h 去掉了.
#include <stdarg.h>

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


//struct Teacher {
//	char name[20];
//	int age;
//};


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


//函数 -- 默认参数
//void myprint(int x, int y, int z = 10) {
//	cout << z << endl;
//}
////重载
//void myprint(int x, bool ret) {
//
//}
//可变参数
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


//类 的写法 和方法实现
//#include "MyTeacher.h"
//
//void main() {
//	MyTeacher t1;
//	t1.name = "Java";
//	t1.age = 20;
//	cout << t1.getName() << endl;
//
//}


//构造函数/  析构函数 / 拷贝构造函数
//class Persion {
//private:
//	char *name;
//	int age;
//public:
//	//无参构造函数(写了,就会覆盖默认的无参构造函数);
//	Persion() {
//		cout << "无参构造函数" << endl;
//		//开辟内存
//		//this->name = (char*)malloc(100);
//		
//	}
//	//有惨构造函数 会覆盖默认的无参构造函数
//	Persion(char *name, int age) {
//		this->name = name;
//		this->age = age;
//		cout << "有参构造函数" << endl;
//	}
//	//析构函数,当对象要被释放时,析构函数被调用
//	//主要作用:释放一些资源
//	~Persion()
//	{	//释放内存
//		//delete this->name;
//		//free(this->name);
//		cout << "析构函数" << endl;
//	}
//
//	//拷贝构造函数(值拷贝)
//	//默认拷贝构造函数,就是值拷贝.默认的拷贝构造函数就是下面这个干的.
//	Persion(const Persion &obj) {
//		this->name = obj.name;
//		this->age = obj.age;
//		cout << "拷贝构造函数" << endl;
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
//	E0144	"const char *" 类型的值不能用于初始化 "char *" 类型的实体
//	这是C中的遗留问题,本身"Java"就是const char* 常量, 但是赋值给指针就可以改变了,所以这是有问题的.
//	*/
//	Persion p2((char*)"Java",20);
//	Persion p3 = Persion((char*)"Android", 21);
//	//Persion *p3 = new Persion((char*)"Android", 21);//new的话必须释放
//	//拷贝函数
//	Persion p4((char*)"Test",26);
//	Persion p5 = p4;
//	
//	func();
//}


//浅拷贝
//class Persion {
//private:
//	char *name;
//	int age;
//public:
//	//有惨构造函数 会覆盖默认的无参构造函数
//	Persion(char *name, int age) {
//		this->name = (char*)malloc(100);
//		strcpy(this->name, name);
//		this->age = age;
//		cout << "有参构造函数" << endl;
//	}
//
//	//拷贝构造函数(值拷贝)
//	//默认拷贝构造函数,就是值拷贝. 默认的拷贝构造函数就是下面这个干的.
//	Persion(const Persion &obj) {
//		this->name = obj.name;
//		this->age = obj.age;
//		cout << "拷贝构造函数" << endl;
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
//	浅拷贝的问题:
//	指针是保存变量的地址,那么浅拷贝的问题就来了,
//	值拷贝是什么,就是 p1 和 p2 的name 是一个内存地址,
//	当func执行完成后,首先析构p1的内存区域,再释放p2的内存地址,
//	一个内存地址不能被释放两次,所以报错.
//	
//
//	*/
//	p2.myprint();
//}
//void main() {
//	func();
//	getchar();
//}

//深拷贝 : 深拷贝 只要牵扯到堆内存分配的,就要重写拷贝构造.使用深拷贝.
//class Persion {
//private:
//	char *name;
//	int age;
//public:
//	//有惨构造函数 会覆盖默认的无参构造函数
//	Persion(char *name, int age) {
//		int len = strlen(name);
//		this->name = (char*)malloc(len+1);
//		strcpy(this->name,name);
//		this->age = age;
//		cout << "有参构造函数" << endl;
//	}
//
//	//深拷贝
//	Persion(const Persion &obj) {
//		//复制name 属性
//		int len = strlen(obj.name);
//		this->name = (char*)malloc(len+1);
//		strcpy(this->name,obj.name);
//		//
//		this->age = obj.age;
//		cout << "拷贝构造函数" << endl;
//	}
//	void myprint() {
//		cout << name << "," << age << endl;
//	}
//	~Persion()
//	{
//		cout << "析构函数" << endl;
//		free(this->name);
//	}
//};
//
//void func() {
//	Persion p1((char*)"Java", 26);
//	Persion p2 = p1;
//	p1.myprint();
//	/*
//	浅拷贝的问题:
//	指针是保存变量的地址,那么浅拷贝的问题就来了,
//	值拷贝是什么,就是 p1 和 p2 的name 是一个内存地址,
//	当func执行完成后,首先析构p1的内存区域,再释放p2的内存地址,
//	一个内存地址不能被释放两次,所以报错.
//	深拷贝:
//	深拷贝因为是重新开辟的内存, 两个name 的内存区域是分开的,
//	所以析构函数里面释放内存的时候,就不会报错.
//	
//	*/
//	p2.myprint();
//}
//void main() {
//	func();
//	getchar();
//}



//构造函数的属性初始化列表
// 包含的 Teacher对象先创建,Student再创建自己, Student自己先析构,Teacher最后被析构.
//class Teacher {
//private:
//	char* name;
//public:
//	Teacher(char* name) {
//		this->name = name;
//		cout << "Teacher 有参构造函数" << endl;
//	}
//	~Teacher()
//	{
//		cout << "Teacher 析构函数" << endl;
//	}
//	char* getName() {
//		return this->name;
//	}
//};
//class Student {
//private:
//	int id;
//	//属性对象
//	Teacher t1;
//	Teacher t2;
//public:
//	Student(int id, char *t1_n, char *t2_n) :t1(t1_n), t2(t2_n) {
//		this->id = id;
//		cout << "Student 有参构造函数" << endl;
//	}
//	void myprint() {
//		cout << id << "," << t1.getName() << "," << t2.getName() << endl;
//	}
//	~Student()
//	{
//		cout << "Student 析构函数" << endl;
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


//动态内存分配
//C++ 通过new(delete) 动态内存分配和回收
//C 中 malloc(free)
//这两种最大的区别就是: malloc +free  不会调用 构造函数和析构函数.
/*
一定要 new + delete 吗? 那也不一定,new完 用free 也可以,但是就不会调用析构函数和构造函数了.
*/
//class Teacher {
//private:
//	char* name;
//public:
//	//计数器
//	static int total;
//	Teacher(char* name) {
//		this->name = name;
//		cout << "Teacher 有参构造函数" << endl;
//	}
//	~Teacher()
//	{
//		cout << "Teacher 析构函数" << endl;
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
//	//释放
//	delete t1;
//
//	//C 
//	Teacher *t2 = (Teacher*)malloc(sizeof(Teacher));
//	t2->setName((char*)"Android");
//	cout << t2->getName() << endl;
//	free(t2);
//}
//void func01() {
//	//数组
//	int *p1 = (int*)malloc(sizeof(int)*10);
//	p1[0] = 9;
//	free(p1);
//
//	int *p2 = new int[10];
//	p2[0] = 2;
//	//释放数组 []
//	delete[] p2;
//}
////初始化内部静态变量
//int Teacher::total = 9;
////
//void func02() {
//	//直接通过类名访问
//	Teacher::count();
//	cout << Teacher::total << endl;
//	//	BB::AA::Teacher::count; //嵌套命名空间的访问方式
//
//}
//void main() {
//	func();
//	func01();
//	func02();
//	getchar();
//}

//类的大小
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
//	//void(*myprintf)() = myprintf; C 中结构体是这样写
//	void myprintf() {
//		cout << "打印" << endl;
//	}
//};
//void main() {
//	//C/C++ 内存分区:栈区、堆区、全局区（静态成员、全局成员）、
//	//常量区（字符串）、程序代码区
//	/*
//	JVM stack（基本数据类型、对象的引用）、native Method stack（本地方法栈）、
//	方法区（常量和代码）、程序计数区、直接内存
//	C++中的类:
//	普通属性和结构体相同的内存布局,但是静态成员存在全局区里面,
//	不作为类的大小,进行计算.类的函数也是存在代码区里面,也不做计算.
//	之所以分开,主要是为了起到这个类的所有对象公用这些属性和函数.
//	
//	*/
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//}


//this 关键字
/*
JNI为什么 C 要传JNIEnv 而C++不用传:
原因就是因为C中没有this关键字, 所以最后用一个二级指针保存一个JniEnv的指针,传进去后,模仿的this操作.
*/
//class Teacher {
//private:
//	char* name;
//public:
//	//计数器
//	static int total;
//	Teacher(char* name) {
//		this->name = name;
//		cout << "Teacher 有参构造函数" << endl;
//	}
//	~Teacher()
//	{
//		cout << "Teacher 析构函数" << endl;
//	}
//	//常函数 修饰的是this const写到函数后面,这个对象的任何东西都能被改变,这样做是为了保证数据安全.
//	//既不能改变指针的值,又不能改变指针指向的内容. 
//	void myprint() const {
//		printf("this 的指针%#x\n", this);
//		//this->name = (char*)"lala";
//		//报 const(内容不能修改) Teacher* const(值不能修改) this  
//		/*(这是一个指针常量)const Teacher* (这是一个常量指针)const this  
//		这样写的意思就是 前面指针常量的内容不能修改, 后面常量指针的值不能修改.
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



//友元函数 
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
//	//友元函数
//	friend void modify_i(A* p,int a);
//};
////友元函数的实现,在友元函数中可以访问私有的属性.
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

//友元类
/*
java 中
Class cls = Class.forName("com.test.Teacher");
cls.setAccessable(true);
Class 是一个类,com.test.Teacher是一个类, Class 是所有类的友元类,是不是呢.
Java 的话就是用C和C++写的.
*/
//class A {
//	//友元类
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
//	//B这个友元类可以访问A类的任何成员.
//	void accessAny() {
//		a.i = 30;
//		a.myprint();
//	}
//};
//void main() {
//
//}

/*
AndFix 阿里巴巴热修复框架:虽然不维护了,但是他的原理就是通过NDK 去替换原有的class,和原有的方法,
不需要重启,来实现方法指针的替换.
*/

//运算符重载: 本质还是函数调用.

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
////重载 +号    外部重载, 也可以重载在类内部
////Point operator+(Point &p1, Point &p2) {
////	Point tmp(p1.x + p2.x, p1.y + p2.y);
////	return tmp;
////}
////重载 -号
//Point operator-(Point &p1, Point &p2) {
//	Point tmp(p1.x - p2.x, p1.y - p2.y);
//	return tmp;
//}
//void main() {
//	Point p1(1, 12);
//	Point p2(2, 10);
//	//如果是类内部运算符重载就相当于 p1.operator+(p2)等;
//	Point p3 = p1 + p2;
//	p3.myprint();
//	/*
//	Java 中 String str3 = "abcd" + "efg";
//	在Java中为什么两个String 能相加呢?
//	其实这就是用运算符重载来实现的.
//	*/
//}




//当属性私有, 友元函数来完成运算符重载
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
//	//如果是类内部运算符重载就相当于 p1.operator+(p2)等;
//	Point p3 = p1 + p2;
//	p3.myprint();
//	/*
//	Java 中 String str3 = "abcd" + "efg";
//	在Java中为什么两个String 能相加呢?
//	其实这就是用运算符重载来实现的.
//	*/
//}




//继承
//代码的重用性
//class Human {
//public:
//	Human(char* name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	void say() {
//		cout << "说话" << endl;
//	}
//protected:
//	char* name;
//	int age;
//};
//class Man : public Human {
//public:
//	//给父类构造函数传惨,给属性对象赋值
//	Man(char* brothers,char* s_name,int s_age, char* h_name, int h_age):Human(s_name, s_age) , h(h_name, h_age) {
//		this->brothers = brothers;
//	}
//	void chasing() {
//		cout << "泡妞" << this->name << endl;
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
//	////父类类型的对象直接初始化父类类型的对象.
//	//Human h3 = m1;
//	getchar();
//}


// 继承 中 构造函数和析构函数的调用流程
// 父构造 -> 子构造 -> 子析构 -> 父析构
//class Human {
//public:
//	Human(char* name, int age) {
//		this->name = name;
//		this->age = age;
//		cout << "Human 构造函数" << endl;
//	}
//	void say() {
//		cout << "说话" << endl;
//	}
//	~Human()
//	{
//		cout << "Human 析构函数" << endl;
//	}
//public:
//	char* name;
//	int age;
//};
//class Man : public Human {
//public:
//	//给父类构造函数传惨,给属性对象赋值
//	Man(char* brothers, char* s_name, int s_age) :Human(s_name, s_age) {
//		this->brothers = brothers;
//		cout << "Man 构造函数" << endl;
//	}
//	~Man()
//	{
//		cout << "Man 析构函数" << endl;
//	}
//	void chasing() {
//		cout << "泡妞" << this->name << endl;
//	}
//	void say() {
//		cout << "男人喜欢泡妞" << endl;
//	}
//private:
//	char* brothers;
//};
//void func() {
//	//调用的都是子类的 say()的函数
//	Man m1((char*)"Android", (char*)"Java", 20);
//	//m1.say();
//	//Human h1 = m1;
//	//h1.say();
//	// 调用父类的say();
//	m1.Human::say();
//
//	//父类的属性赋值
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



//多继承
//class Person {
//public:
//};
//class Citizen {
//
//};
//// 学生 ,即是人,又是公民
///*
//继承的访问修饰符:public private protected 
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


//继承的二义性 : 虚继承
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
//	//b name 不明确,报错
//	//b.name = "Java";
//
//	//显式调用,指定父类
//	b.A1::name = (char*)"Java";
//	b.A2::name = (char*)"Android";
//
//	//virtual 虚继承来解决 属性的二义性,不明确的问题.
//	b.name = (char*)"Java";
//	//当然这里肯定还有同一个name 不同的类型的问题,这种碰到自行百度
//
//	getchar();
//}

//虚函数: 多态(程序的扩展性)
//动态多态:程序运行过程中,觉得哪一个函数被调用(重写)
//静态多态:重载
/*
发生动态多态的条件: 1. 继承 2.父类的引用或者指针指向子类的对象 3.函数的重写
*/

//#include "Plane.h"
//#include "Jet.h"
//#include "Copter.h"
////业务函数
//void bizplay(Plane& p) {
//	p.fly();
//	p.land();
//}
//void main() {
//	Plane p1;
//	bizplay(p1);
//	/*
//	要让运行的时候实现多态,就必须在 Plane 的函数上加virtuol关键字
//	,就能实现多态了,也就是虚函数.
//	*/
//	Jet j1;
//	bizplay(j1);
//
//	Copter c1;
//	bizplay(c1);
//	getchar();
//}

//纯虚函数 ：(抽象类)
//当一个类具有一个纯虚函数,这个类就是抽象类
//抽象类是不能实例化对象的.
//子类继承抽象类,必须要实现纯函数.如果没有,子类也是抽象类.
//形状
//class Shape {
//public:
//	//纯虚函数
//	virtual void sayArea() = 0;
//};
////圆
//class Circle : public Shape {
//public:
//	Circle(int r) {
//		this->r = r;
//	}
//	void sayArea() {
//		this->area = 3.14159 * r *r;
//		cout << "圆的面积:" << area << endl;
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

//接口: 只是逻辑上的划分,语法上和抽象类没有任何区别.

//模板函数(泛型)
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
////发现:这两个函数的业务逻辑是一样, 只是数据类型不一样而已.
////根据实际类型,自动推导.
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