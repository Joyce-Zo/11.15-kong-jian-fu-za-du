#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//int missingNumber(int* nums, int numsSize)
//{
//    int x = 0;
//    int i = 0;
//    //����[0,...,n]���
//    for (i = 0; i <= numsSize; i++)
//    {
//        x ^= i;
//    }
//    //����������������ֵ���
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    return x;
//}

//����һ�����飬�������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
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
	// ��ǰ n-k ��������
	reverse(nums,0,numsSize-k-1);
	// �Ժ�  k  ��������
	reverse(nums,numsSize-k,numsSize-1);
	// ����������
	reverse(nums,0,numsSize-1);
}