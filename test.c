#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//构建结构体变量
//struct stu
//{
//	char name[20];
//	char num[12];
//	int high;
//};
//int main()
//{
//	struct stu s1 = { "张三","12345678910",175 };
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
//	stu s1 = { "张三","12345678910",175 };//若无typedef,则struct不可少
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
//	stu s1 = { "张三","12345678910",175,{"张四","666666",180} };
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.f.num);//666666
//	printf("%d\n", s1.f.high);//180  可以嵌套
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
//void print(stu s1)//stu 可以和int等一样使用
//{
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.f.num);//666666
//	printf("%d\n", s1.f.high);//180  也可以这样
//}
//void print1(stu* s1)//推荐使用，省空间，不压栈
//{
//	printf("%s\n", s1->name);
//	printf("%s\n", s1->f.num);//666666
//	printf("%d\n", s1->f.high);//180  也可以这样
//}
//int main()
//{
//	stu s1 = { "张三","12345678910",175,{ "张四","666666",180 } };
//	print(s1);
//	print1(&s1);
//	return 0;
//}——————————————————————
//练习调试
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}——————————————————------
//练习调试
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,1,1,1,1,1,1,1,1,1 };
//	for (i = 0; i <= 12; i++)//这样就有问题，可以调试发现arr[12]和i的地址相同，所以arr[12]改为0时，i也变为了0；
//	{
//		arr[i] = 0;
//		printf("haha\n");
//	}
//	return 0;
//}
//strcpy-string copy-字符串拷贝
//模拟实现stycpy
//第一版
//void mystrcpy(char* arr1,char* arr2)
//{
//	int count = 0;
//	while (*arr1 != '\0')
//	{
//		*arr2 = *arr1;
//		arr1++;
//		arr2++;
//	}
//	*arr2 = *arr1;//把\0拷贝过去，否则hallo后有#####
//}
//int main()
//{
//	char arr1[] = "hallo";
//	char arr2[] = "##############";
//	mystrcpy(arr1,arr2);
//	printf("%s\n",arr2);
//	return 0;
//}
//第二版
//void mystrcpy(char* arr1, char* arr2)
//{
//	while (*arr2++ = *arr1++)//到\0处，这while括号内条件为0，即可跳出循环
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
//第三版
//assert:断言，确信
//#include<assert.h>
//void mystrcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != 0);//条件满足，直接跳过，条件不符，报出错误
//	assert(arr2 != 0);//为了防止传参错误
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
//第四版
//const:固定的，不变的
//#include<assert.h>
//void mystrcpy(const char* arr1, char* arr2)//const 为了防止arr1和arr2位置写反，加了const则arr1不可改动
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
//模拟实现strlen函数
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
//}————————————————————————
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

