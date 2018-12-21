#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdint.h>
#include <string.h> 

//void mergeFile(char file_txt[], char merge_file[]) {
//	FILE *file_t = fopen(file_txt, "rb");
//
//
//
//}
////实现文件的分隔和合并
//void fileSplit(char file_path[], char split_dir[], long split_size) {
//	FILE *file = fopen(file_path, "rb");
//	fseek(file, 0, SEEK_END);
//	long filesize = ftell(file);
//	fseek(file, 0, SEEK_SET);
//	if (filesize < split_size)
//	{	//文件小于拆分大小,直接返回原文件地址
//		return file_path;
//	}
//	int mulriple = 0;
//	if ((split_size % 1024) != 0)
//	{
//		//抛出异常 
//	}
//	else {
//		mulriple = split_size / 1024;
//	}
//	int ch;
//	char buffer[1024];
//	int len = 0;
//	FILE *writefp = NULL;
//	char split_files[60];
//	strcpy(split_files, split_dir);
//	strcat(split_files,"\\split_test.txt");
//	printf("打印split_test.txt地址%s", split_files);
//	FILE *split_file_txt = fopen(split_files,"w");
//	int index = 0;
//	int index_1 = 0;
//	while ((len = fread(buffer, sizeof(char), 1024, file)) != 0) {
//		if (index == mulriple) {
//			index = 0;
//		}
//		if (index == 0) {
//			if (writefp != NULL) {
//				fclose(writefp);
//				writefp = NULL;
//			}
//			char split_file[60] = "\0";
//			char file_name[50] = "\0";
//			strcat(split_file, split_dir);
//			sprintf(file_name,"\\split_测试分隔%d.tmp", index_1++);
//			strcat(split_file, file_name);
//			printf("打印拼接完成的文件地址%s", split_file);
//			writefp = fopen(split_file, "wb");
//			fputs(split_file, split_file_txt); // 写入文件名
//			fputc('\n', split_file_txt);
//		
//		}
//		if (len) {
//			fwrite(buffer, sizeof(int), len, writefp);
//			index++;
//		}
//	}
//	if (writefp != NULL) {
//		fclose(writefp);
//		writefp = NULL;
//	}
//	fclose(file);
//	fclose(split_file_txt);
//
//}
//	
////void main() {
////	char normal_path[] = "D:\\BaiduNetdiskDownload\\bobotv_1.1.11.apk";
////	char split_dir[] = "D:\\BaiduNetdiskDownload\\bobotv_s";
////	fileSplit(normal_path,split_dir,1024000);
////	getchar();
////}
//
//
////练习:文件加密和解密
////解密
//void decrypt(char crypt_path[], char decrypt_path[], char password[]) {
//	//打开文件
//	FILE *crypt_fp = fopen(crypt_path, "rb");
//	FILE *decrypt_fp = fopen(decrypt_path, "wb");
//
//	//一次读取一个字符
//	int ch;
//	int i = 0;
//	int pwd_len = strlen(password);
//	while ((ch = fgetc(crypt_fp)) != EOF) {
//		fputc(ch ^ password[i % pwd_len], decrypt_fp);
//		if (i == pwd_len)
//		{
//			i = 0;
//		}
//		else {
//			i++;
//		}
//	}
//
//	fclose(crypt_fp);
//	fclose(decrypt_fp);
//}
////加密函数
////异或 : 1^1 = 0 ; 0^0 = 0; 1^0 = 0
//void encrypt(char normal_path[], char crypt_path[], char password[]) {
//	//打开文件
//	FILE *normal_fp = fopen(normal_path, "rb");
//	FILE *crypt_fp = fopen(crypt_path, "wb");
//
//	//一次读取一个字符
//	int ch;
//	int i = 0;
//	int pwd_len = strlen(password);
//	while ((ch = fgetc(normal_fp)) != EOF) {
//		fputc(ch ^ password[i % pwd_len], crypt_fp);
//		if (i == pwd_len)
//		{
//			i = 0;
//		}
//		else {
//			i++;
//		}
//	}
//
//	fclose(normal_fp);
//	fclose(crypt_fp);
//}
//void main() {
//	char normal_path[] = "D:\\BaiduNetdiskDownload\\timg.jpg";
//	char crypt_path[] = "D:\\BaiduNetdiskDownload\\timg_crypt.jpg";
//	char decrypt_path[] = "D:\\BaiduNetdiskDownload\\timg_decrypt.jpg";
//	//encrypt(normal_path, crypt_path, "ceshimima");
//	decrypt(crypt_path, decrypt_path, "ceshimima");
//
//	getchar();
//}

//获取文件的大小 
//void main() {
//	
//	char path[] = "D:\\BaiduNetdiskDownload\\timg.jpg";
//	FILE *fp = fopen(path, "r");
//	//该函数可以直接操作文件指针, 操作指针到文件的任何位置,可以用来做断点续传和下载.
//	//0代表偏移量, SEEK_END 定位的位置根据偏移量
//	fseek(fp, 0 ,SEEK_END); 
//	//返回当前文件指针,相当于文件开头的偏移量.
//	long filesize = ftell(fp);
//	printf("%ld\n", filesize);
//
//	getchar();
//}




//文件复制
//二进制文件,计算机的文件存储在物理上都是二进制,文本和二进制之分,其实是一种逻辑之分.
//c读写文本文件与二进制文件的差别仅仅体现在回车换行,写文本时,每遇到一个'\n',会将其转成'\r\n'(回车换行)
//读文本时,每遇到一个'\r\n',都会将其转为'\n'
//void main() {
//	char path[] = "D:\\BaiduNetdiskDownload\\timg.jpg";
//	//读的文件 b字符表示操二进制文件binary
//	FILE *read_fp = fopen(path, "rb");
//	char write_path[] = "D:\\BaiduNetdiskDownload\\timg1.jpg";
//	FILE *write_fp = fopen(write_path,"wb");
//	
//	//复制
//	int buff[50];
//	int len = 0;
//	//fread(buff, sizeof(int), 50, fp) buff,缓冲区的类型的大小,一次读多少,read_fp
//	while ((len = fread(buff,sizeof(int),50, read_fp)) != 0)
//	{	
//		fwrite(buff,sizeof(int),len,write_fp);
//
//	}
//	//关闭流
//	fclose(read_fp);
//	getchar();
//}

//写入文本文件
//void main() {
//	char path[] = "D:\\BaiduNetdiskDownload\\test.txt";
//	//打开
//	FILE *fp = fopen(path, "w");
//	char *text = "测试;\n啦啦啦啦啦";
//	fputs(text, fp);
//	//关闭流
//	fclose(fp);
//	getchar();
//}

//读取文本文件

//void main()
//{
//	char path[] = "D:\\BaiduNetdiskDownload\\test.txt";
//	//打开
//	FILE *fp = fopen(path,"r");
//	if (fp == NULL) {
//		printf("文件打开失败...");
//		return;
//	}
//	//读取
//	char buff[50];
//	while (fgets(buff,50,fp)) {
//		printf("%s", buff);
//	}
//	//关闭
//	fclose(fp);
//	getchar();
//}

