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
////ʵ���ļ��ķָ��ͺϲ�
//void fileSplit(char file_path[], char split_dir[], long split_size) {
//	FILE *file = fopen(file_path, "rb");
//	fseek(file, 0, SEEK_END);
//	long filesize = ftell(file);
//	fseek(file, 0, SEEK_SET);
//	if (filesize < split_size)
//	{	//�ļ�С�ڲ�ִ�С,ֱ�ӷ���ԭ�ļ���ַ
//		return file_path;
//	}
//	int mulriple = 0;
//	if ((split_size % 1024) != 0)
//	{
//		//�׳��쳣 
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
//	printf("��ӡsplit_test.txt��ַ%s", split_files);
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
//			sprintf(file_name,"\\split_���Էָ�%d.tmp", index_1++);
//			strcat(split_file, file_name);
//			printf("��ӡƴ����ɵ��ļ���ַ%s", split_file);
//			writefp = fopen(split_file, "wb");
//			fputs(split_file, split_file_txt); // д���ļ���
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
////��ϰ:�ļ����ܺͽ���
////����
//void decrypt(char crypt_path[], char decrypt_path[], char password[]) {
//	//���ļ�
//	FILE *crypt_fp = fopen(crypt_path, "rb");
//	FILE *decrypt_fp = fopen(decrypt_path, "wb");
//
//	//һ�ζ�ȡһ���ַ�
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
////���ܺ���
////��� : 1^1 = 0 ; 0^0 = 0; 1^0 = 0
//void encrypt(char normal_path[], char crypt_path[], char password[]) {
//	//���ļ�
//	FILE *normal_fp = fopen(normal_path, "rb");
//	FILE *crypt_fp = fopen(crypt_path, "wb");
//
//	//һ�ζ�ȡһ���ַ�
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

//��ȡ�ļ��Ĵ�С 
//void main() {
//	
//	char path[] = "D:\\BaiduNetdiskDownload\\timg.jpg";
//	FILE *fp = fopen(path, "r");
//	//�ú�������ֱ�Ӳ����ļ�ָ��, ����ָ�뵽�ļ����κ�λ��,�����������ϵ�����������.
//	//0����ƫ����, SEEK_END ��λ��λ�ø���ƫ����
//	fseek(fp, 0 ,SEEK_END); 
//	//���ص�ǰ�ļ�ָ��,�൱���ļ���ͷ��ƫ����.
//	long filesize = ftell(fp);
//	printf("%ld\n", filesize);
//
//	getchar();
//}




//�ļ�����
//�������ļ�,��������ļ��洢�������϶��Ƕ�����,�ı��Ͷ�����֮��,��ʵ��һ���߼�֮��.
//c��д�ı��ļ���������ļ��Ĳ����������ڻس�����,д�ı�ʱ,ÿ����һ��'\n',�Ὣ��ת��'\r\n'(�س�����)
//���ı�ʱ,ÿ����һ��'\r\n',���Ὣ��תΪ'\n'
//void main() {
//	char path[] = "D:\\BaiduNetdiskDownload\\timg.jpg";
//	//�����ļ� b�ַ���ʾ�ٶ������ļ�binary
//	FILE *read_fp = fopen(path, "rb");
//	char write_path[] = "D:\\BaiduNetdiskDownload\\timg1.jpg";
//	FILE *write_fp = fopen(write_path,"wb");
//	
//	//����
//	int buff[50];
//	int len = 0;
//	//fread(buff, sizeof(int), 50, fp) buff,�����������͵Ĵ�С,һ�ζ�����,read_fp
//	while ((len = fread(buff,sizeof(int),50, read_fp)) != 0)
//	{	
//		fwrite(buff,sizeof(int),len,write_fp);
//
//	}
//	//�ر���
//	fclose(read_fp);
//	getchar();
//}

//д���ı��ļ�
//void main() {
//	char path[] = "D:\\BaiduNetdiskDownload\\test.txt";
//	//��
//	FILE *fp = fopen(path, "w");
//	char *text = "����;\n����������";
//	fputs(text, fp);
//	//�ر���
//	fclose(fp);
//	getchar();
//}

//��ȡ�ı��ļ�

//void main()
//{
//	char path[] = "D:\\BaiduNetdiskDownload\\test.txt";
//	//��
//	FILE *fp = fopen(path,"r");
//	if (fp == NULL) {
//		printf("�ļ���ʧ��...");
//		return;
//	}
//	//��ȡ
//	char buff[50];
//	while (fgets(buff,50,fp)) {
//		printf("%s", buff);
//	}
//	//�ر�
//	fclose(fp);
//	getchar();
//}

