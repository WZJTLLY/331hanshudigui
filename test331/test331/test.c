#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//쳲��������У�ǰ�������ĺϵ��ڵ�����
// �õݹ�ķ���
//int fib(int n)
//{
//	int ret = 0;
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//�õ����ķ���
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{

	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);


	return 0;
}
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret* i;
//	}
//	return ret;
//
//}
//�õݹ�ķ�ʽ
//int fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac1(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}