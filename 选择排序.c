#include <stdio.h>// 头文件 
int main() // 主函数 
{
	int data[] = {26, 54, 93, 17, 71, 31, 44, 55, 20}; // 定义一个数组 
	 int i, j, n = 9; // 定义变量 
	 int min = 0;  // 定义最小值
      
	 for(i = 0 ; i < n - 1 ; i++) // 外层循环 
	 {
	   min = i; // 外层每循环一次，将i的值赋给min 
	   for(j = i + 1 ; j < n ; j++)// 内层循环 
	   {
	     if(data[min] > data[j])
	     {
	       min = j;
	     }
	   }

	   int temp = data[min];  // 交换位置 
	   data[min] = data[i];
	   data[i] = temp;
	 }

	 printf("排序后的：");
	 for(i = 0 ; i < n ; i++) // 输出排序后的 
	 {
	 	printf("%d ",data[i]);
	 }
	return 0;
}