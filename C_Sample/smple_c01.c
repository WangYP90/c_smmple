
#include <stdio.h>//include 预处理指令，类似java 的import
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#include <string.h>




//枚举 :固定的数据 enumeration(主要用来列举所有的情况,限制值,保证取值的安全性)
//enum Day {
//	Mon,
//	Tue,
//	Wed,
//	Thu,
//	Fri,
//	Sat,
//	Sun
//};
//void main(void) {
//	//枚举的值必须是括号中出现的值
//	enum Day d = Mon;
//
//	printf("%#x,%d\n",&d,d);
//	getchar();
//
//}

//联合体(共用体) : 不同类型的变量共同占用一段内存(相互覆盖),联合变量任何情况只有一个内存存在,目的(节省内存).
//联合体变量大小= 最大的成员所占的字节数
//union MyValue {
//	int x;
//	int y;
//	double z;
//};
//void main() {
//	union MyValue d1;
//	d1.x = 90;
//	d1.y = 100;
//	d1.z = 23.8; //最后一次赋值有效
//	printf("%d,%d,%lf \n",d1.x, d1.y,d1.z);
//	getchar();
//}

//结构体 是一种构造数据类型    类似于java中的object
//把不同的数据类型整合起来成为一个自定义的数据类型


//结构体函数指针成员 ,C语言到最后搞来搞去,写的都是这样的代码
//typedef struct Girl {
//	char* name;
//	int age;
//	void(*sayHi)(char*);
//}Girl;
//typedef Girl* GirlP; //Girl结构体指针取别名GirlP
////Girl 结构体类似于Java中的类.name和age 类似于属性,sayHi类似于方法.
//void sayHi(char* text) {
//	MessageBox(0,text,"title",0);
//}
//
//void rename(GirlP gp) {
//	gp->name = "Android";
//	//如果传Girl 类型进来,会重新开辟一个内存空间,用完就销毁了, 所以需要传指针进来
//}
//void main() {
//	struct Girl g1 = {"Lucy",18,sayHi};
//	g1.sayHi("hello");
//
//	GirlP gp = &g1;
//	rename(gp);
//	gp->sayHi("Byebye!");
//	getchar();
//}





// typedef 类型取别名
/*
1. 不同的名称代表在干不同的事情,比如:typedef int jint;
2.不同情况下,使用不同的别名
#if defined  (_cplusplus);
//typedef _JNIEnv JNIEnv;
//typedef _JavaVM JavaVM;
*/
//struct Man {
//	char name[20];
//	int age;
//};
//
//typedef struct Man JavaMan;
//typedef struct Man* JM;
//
//typedef int Age; //Age int类型的别名
//typedef int* Ap;//Age int 类型指针的别名;
//
////结构体取别名
//typedef struct Woman {
//	char name[20];
//	int age;
//} W,*WP;//W是Woman 结构体的别名, WP 是woman 结构体指针的别名
//
//void main() {
//	int i = 5;
//	Ap a = &i;
//
//	W w1 = {"Java",20};
//	WP wp1 = &w1;
//	printf("%s ,%d \n", w1.name, w1.age);
//	printf("%s ,%d \n",wp1->name, wp1->age);
//
//	getchar();
//}




//结构体与动态内存分配
//struct Man {
//	char  *name;
//	int age;
//};
//
//void main() {
//	struct Man *m_p = (struct Man*)malloc(sizeof(struct Man) *10);
//	struct Man *p = m_p;
//	赋值
//	p->name = "Jack";
//	p->age = 20;
//	p++;
//	p->name = "Android";
//	p->age = 21;
//
//	struct Man *loop_p = m_p;
//	for (; loop_p < m_p +2; loop_p++)
//	{
//		printf("%s, %d\n",loop_p->name ,loop_p->age);
//	}
//	free(m_p);
//	getchar();
//}



//结构体的大小 (字节对齐)  结构体必须满足 最大的数据类型的sizeof的值整除, 所以呢所有的属性呢都会变成8个字节,即使空出来一块.
//结构体变量的大小必须是最宽基本数据类型的整数倍. 如果不够,那么他就会在这些成员中间需要添加的填充字节.
//struct Man {
//	int age;
//	double weight;
//};
//void main() {
//	struct Man m1 = {20, 170.5};
//	printf(" %#x,%d,\n", &m1, sizeof(m1));
//	getchar();
//}

//结构体数组
//struct Man {
//	char name[20];
//	int age;
//};
//
//int main() {
//	struct Man mans[] = { {"Java", 20},{ "Android", 25}};
//	//遍历结构体数组
//	//1.
//	struct Man *p = mans;
//	for (; p < mans+2; p++)
//	{
//		printf("%s, %d\n",p->name, p->age);
//
//	}
//	//2.
//	int i = 0;
//	for (; i < 2; i++)
//	{
//		printf("%s, %d\n", mans[i].name, mans[i].age);
//	}
//	//3.
//	int i = 0;
//	for (; i < sizeof(mans) / sizeof(struct Man); i++)
//	{
//		printf("%s, %d\n", mans[i].name, mans[i].age);
//	}
//
//	//结构体的大小(字节对齐)
//
//}

//结构体 与 指针
//struct Man {
//	char name[20];
//	int age;
//};
//void main() {
//	struct Man m1 = {"Java", 20};
//	struct Man *p = &m1;
//	printf("%s,%d \n",m1.name,m1.age);
//	printf("%s,%d \n",(*p).name,(*p).age);
//	//-> 是(*p).的简写
//	printf("%s,%d \n", p->name,p->age);
//	system("pause");
//}




//结构体的几种写法

//4.结构体的嵌套  其实就是模拟java OOP 面向对象的写法.
//4.2  和4.1的写法没有任何区别
//struct Student {
//	char name[20];
//	int age;
//	struct Tracher {
//		char name[20];
//	}t;
//};
//4.1 基本写法
//struct Teacher {
//	char name[20];
//};
//
//struct Student {
//	char name[20];
//	int age;
//	struct Teacher t;
//};
//void main() {
//	//struct Student s1 = { "java",20,{"json"} };
//
//	struct Student s1;
//	s1.age = 10;
//	strcpy(s1.t.name,"json");
//	system("pause");
//}


//3.匿名结构体,主要用在控制结构体变量的个数
//struct {
//	int	age;
//}m3;
//void main() {
//	m3.age = 5;
//}




// 2. 随便定义了N个变量, 其他地方也可以使用
//struct Man {
//	char *name;
//	int age;
//}m1, m2 = {"Java",20};
//
//void main() {
//
//	m1.name = "Android";
//	m1.age = 10;
//
//	
//	getchar();
//}


//1. 定义结构体的基本写法
//struct Man {
//	//成员
//	char name1[20];
//	char* name;
//	int age;
//	int(*func)();
//	void*(*funj)();
//};
//
//int test() {
//	return 1;
//}
//
//void main() {
//	//初始化结构体的变量
//	//1. 第一种形式
//	//struct Man m1 = {"Java",20,};
//	//2. 声明完成后,需要什么自己赋值
//	struct Man m1;
//	m1.age = 23;
//	m1.name = "java";
//
//	m1.func = test;
//	strcpy(m1.name1,"Android"); //name1 是char数组,所以不能直接赋值,只能使用strcpy的方式
//	
//	printf("%s,%s, %d, %d\n", m1.name,m1.name1, m1.age, m1.func());
//
//	getchar();
//}
//



























//c 中 的字符串(字符数组)

//字符串的使用api  在线api文档 http://www.kuqin.com/clib/string/strchr.html

//字符串的拼接  java 中a+b,c中只能cpy a到一个新的数组,然后用strcat 拼接后续
//void main() {
//	char dest[50];
//	char *a = "china";
//	char *b = " is powerful!";
//	
//	strcpy(dest, a);
//	strcat(dest, b);
//	printf("%s\n", dest);
//	system("pause");
//}
//strchr 在一个串中查找给定字符串的第一个匹配处
//void main() {
//	char *str = "I want go to USA!";
//	printf("%#x\n", str);
//
//	char* p = strchr(str, 'w');
//	if (p)
//	{
//		printf("索引位置:%d\n", p - str);
//	}
//	else
//	{
//		printf("没有找到");
//	}
//	system("pause");
//}

//字符串的两种创建方式
//void main() {
//	//通过字符数组来 表示一个字符串
//	//char str[] = {'c','h','i','n', 'a','\0'};
//	//char str[6] = { 'c','h','i','n', 'a'};
//	//char str[10] = "china";
//	////可以修改
//	//str[0] = 's';
//	//printf("%s \n", str);
//
//
//	//getchar();
//
//
//	// 通过字符指针  
//	// 利用字符数组表示的可以修改, 利用指针表示的数组不能被修改.  和java 中类似,string不可变,stringBuffer可变
//	//内存连续排列
//	char* str = "how are you?";
//
//	//str[0] = 's'; //写入位置时发生访问冲突
//
//
//	printf("%#x \n", str);
//	printf("%s \n", str);
//	str += 3;
//	while (*str) {//取不到就为0, 为0就跳出了
//		printf("%c", *str);
//		str++;
//	}
//	getchar();
//}

















//创建一个数组,动态指定数组的长度
//在程序运行过程中,可以随意开辟指定大小的内存,以供使用,相当于java中的集合
//静态内存分配,分配内存大小是固定的,问题: 1. 很容易超出栈内存最大值 2.为了防止内存不够用会开辟更多的内存
//动态内存分配,在程序运行过程中,动态指定需要使用的内存大小,手动释放,释放之后这些内存还可以供其他程序使用或重新使用.


// 不能多次释放
// 释放完成后置NULL,标志释放完成
//内存泄漏    指针重新赋值不等于 释放前内存,  如果不做释放 会发生内存泄漏.
//void main() {
//	//40M
//	int *p1 = malloc(1024* 1024 * 10 * sizeof(int));
//	//if (p1 != NULL) {
//	//	free(p1);
//	//	p1 = NULL;
//	//}
//
//
//	p1 = malloc(1024 * 1024 * 20 * sizeof(int));
//
//	if (p1 != NULL) {
//		free(p1);
//		p1 = NULL;
//	}
//
//
//	getchar();
//}




//动态内存分配, +扩容
//
//void main() {
//	//静态内存分配,数组的大小是固定的
//	int len;
//	printf("第一次输入数组的长度:");
//	scanf("%d", &len);
//
//	
//	int* p = malloc(len * sizeof(int));
//	//int* p = calloc(len, sizeof(int));  //还有一种写法 calloc 不用自己算,传进去它自动帮你算
//	
//	
//
//	//赋值
//	int i = 0;
//	//p 是内存地址第一个int 4字节的地址, 所以i++ 就直接给内存地址赋值就可以了
//	for (; i < len; i++)
//	{
//		p[i] = rand() % 100;
//		printf("%d, %#x \n",p[i],&p[i]);
//	}
//
//	int addLen;
//	printf("第二次增加数组的长度:");
//	scanf("%d", &addLen);
//	//realloc 重新分配内存, 之前开辟的内存指针, 需要扩容或缩小的大小,扩大会
//	//扩大内存: 
//	//1. 若果当前内存段后面有需要的内存空间,直接扩展,返回原指针
//	//2. 当前内存段后面的空闲字节不够, 那就使用堆中第一个能满足这一要求的内存区域,把原内存数据copy,然后释放原内存,返回新的指针.
//	//3. 如果申请失败,返回NULL,原来的指针依然存在
//
//
//	int* p2 = realloc(p,sizeof(int) * (len +addLen));
//	if (p2 == NULL) {
//		printf("重新分配内存失败!!!!!!");
//	}
//
//	i = 0;
//	for (; i < (len + addLen); i++)
//	{
//		p2[i] = rand() % 100;
//		printf("%d, %#x \n", p2[i], &p2[i]);
//	}
//
//	if (p2 != NULL) {
//		free(p2);
//		p2 = NULL;
//	}
//
//
//	getchar();
//
//}












//
////动态内存分配
//void main() {
//	//40M
//	//stack overflow 错误,栈溢出
//	//int a[1024 * 1024 * 10]; //在栈区直接分配40M内存,正常来说window下面,一个应用程序分配的栈内存大小在2M,所以这样申请会报stack overflow
//	/*C语言的内存分配
//	1.栈区(stack)		自动分配,自动释放 ,一般是局部变量,用完立马就释放了.
//	2.堆区(heap)		程序员手动分配和释放,可以分配大概操作系统80%左右的内存.	
//	3.全局区或静态区	
//	4.字符常量区
//	5.程序代码区
//	*/
//
//
//	//在堆内存上分配一个400M的内存 
//	// malloc 返回的是void* 代表,它可以返回任意类型的指针 , 所以这里
//	int* p = malloc(1024 * 1024 * 100 * sizeof(int));
//
//	
//	getchar();
//	//释放该内存
//	free(p);
//
//
//}







//
////案例:用随机数生成一个数组,写一个函数查找最小值,并返回最小数的地址,在主函数总打印出来
//
//int* getMinPointer(int ids[], int len) {
//	int i = 0;
//	int* p = &ids[0];
//	for (;  i< len; i++)
//	{
//		if (ids[i] < *p) {
//			p = &ids[i];
//		}
//	}
//	return p;
//}
//
//
//void main() {
//	int ids[10];
//	int i = 0;
//	//初始化随机数发生器,设置种子,种子不一样,随机数才不一样
//	//当前时间作为种子
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{	
//	
//		ids[i] = rand() % 100;//生成随机数  rand不能生成 必须指定种子  模100就是100以内的数.
//		printf("%d  ",ids[i]);
//
//	}
//	int* p_1 = getMinPointer(ids, sizeof(ids) / sizeof(int));
//	printf("%#x, %d \n",p_1,*p_1);
//	getchar();
//}



// 函数指针的练习
//int add(int a,int b) {          
//	return a + b;
//}
//  
//int minus(int a, int b) {
//	return a - b;
//}
//
//void msg(int(*func_p)(int a, int b),int m,int n) {
//	int	r = func_p(m,n);
//	MessageBox(0, "xiaoxi", "标题", 0);
//	printf("%d \n",r);
//}
//
//void main() {
//	msg(add, 10, 20);
//	msg(minus, 10, 20);
//
//	getchar();
//}



////C语言里面没有字符串, 字符串用指针来表示
//void msg(char* msg, char* title) {
//	MessageBox(0, msg,title,0);
//}
//
////函数指针
//void main() {
//	//msg();
//	printf("%#x msg\n",msg);
//	printf("%#x msg\n", &msg);
//	//函数指针 void函数返回值类型 (*fun_p)函数指针的名称,() 函数的参数列表
//	void(*fun_p)() = msg;
//	fun_p("xiaoxi内容","biaoti");
//
//	getchar();
//}




////指针的运算
//void main() {
//	//int ids[] = {78, 90, 23, 65, 19};
//	////数组变量名ids就是数组的首地址
//	//printf("%#x \n", ids);
//	//printf("%#x \n", &ids);
//	//printf("%#x \n", &ids[0]);
//
//	////指针变量
//	//int *p = ids;
//	//printf("%d \n", *p);
//	////指针的加法, +1 向前移动sizeof(数据类型)个字节, 相当于直接移动到数组的下一个index 的地址.
//	///*数组在内存中是连续存储的,
//	//*/
//	//p++;
//
//	//printf("%d \n", *p);
//
//
//
//	//高级写法
//	int uids[5];
//	//int i = 0;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	uids[i] = i;
//	//}
//	//早些版本的写法,p<uids+5 uids是0 index 的内存地址,+5 index-5 后面的那个内存地址,p初始值就是uids,那么p++ 直到循环完毕.
//	int* p = uids;
//	printf("%#x\n",p);
//	int i= 0;
//	for (;p< uids+5; p++)
//	{
//		*p = i;
//		i++;
//	}
//	
//	getchar();
//}



//
////JNIEnv 是 jni.h 中 _JNIEnv 就是一个JNINativeXXX* 就是一个指针,
////多级指针(二级指针),指针保存的是变量的地址,保存的变量还可以是一个指针变量
////动态内存分配 二维数组,都需要用的到多级指针
//void main() {
//	int a = 50;
//
//	int* p1 = &a;
//
//	int** p2 = &p1;
//
//	int*** p3 = &p2;
//	printf("p1 : %#x, p2 : %#x", p1, p2);
//
//
//	int* qP1 = *p3;
//	int* qP2 = *p2;
//	int qa = *qP2;
//
//
//	//等同于
//	int qa1 = ***p3;
//	printf("qa %d",qa);
//	//printf("p2 %#x",);
//	getchar();
//}


////空指针
//void main() {
//	int i = 9;
//	int *p = NULL;
//	//p = &i;
//	printf("%d\n", *p); //空指针的默认地址为0,访问内存地址0,操作系统不允许.
//	getchar();
//}


//int main(void)
//{
//	/*指针为什么要有类型?
//	指针有类型,地址没有类型.
//	地址只是开始的位置,类型读取到上面位置结束
//	(例如:如果你是int类型 加入int占4字节,那么指针的类型就告诉你读到哪里结束.  内存地址告诉你从内存哪个位置开始读.)
//
//
//
//	*/
//	int i = 89;
//	int *p = &i;
//
//	double j = 78.9;
//	//赋值给double 类型变量的地址
//	p = &j;
//	printf("double size %d\n",sizeof(double));
//	printf("%#x,%lf\n",p,*p);
//
//}




#include <stdint.h>
#include <inttypes.h>
#define DENSITY 62.4  // 定义一个常量

#include <limits.h>
#include <float.h>
float f;
double d;
long double ld;

void main()
{
	char name[40];
	/*
	定义常量:
	#define DENSITY 62.4 这样像include 一样定义的常量,程序编译时,程序中的所有DENSITY 都被替换成了62.4,这个过程称为编译时替换,通常这种常量也叫做明示常量
	C90 标准新增 const 关键字, const int MONTHS = 12; 用于限定一个变量为只读.
	C头文件 limits.h 和 float.h ,


	C 语言 char类型数组必须以\0(ASCII对应0) 结束,那么40个就只能存储39个字符.  'x' 和"x" 就不同 一个是char基本类型,一个是char数组类型(后面就是\0)
	sizeof(name) = 40;    strlen(name) = 实际存储的字符长度;

	*/






}




//int main()
//{
//	/*
//	数字		科学计数法			指数记数法
//	100000000	1 X 10（9次方）		1.0e9
//	322.56		3.2256 X 10(2次方)	3.2256e2
//	0.000056	5.6 X 10(-5次方)	5.6e-5
//	
//
//	C标准规定，float类型必须至少能表示 10(-37次方) ~ 10 (37次方)， float 至少精确到小数点后6位。
//	double类型和float类型的最小取值范围相同，但是至少必须能表示10位有效数字。 （经验： 不管系统差异给小数部分分多少，一般情况下，double至少有13位小数精度）
//	C99 标准添加了一种新的浮点型常量格式--用十六进制表示浮点型常量。十六进制前加（0x或0X），用p 或P 分别代表e或E， 例如： 0xa.1fp10 ,打印16进制浮点型 使用 %e或%le
//	使用C语言,很多公司都有系统化的命名规范,比如 int i_smart; unsigned short us_versmart,一看命名就知道是什么类型
//	复数和虚数：
//
//	*/
//
//	printf("打印double 的值 ：%#x\n", &ld);
//
//	ld = 100.0;
//
//
//	printf("打印double 的值 ：%lf\n", ld);
//	printf("打印float 的取值范围 ：%d\n", sizeof(float));
//
//	printf("打印double 的值 ：%#x\n", &ld);
//
//}




//int main()
//{
//	/*
//	stdint.h 和 inttypes.h
//	int32_t: 是int类型的别名，是精确宽度整数类型，int32_t表示的宽度正好为是32位的时候，但是计算机底层系统不支持。因此这是个可选项。
//	如果系统不支持精确宽度整数类型怎么办？C99和C11提供了第2类别名集合：
//	1. int_least8_t ,至少是8位有符号的整数值的一个别名
//	2. int_fast8_t,至少8位有符号值而言运算最快的整数类型别名
//	3. intmax_t , C99定义了 intmax_t （最大的有符号整数） 类似的还有 unitmax_t 表示最大无符号整数类型
//	。 这些类型可能比 long long 和 unsigned long 类型更大。 
//	上面的这些可移植类型，在printf 打印的时候 有些使用 %d，有些使用 %ld ，C标准针对这一情况提供了 RPId32 \ 64 字符串宏来显示可移植类型。  还有 PR (Id li lo lu ) 很多种 宏
//
//
//	*/
//	
//	int32_t int32T = 5;
//
//	printf("打印int32_t 的字节数 ：%d\n", sizeof(int32_t));
//
//	printf("打印int32_t 百分号d 的值 ：%d\n", int32T);
//
//	printf("打印int32_t  PRID32 的值 ：%" PRId32 "\n", int32T);
//
//
//	printf("");
//
//}





















//
//int main()
//{
//
//	/*
//	数据类型关键字
//	int long short unsigned char float double 
//	C99 signed（基本整数类型的变式） void 
//	C11 标准新加 _Bool（布尔） _Complex（复数） _Imaginary（虚数）
//	8进制%o  16进制%x，  如果要显示各个进制数的前缀0、0x和0X，必须使用 %#o、%#x、%#X
//
//
//		short int 类型
//		long int 类型
//		long long
//		long long int 
//		unsigned int 或 unsigned 只用于非负数场合,类似于0~65535 而不是 -32768 ~ 32767
//
//		C90标准中,添加了 unsigned long int 或 unsigned long \int \ short,
//		C99标准中,添加了 unsigned long long int 或 unsigned long long
//
//		signed,在任何有符号类型前面添加关键字,可以强调使用有符号类型的意图.
//		C标准只是指定了: short占用的存储空间不能多于int,long占用的空间不能少于int.
//		
//		像java一样 也可以用 7L int -long 、 7LL - long long ，例如unsigned long long ,可以表示为 5ull、 10Ull、6LLU
//
//
//		int %d
//		short %d 或者 %hd
//		long %ld
//		float %f
//		double %lf
//		char	%c
//		%x 16进制
//		%o 8进制
//		%s 字符串
//		%lx 16进制打印long 类型
//		%lo 8进制打印long 类型
//		%e 打印指数计数法的浮点数 ,如果系统支持16进制格式的浮点数，可用a 和 A分别代替 e和 E。
//		


//		unsigned 是可以用u来表示的。
//		%lu unsigned long
//
//		char 类型：
//		char 类型存储的一个字符，但是从技术层面看，char是整数类型。因为char类型实际上存储的是整数而不是字符
//		，计算机使用数字编码来处理字符，即用特定整数表示特定的字符，参考ASCII编码表。
//
//		转义序列： 
//		\a		警报 
//		\b		退格
//		\f		换页
//		\n		换行
//		\r		回车
//		\t		水平制表符
//		\v		垂直制表符
//		\\		反斜杠(\)
//		\'		单引号
//		\"		双引号
//		\?		问号
//		\0oo	八进制(oo必须是有效的八进制数，即每个o可表示0~7中的一个数)
//		\xhh	十六进制(hh必须是有效的十六进制数，即每个h可表示0~f中的一个数)
//
//
//		C99标准添加了_Bool类型。
//
//		
//
//	*/
//
//	printf("Gramps sez,\"a \\ is a backslash\"\n");
//	printf("Hello!\007\n"); //ASCII 码表中 数字007 就是\a
//
//	printf("Hello!\f\n");
//
//	printf("Hello!\065\n");
//
//	printf("");
//}



//int main(void) 
//{
//	int n, n2, n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;
//	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2,n3);
//}







//int main(void) //程序的入口，一个main 方法代表一个程序的入口，而main方法每个程序只能有一个。
//{
//	/*
//	C语言中的6中语句： 
//下面这6中语句是对于新手的学习,因为我又java基础所以这些略过.
//	标号语句
//	符合语句
//	表达式语句
//	选择语句
//	迭代语句
//	跳转语句
//
//
//	// 双斜线 单行注释 是C99标准以后加的
//
//	C90，要求吧变量声明在块的顶部，其他语句不能任何声明的前面。 C99和C11 改变了这个的限制，可以随意声明。
//	C99 和C11 允许使用更长的标识符名（变量名），但是编译器只识别前63个字符。C90只允许6个字符，旧式编译器通常最多只允许8个字符。
//	变量名可以用 大、小写字母和下划线来命名。第一个字符必须是字符或下划线，不能是数字。
//	*/
//
//
//
//	printf("Hello\bWorld\t!\n");
//	getchar();
//	return 0;
//}