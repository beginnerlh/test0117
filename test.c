//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int singleNumber(int* nums, int numsSize) {
	int b = 0;
	for (int i = 0; i<numsSize; i++)
	{
		b = b^nums[i];//0����κ���λ�κ�����ֻ��һ�����ǳ���һ�Σ������������εĶ������ˡ�
	}
	return b;
}
int main()
{

	int nums[] = { 1, 2, 1, 4, 5, 2, 6, 4, 6 };
	int len = sizeof(nums) / sizeof(int);
	int a = singleNumber(nums, len);
	printf("%d\n", a);
	system("pause");
	return 0;
}
