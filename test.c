#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//�����ṹ�����
//struct stu
//{
//	char name[20];
//	char num[12];
//	int high;
//};
//int main()
//{
//	struct stu s1 = { "����","12345678910",175 };
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.num);
//	printf("%d\n", s1.high);
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	char num[12];
//	int high;
//}stu;
//int main()
//{
//	stu s1 = { "����","12345678910",175 };//����typedef,��struct������
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.num);
//	printf("%d\n", s1.high);
//	return 0;
//}
//typedef struct father
//{
//	char name[20];
//	char num[12];
//	int high;
//}fa;
//typedef struct stu
//{
//	char name[20];
//	char num[12];
//	int high;
//	fa f;
//}stu;
//int main()
//{
//	stu s1 = { "����","12345678910",175,{"����","666666",180} };
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.f.num);//666666
//	printf("%d\n", s1.f.high);//180  ����Ƕ��
//	return 0;
//}
//typedef struct father
//{
//	char name[20];
//	char num[12];
//	int high;
//}fa;
//typedef struct stu
//{
//	char name[20];
//	char num[12];
//	int high;
//	fa f;
//}stu;
//void print(stu s1)//stu ���Ժ�int��һ��ʹ��
//{
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.f.num);//666666
//	printf("%d\n", s1.f.high);//180  Ҳ��������
//}
//void print1(stu* s1)//�Ƽ�ʹ�ã�ʡ�ռ䣬��ѹջ
//{
//	printf("%s\n", s1->name);
//	printf("%s\n", s1->f.num);//666666
//	printf("%d\n", s1->f.high);//180  Ҳ��������
//}
//int main()
//{
//	stu s1 = { "����","12345678910",175,{ "����","666666",180 } };
//	print(s1);
//	print1(&s1);
//	return 0;
//}��������������������������������������������
//��ϰ����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}������������������������������������------
//��ϰ����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,1,1,1,1,1,1,1,1,1 };
//	for (i = 0; i <= 12; i++)//�����������⣬���Ե��Է���arr[12]��i�ĵ�ַ��ͬ������arr[12]��Ϊ0ʱ��iҲ��Ϊ��0��
//	{
//		arr[i] = 0;
//		printf("haha\n");
//	}
//	return 0;
//}
//strcpy-string copy-�ַ�������
//ģ��ʵ��stycpy
//��һ��
//void mystrcpy(char* arr1,char* arr2)
//{
//	int count = 0;
//	while (*arr1 != '\0')
//	{
//		*arr2 = *arr1;
//		arr1++;
//		arr2++;
//	}
//	*arr2 = *arr1;//��\0������ȥ������hallo����#####
//}
//int main()
//{
//	char arr1[] = "hallo";
//	char arr2[] = "##############";
//	mystrcpy(arr1,arr2);
//	printf("%s\n",arr2);
//	return 0;
//}
//�ڶ���
//void mystrcpy(char* arr1, char* arr2)
//{
//	while (*arr2++ = *arr1++)//��\0������while����������Ϊ0����������ѭ��
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hallo";
//	char arr2[] = "##############";
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}
//������
//assert:���ԣ�ȷ��
//#include<assert.h>
//void mystrcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != 0);//�������㣬ֱ��������������������������
//	assert(arr2 != 0);//Ϊ�˷�ֹ���δ���
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hallo";
//	char arr2[] = "##############";
//	mystrcpy(arr1,arr2);
//	printf("%s\n", arr2);
//	return 0;
//}
//���İ�
//const:�̶��ģ������
//#include<assert.h>
//void mystrcpy(const char* arr1, char* arr2)//const Ϊ�˷�ֹarr1��arr2λ��д��������const��arr1���ɸĶ�
//{
//	assert(arr1 != 0);
//	assert(arr2 != 0);
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hallo";
//	char arr2[] = "##############";
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}
//ģ��ʵ��strlen����
//#include<assert.h>
//int mystrlen(const char* arr)
//{
//	int count = 0;
//	assert(arr !=0);
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = mystrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}������������������������������������������������
#include<string.h>
int main()
{
	char arr[1000] ;
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
	}
	int ret = strlen(arr);
	printf("%d\n", ret);
	return 0;
}

