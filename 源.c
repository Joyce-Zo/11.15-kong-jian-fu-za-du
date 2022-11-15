#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗
//int missingNumber(int* nums, int numsSize)
//{
//    int x = 0;
//    int i = 0;
//    //先与[0,...,n]异或
//    for (i = 0; i <= numsSize; i++)
//    {
//        x ^= i;
//    }
//    //再与题中数组所有值异或
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    return x;
//}

//给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int tmp = 0;
	while (left < right)
	{

		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	return 0;
}
void reverse(int*nums,int left,int right)
{
	int tmp = 0;
	while (left < right)
	{
		tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
	//return nums;
}

void rotate(int* nums, int numsSize, int k)
{
	if(k>=numsSize)
	{
		k%=numsSize;
	}
	// 对前 n-k 个数逆序
	reverse(nums,0,numsSize-k-1);
	// 对后  k  个数逆序
	reverse(nums,numsSize-k,numsSize-1);
	// 对整体逆序
	reverse(nums,0,numsSize-1);
}