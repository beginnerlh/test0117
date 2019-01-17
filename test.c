//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int singleNumber(int* nums, int numsSize) {
	int b = 0;
	for (int i = 0; i<numsSize; i++)
	{
		b = b^nums[i];//0异或任何数位任何数，只有一个数是出现一次，其他出现两次的都消掉了。
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
