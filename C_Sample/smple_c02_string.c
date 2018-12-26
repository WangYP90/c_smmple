#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//字符串相关函数
//strcat 字符串拼接函数
//在线API文档:
//http://www.kuqin.com/clib/string/strcpy.html
//int main(void)
//{
//	char dest[50];
//	char *a = "china";
//	char *b = "is powerful!";
//	strcpy(dest, a);
//	strcat(dest, b);
//	printf("%s\n",dest);
//	system("pause");
//}
//
////strchar 在一个串查找给定字符的第一个匹配之处
//void main(void) {
//	char *str = "I want go to USA!";
//	//U元素的指针
//	//str+3
//	char* p = strchar(str, 'w');
//	if (p) {
//		printf("索引位置:%d\n", p -str);
//	}
//	else {
//		printf("没有找到");
//	}
//
//}
//strstr 从字符串 haystack中寻找needle第一次出现的位置
//void main(void) {
//	char *haystack = "I want go to USA!";
//	char *needle = "to";
//
//	//U元素的指针
//	char* p = strstr(haystack, needle);
//	if (p)
//	{
//		printf("索引位置:%d\n", p - haystack);
//	}
//	else {
//		printf("没有找到");
//	}
//	getchar();
//}



////strcmp 比较字符串 strcmpi 比较字符串,忽略大小写
//void main(void) {
//	char *str1 = "abc";
//	char *str2 = "ABC";
//	//int r = strcmpi(str1, str2);
//	int r = _strcmpi(str1, str2);
//	printf("%d\n", r);
//
//	//str1 > str2
//	if (r > 0) {
//		printf("str1 大于str2\n");
//	}
//	else if(r == 0){
//		printf("str1 等于str2\n");
//	}
//	else if (r < 0) {
//		printf("str1 小于str2\n");
//	}
//	system("pause");
//}
//
////strset 把字符串s中的所有字符都设置成字符c
//void main(void) {
//	char str[] = "internet change the world!";
//	_strset(str,'w');
//	printf("%s \n",str);
//	system("pause");
//}
////strrev 把字符串s的所有字符的顺序颠倒过来
//void main(void) {
//	char str[] = "internet change the world!";
//	_strrev(str);
//	printf("%s\n", str);
//	system("pause");
//}

//atoi 字符串转为int 类型
//atol();将字符串转换为长整型值   
//在C中没有像Java 中Integer.pare(xxx) 这样的api, 但是我们自己可以实现这样的功能
//void main(void) {
//	char* str = "a78";
//	//int r = atoi(str);
//	long r = atol(str);
//	printf("%ld\n", r);
//	system("pause");
//}

//
////字符串 转为double 类型,
//void main(void) {
//	char* str = "77b8b";
//	char** p = NULL;
//	//char* p = str + 2;
//	//参数说明: str 为要转换的字符串,enstr 为第一个不能转换的字符的指针
//	double r = strtod(str, p);
//	printf("%lf\n", r);
//	printf("%#x\n", &p);
//	system("pause");
//}
//
////strupr 转换为大写
//void main(void) {
//	char str[] = "CHINA motherland!";
//	_strupr(str);
//	printf("%s\n", str);
//	system("pause");
//}
//
////转换为小写
//void mystr1wr(char str[], int len) {
//	int i = 0;
//	for (; i < len; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] = str[i] - 'A' + 'a';
//		}
//	}
//}
//


//void main(void) {
//	char str[] = "CHINA motherland!";
//	mystr1wr(str, strlen(str));
//	printf("%s\n", str);
//	system("pause");
//}


//练习:删除字符串中指定的字符
//void delchar(char *str, char del) {
//	char *p = str;
//	while (*str != '\0')
//	{
//		if (*str != del)
//		{
//			*p++ = *str;
//		}
//		str++;
//	}
//	*p = '\0';
//}
//
////删除一个字符
//int main() {
//	char str[] = "vencent ppqq";
//	delchar(str, 't');
//	printf("%s\n", str);
//	getchar();
//}



//
//
////Java String replaceAll
////StringBuffer buff.deleteCharat(buff.length() -1);
////s删除最后一个字符
//void main(void) {
//	char str[] = "internet";
//	str[strlen(str) - 1] = '\0';
//	printf("%s\n", str);
//
//	//作业:realloc 实现StringBuffer 的拼接,而不是一开始开品一个很大的数据
//	//结构体StringBuffer
//	system("pause");
//}
//
//
////memcpy 由src所指内存区域复制count个字节到dest所指内存区域
//void main(void) {
//	char src[] = "C,C++,Java";
//	char dest[20] = {0};
//
//	//字节
//	memcpy(dest, src, 5);
//
//	printf("%s\n", dest);
//	system("pause");
//}
//
////memchr 从buf所指内存区域的前count个字节查找字符ch.
//void main(void) {
//	char src[] = "C,C++,Java";
//	char ch = 'C';
//
//	//字节 (分段截取)
//	char* p = memchr(src+1, ch, 5);
//	if (p)
//	{
//		printf("索引: %d\n", p - src);
//	}
//	else {
//		printf("找不到\n");
//	}
//	system("pause");
//}
//
//
////memove 由src所指内存区域复制count个字节到dest 所指内存区域
//void main() {
//	char s[] = "Michael Jackson!";
//	//截取的效果
//	memmove(s, s + 8, strlen(s) - 8 - 1); //
//	printf("%s\n", s);
//	s[strlen(s) - 8] = 0;
//	printf("%s\n", s);
//	getchar();
//}

//在字符串s1中寻找字符串s2中任何一个字符相匹配的第一个字符的位置,空字符NULL不包括在内
//void main() {
//	char *s1 = "Welcome To Beijing";
//	char *s2 = "to";
//	char *p;
//
//	p = strpbrk(s1, s2);
//	if (p)
//	{
//		printf("%s\n", p);  //找到 s2任意一个字符相匹配的第一个字符位置,然后打印(以%s打印,读到\0 结束).
//	}
//	else {
//		printf("Not Found!\n");
//	}
//	p = strpbrk(s1, "Da");
//	if (p) {
//		printf("%s", p);
//	}
//	else
//	{
//		printf("Not Found!");
//	}
//	getchar();
//}
