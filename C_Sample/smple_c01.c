
#include <stdio.h>//include Ԥ����ָ�����java ��import
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#include <string.h>




//ö�� :�̶������� enumeration(��Ҫ�����о����е����,����ֵ,��֤ȡֵ�İ�ȫ��)
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
//	//ö�ٵ�ֵ�����������г��ֵ�ֵ
//	enum Day d = Mon;
//
//	printf("%#x,%d\n",&d,d);
//	getchar();
//
//}

//������(������) : ��ͬ���͵ı�����ͬռ��һ���ڴ�(�໥����),���ϱ����κ����ֻ��һ���ڴ����,Ŀ��(��ʡ�ڴ�).
//�����������С= ���ĳ�Ա��ռ���ֽ���
//union MyValue {
//	int x;
//	int y;
//	double z;
//};
//void main() {
//	union MyValue d1;
//	d1.x = 90;
//	d1.y = 100;
//	d1.z = 23.8; //���һ�θ�ֵ��Ч
//	printf("%d,%d,%lf \n",d1.x, d1.y,d1.z);
//	getchar();
//}

//�ṹ�� ��һ�ֹ�����������    ������java�е�object
//�Ѳ�ͬ��������������������Ϊһ���Զ������������


//�ṹ�庯��ָ���Ա ,C���Ե���������ȥ,д�Ķ��������Ĵ���
//typedef struct Girl {
//	char* name;
//	int age;
//	void(*sayHi)(char*);
//}Girl;
//typedef Girl* GirlP; //Girl�ṹ��ָ��ȡ����GirlP
////Girl �ṹ��������Java�е���.name��age ����������,sayHi�����ڷ���.
//void sayHi(char* text) {
//	MessageBox(0,text,"title",0);
//}
//
//void rename(GirlP gp) {
//	gp->name = "Android";
//	//�����Girl ���ͽ���,�����¿���һ���ڴ�ռ�,�����������, ������Ҫ��ָ�����
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





// typedef ����ȡ����
/*
1. ��ͬ�����ƴ����ڸɲ�ͬ������,����:typedef int jint;
2.��ͬ�����,ʹ�ò�ͬ�ı���
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
//typedef int Age; //Age int���͵ı���
//typedef int* Ap;//Age int ����ָ��ı���;
//
////�ṹ��ȡ����
//typedef struct Woman {
//	char name[20];
//	int age;
//} W,*WP;//W��Woman �ṹ��ı���, WP ��woman �ṹ��ָ��ı���
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




//�ṹ���붯̬�ڴ����
//struct Man {
//	char  *name;
//	int age;
//};
//
//void main() {
//	struct Man *m_p = (struct Man*)malloc(sizeof(struct Man) *10);
//	struct Man *p = m_p;
//	��ֵ
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



//�ṹ��Ĵ�С (�ֽڶ���)  �ṹ��������� �����������͵�sizeof��ֵ����, ���������е������ض�����8���ֽ�,��ʹ�ճ���һ��.
//�ṹ������Ĵ�С�������������������͵�������. �������,��ô���ͻ�����Щ��Ա�м���Ҫ��ӵ�����ֽ�.
//struct Man {
//	int age;
//	double weight;
//};
//void main() {
//	struct Man m1 = {20, 170.5};
//	printf(" %#x,%d,\n", &m1, sizeof(m1));
//	getchar();
//}

//�ṹ������
//struct Man {
//	char name[20];
//	int age;
//};
//
//int main() {
//	struct Man mans[] = { {"Java", 20},{ "Android", 25}};
//	//�����ṹ������
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
//	//�ṹ��Ĵ�С(�ֽڶ���)
//
//}

//�ṹ�� �� ָ��
//struct Man {
//	char name[20];
//	int age;
//};
//void main() {
//	struct Man m1 = {"Java", 20};
//	struct Man *p = &m1;
//	printf("%s,%d \n",m1.name,m1.age);
//	printf("%s,%d \n",(*p).name,(*p).age);
//	//-> ��(*p).�ļ�д
//	printf("%s,%d \n", p->name,p->age);
//	system("pause");
//}




//�ṹ��ļ���д��

//4.�ṹ���Ƕ��  ��ʵ����ģ��java OOP ��������д��.
//4.2  ��4.1��д��û���κ�����
//struct Student {
//	char name[20];
//	int age;
//	struct Tracher {
//		char name[20];
//	}t;
//};
//4.1 ����д��
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


//3.�����ṹ��,��Ҫ���ڿ��ƽṹ������ĸ���
//struct {
//	int	age;
//}m3;
//void main() {
//	m3.age = 5;
//}




// 2. ��㶨����N������, �����ط�Ҳ����ʹ��
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


//1. ����ṹ��Ļ���д��
//struct Man {
//	//��Ա
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
//	//��ʼ���ṹ��ı���
//	//1. ��һ����ʽ
//	//struct Man m1 = {"Java",20,};
//	//2. ������ɺ�,��Ҫʲô�Լ���ֵ
//	struct Man m1;
//	m1.age = 23;
//	m1.name = "java";
//
//	m1.func = test;
//	strcpy(m1.name1,"Android"); //name1 ��char����,���Բ���ֱ�Ӹ�ֵ,ֻ��ʹ��strcpy�ķ�ʽ
//	
//	printf("%s,%s, %d, %d\n", m1.name,m1.name1, m1.age, m1.func());
//
//	getchar();
//}
//



























//c �� ���ַ���(�ַ�����)

//�ַ�����ʹ��api  ����api�ĵ� http://www.kuqin.com/clib/string/strchr.html

//�ַ�����ƴ��  java ��a+b,c��ֻ��cpy a��һ���µ�����,Ȼ����strcat ƴ�Ӻ���
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
//strchr ��һ�����в��Ҹ����ַ����ĵ�һ��ƥ�䴦
//void main() {
//	char *str = "I want go to USA!";
//	printf("%#x\n", str);
//
//	char* p = strchr(str, 'w');
//	if (p)
//	{
//		printf("����λ��:%d\n", p - str);
//	}
//	else
//	{
//		printf("û���ҵ�");
//	}
//	system("pause");
//}

//�ַ��������ִ�����ʽ
//void main() {
//	//ͨ���ַ������� ��ʾһ���ַ���
//	//char str[] = {'c','h','i','n', 'a','\0'};
//	//char str[6] = { 'c','h','i','n', 'a'};
//	//char str[10] = "china";
//	////�����޸�
//	//str[0] = 's';
//	//printf("%s \n", str);
//
//
//	//getchar();
//
//
//	// ͨ���ַ�ָ��  
//	// �����ַ������ʾ�Ŀ����޸�, ����ָ���ʾ�����鲻�ܱ��޸�.  ��java ������,string���ɱ�,stringBuffer�ɱ�
//	//�ڴ���������
//	char* str = "how are you?";
//
//	//str[0] = 's'; //д��λ��ʱ�������ʳ�ͻ
//
//
//	printf("%#x \n", str);
//	printf("%s \n", str);
//	str += 3;
//	while (*str) {//ȡ������Ϊ0, Ϊ0��������
//		printf("%c", *str);
//		str++;
//	}
//	getchar();
//}

















//����һ������,��ָ̬������ĳ���
//�ڳ������й�����,�������⿪��ָ����С���ڴ�,�Թ�ʹ��,�൱��java�еļ���
//��̬�ڴ����,�����ڴ��С�ǹ̶���,����: 1. �����׳���ջ�ڴ����ֵ 2.Ϊ�˷�ֹ�ڴ治���ûῪ�ٸ�����ڴ�
//��̬�ڴ����,�ڳ������й�����,��ָ̬����Ҫʹ�õ��ڴ��С,�ֶ��ͷ�,�ͷ�֮����Щ�ڴ滹���Թ���������ʹ�û�����ʹ��.


// ���ܶ���ͷ�
// �ͷ���ɺ���NULL,��־�ͷ����
//�ڴ�й©    ָ�����¸�ֵ������ �ͷ�ǰ�ڴ�,  ��������ͷ� �ᷢ���ڴ�й©.
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




//��̬�ڴ����, +����
//
//void main() {
//	//��̬�ڴ����,����Ĵ�С�ǹ̶���
//	int len;
//	printf("��һ����������ĳ���:");
//	scanf("%d", &len);
//
//	
//	int* p = malloc(len * sizeof(int));
//	//int* p = calloc(len, sizeof(int));  //����һ��д�� calloc �����Լ���,����ȥ���Զ�������
//	
//	
//
//	//��ֵ
//	int i = 0;
//	//p ���ڴ��ַ��һ��int 4�ֽڵĵ�ַ, ����i++ ��ֱ�Ӹ��ڴ��ַ��ֵ�Ϳ�����
//	for (; i < len; i++)
//	{
//		p[i] = rand() % 100;
//		printf("%d, %#x \n",p[i],&p[i]);
//	}
//
//	int addLen;
//	printf("�ڶ�����������ĳ���:");
//	scanf("%d", &addLen);
//	//realloc ���·����ڴ�, ֮ǰ���ٵ��ڴ�ָ��, ��Ҫ���ݻ���С�Ĵ�С,�����
//	//�����ڴ�: 
//	//1. ������ǰ�ڴ�κ�������Ҫ���ڴ�ռ�,ֱ����չ,����ԭָ��
//	//2. ��ǰ�ڴ�κ���Ŀ����ֽڲ���, �Ǿ�ʹ�ö��е�һ����������һҪ����ڴ�����,��ԭ�ڴ�����copy,Ȼ���ͷ�ԭ�ڴ�,�����µ�ָ��.
//	//3. �������ʧ��,����NULL,ԭ����ָ����Ȼ����
//
//
//	int* p2 = realloc(p,sizeof(int) * (len +addLen));
//	if (p2 == NULL) {
//		printf("���·����ڴ�ʧ��!!!!!!");
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
////��̬�ڴ����
//void main() {
//	//40M
//	//stack overflow ����,ջ���
//	//int a[1024 * 1024 * 10]; //��ջ��ֱ�ӷ���40M�ڴ�,������˵window����,һ��Ӧ�ó�������ջ�ڴ��С��2M,������������ᱨstack overflow
//	/*C���Ե��ڴ����
//	1.ջ��(stack)		�Զ�����,�Զ��ͷ� ,һ���Ǿֲ�����,����������ͷ���.
//	2.����(heap)		����Ա�ֶ�������ͷ�,���Է����Ų���ϵͳ80%���ҵ��ڴ�.	
//	3.ȫ������̬��	
//	4.�ַ�������
//	5.���������
//	*/
//
//
//	//�ڶ��ڴ��Ϸ���һ��400M���ڴ� 
//	// malloc ���ص���void* ����,�����Է����������͵�ָ�� , ��������
//	int* p = malloc(1024 * 1024 * 100 * sizeof(int));
//
//	
//	getchar();
//	//�ͷŸ��ڴ�
//	free(p);
//
//
//}







//
////����:�����������һ������,дһ������������Сֵ,��������С���ĵ�ַ,���������ܴ�ӡ����
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
//	//��ʼ�������������,��������,���Ӳ�һ��,������Ų�һ��
//	//��ǰʱ����Ϊ����
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{	
//	
//		ids[i] = rand() % 100;//���������  rand�������� ����ָ������  ģ100����100���ڵ���.
//		printf("%d  ",ids[i]);
//
//	}
//	int* p_1 = getMinPointer(ids, sizeof(ids) / sizeof(int));
//	printf("%#x, %d \n",p_1,*p_1);
//	getchar();
//}



// ����ָ�����ϰ
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
//	MessageBox(0, "xiaoxi", "����", 0);
//	printf("%d \n",r);
//}
//
//void main() {
//	msg(add, 10, 20);
//	msg(minus, 10, 20);
//
//	getchar();
//}



////C��������û���ַ���, �ַ�����ָ������ʾ
//void msg(char* msg, char* title) {
//	MessageBox(0, msg,title,0);
//}
//
////����ָ��
//void main() {
//	//msg();
//	printf("%#x msg\n",msg);
//	printf("%#x msg\n", &msg);
//	//����ָ�� void��������ֵ���� (*fun_p)����ָ�������,() �����Ĳ����б�
//	void(*fun_p)() = msg;
//	fun_p("xiaoxi����","biaoti");
//
//	getchar();
//}




////ָ�������
//void main() {
//	//int ids[] = {78, 90, 23, 65, 19};
//	////���������ids����������׵�ַ
//	//printf("%#x \n", ids);
//	//printf("%#x \n", &ids);
//	//printf("%#x \n", &ids[0]);
//
//	////ָ�����
//	//int *p = ids;
//	//printf("%d \n", *p);
//	////ָ��ļӷ�, +1 ��ǰ�ƶ�sizeof(��������)���ֽ�, �൱��ֱ���ƶ����������һ��index �ĵ�ַ.
//	///*�������ڴ����������洢��,
//	//*/
//	//p++;
//
//	//printf("%d \n", *p);
//
//
//
//	//�߼�д��
//	int uids[5];
//	//int i = 0;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	uids[i] = i;
//	//}
//	//��Щ�汾��д��,p<uids+5 uids��0 index ���ڴ��ַ,+5 index-5 ������Ǹ��ڴ��ַ,p��ʼֵ����uids,��ôp++ ֱ��ѭ�����.
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
////JNIEnv �� jni.h �� _JNIEnv ����һ��JNINativeXXX* ����һ��ָ��,
////�༶ָ��(����ָ��),ָ�뱣����Ǳ����ĵ�ַ,����ı�����������һ��ָ�����
////��̬�ڴ���� ��ά����,����Ҫ�õĵ��༶ָ��
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
//	//��ͬ��
//	int qa1 = ***p3;
//	printf("qa %d",qa);
//	//printf("p2 %#x",);
//	getchar();
//}


////��ָ��
//void main() {
//	int i = 9;
//	int *p = NULL;
//	//p = &i;
//	printf("%d\n", *p); //��ָ���Ĭ�ϵ�ַΪ0,�����ڴ��ַ0,����ϵͳ������.
//	getchar();
//}


//int main(void)
//{
//	/*ָ��ΪʲôҪ������?
//	ָ��������,��ַû������.
//	��ַֻ�ǿ�ʼ��λ��,���Ͷ�ȡ������λ�ý���
//	(����:�������int���� ����intռ4�ֽ�,��ôָ������;͸���������������.  �ڴ��ַ��������ڴ��ĸ�λ�ÿ�ʼ��.)
//
//
//
//	*/
//	int i = 89;
//	int *p = &i;
//
//	double j = 78.9;
//	//��ֵ��double ���ͱ����ĵ�ַ
//	p = &j;
//	printf("double size %d\n",sizeof(double));
//	printf("%#x,%lf\n",p,*p);
//
//}




#include <stdint.h>
#include <inttypes.h>
#define DENSITY 62.4  // ����һ������

#include <limits.h>
#include <float.h>
float f;
double d;
long double ld;

void main()
{
	char name[40];
	/*
	���峣��:
	#define DENSITY 62.4 ������include һ������ĳ���,�������ʱ,�����е�����DENSITY �����滻����62.4,������̳�Ϊ����ʱ�滻,ͨ�����ֳ���Ҳ������ʾ����
	C90 ��׼���� const �ؼ���, const int MONTHS = 12; �����޶�һ������Ϊֻ��.
	Cͷ�ļ� limits.h �� float.h ,


	C ���� char�������������\0(ASCII��Ӧ0) ����,��ô40����ֻ�ܴ洢39���ַ�.  'x' ��"x" �Ͳ�ͬ һ����char��������,һ����char��������(�������\0)
	sizeof(name) = 40;    strlen(name) = ʵ�ʴ洢���ַ�����;

	*/






}




//int main()
//{
//	/*
//	����		��ѧ������			ָ��������
//	100000000	1 X 10��9�η���		1.0e9
//	322.56		3.2256 X 10(2�η�)	3.2256e2
//	0.000056	5.6 X 10(-5�η�)	5.6e-5
//	
//
//	C��׼�涨��float���ͱ��������ܱ�ʾ 10(-37�η�) ~ 10 (37�η�)�� float ���پ�ȷ��С�����6λ��
//	double���ͺ�float���͵���Сȡֵ��Χ��ͬ���������ٱ����ܱ�ʾ10λ��Ч���֡� �����飺 ����ϵͳ�����С�����ֶַ��٣�һ������£�double������13λС�����ȣ�
//	C99 ��׼�����һ���µĸ����ͳ�����ʽ--��ʮ�����Ʊ�ʾ�����ͳ�����ʮ������ǰ�ӣ�0x��0X������p ��P �ֱ����e��E�� ���磺 0xa.1fp10 ,��ӡ16���Ƹ����� ʹ�� %e��%le
//	ʹ��C����,�ܶ๫˾����ϵͳ���������淶,���� int i_smart; unsigned short us_versmart,һ��������֪����ʲô����
//	������������
//
//	*/
//
//	printf("��ӡdouble ��ֵ ��%#x\n", &ld);
//
//	ld = 100.0;
//
//
//	printf("��ӡdouble ��ֵ ��%lf\n", ld);
//	printf("��ӡfloat ��ȡֵ��Χ ��%d\n", sizeof(float));
//
//	printf("��ӡdouble ��ֵ ��%#x\n", &ld);
//
//}




//int main()
//{
//	/*
//	stdint.h �� inttypes.h
//	int32_t: ��int���͵ı������Ǿ�ȷ����������ͣ�int32_t��ʾ�Ŀ������Ϊ��32λ��ʱ�򣬵��Ǽ�����ײ�ϵͳ��֧�֡�������Ǹ���ѡ�
//	���ϵͳ��֧�־�ȷ�������������ô�죿C99��C11�ṩ�˵�2��������ϣ�
//	1. int_least8_t ,������8λ�з��ŵ�����ֵ��һ������
//	2. int_fast8_t,����8λ�з���ֵ�������������������ͱ���
//	3. intmax_t , C99������ intmax_t �������з��������� ���ƵĻ��� unitmax_t ��ʾ����޷�����������
//	�� ��Щ���Ϳ��ܱ� long long �� unsigned long ���͸��� 
//	�������Щ����ֲ���ͣ���printf ��ӡ��ʱ�� ��Щʹ�� %d����Щʹ�� %ld ��C��׼�����һ����ṩ�� RPId32 \ 64 �ַ���������ʾ����ֲ���͡�  ���� PR (Id li lo lu ) �ܶ��� ��
//
//
//	*/
//	
//	int32_t int32T = 5;
//
//	printf("��ӡint32_t ���ֽ��� ��%d\n", sizeof(int32_t));
//
//	printf("��ӡint32_t �ٷֺ�d ��ֵ ��%d\n", int32T);
//
//	printf("��ӡint32_t  PRID32 ��ֵ ��%" PRId32 "\n", int32T);
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
//	�������͹ؼ���
//	int long short unsigned char float double 
//	C99 signed�������������͵ı�ʽ�� void 
//	C11 ��׼�¼� _Bool�������� _Complex�������� _Imaginary��������
//	8����%o  16����%x��  ���Ҫ��ʾ������������ǰ׺0��0x��0X������ʹ�� %#o��%#x��%#X
//
//
//		short int ����
//		long int ����
//		long long
//		long long int 
//		unsigned int �� unsigned ֻ���ڷǸ�������,������0~65535 ������ -32768 ~ 32767
//
//		C90��׼��,����� unsigned long int �� unsigned long \int \ short,
//		C99��׼��,����� unsigned long long int �� unsigned long long
//
//		signed,���κ��з�������ǰ����ӹؼ���,����ǿ��ʹ���з������͵���ͼ.
//		C��׼ֻ��ָ����: shortռ�õĴ洢�ռ䲻�ܶ���int,longռ�õĿռ䲻������int.
//		
//		��javaһ�� Ҳ������ 7L int -long �� 7LL - long long ������unsigned long long ,���Ա�ʾΪ 5ull�� 10Ull��6LLU
//
//
//		int %d
//		short %d ���� %hd
//		long %ld
//		float %f
//		double %lf
//		char	%c
//		%x 16����
//		%o 8����
//		%s �ַ���
//		%lx 16���ƴ�ӡlong ����
//		%lo 8���ƴ�ӡlong ����
//		%e ��ӡָ���������ĸ����� ,���ϵͳ֧��16���Ƹ�ʽ�ĸ�����������a �� A�ֱ���� e�� E��
//		


//		unsigned �ǿ�����u����ʾ�ġ�
//		%lu unsigned long
//
//		char ���ͣ�
//		char ���ʹ洢��һ���ַ������ǴӼ������濴��char���������͡���Ϊchar����ʵ���ϴ洢���������������ַ�
//		�������ʹ�����ֱ����������ַ��������ض�������ʾ�ض����ַ����ο�ASCII�����
//
//		ת�����У� 
//		\a		���� 
//		\b		�˸�
//		\f		��ҳ
//		\n		����
//		\r		�س�
//		\t		ˮƽ�Ʊ��
//		\v		��ֱ�Ʊ��
//		\\		��б��(\)
//		\'		������
//		\"		˫����
//		\?		�ʺ�
//		\0oo	�˽���(oo��������Ч�İ˽���������ÿ��o�ɱ�ʾ0~7�е�һ����)
//		\xhh	ʮ������(hh��������Ч��ʮ������������ÿ��h�ɱ�ʾ0~f�е�һ����)
//
//
//		C99��׼�����_Bool���͡�
//
//		
//
//	*/
//
//	printf("Gramps sez,\"a \\ is a backslash\"\n");
//	printf("Hello!\007\n"); //ASCII ����� ����007 ����\a
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







//int main(void) //�������ڣ�һ��main ��������һ���������ڣ���main����ÿ������ֻ����һ����
//{
//	/*
//	C�����е�6����䣺 
//������6������Ƕ������ֵ�ѧϰ,��Ϊ����java����������Щ�Թ�.
//	������
//	�������
//	���ʽ���
//	ѡ�����
//	�������
//	��ת���
//
//
//	// ˫б�� ����ע�� ��C99��׼�Ժ�ӵ�
//
//	C90��Ҫ��ɱ��������ڿ�Ķ�����������䲻���κ�������ǰ�档 C99��C11 �ı�����������ƣ���������������
//	C99 ��C11 ����ʹ�ø����ı�ʶ�������������������Ǳ�����ֻʶ��ǰ63���ַ���C90ֻ����6���ַ�����ʽ������ͨ�����ֻ����8���ַ���
//	������������ ��Сд��ĸ���»�������������һ���ַ��������ַ����»��ߣ����������֡�
//	*/
//
//
//
//	printf("Hello\bWorld\t!\n");
//	getchar();
//	return 0;
//}