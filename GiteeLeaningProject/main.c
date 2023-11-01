﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//代码因设备原因未经调试，可能有bug


//利用倒计时的想法，为每一头新牛赋予倒计时3，每轮-1，当倒计时到0时即认为
//该牛具有繁殖能力，则每轮在数组末尾添加一个3（新牛）
int main()
{
	int cow[999] = {0};//由于一头牛的状态只有0-3，9可用于检测数组有意义部分末尾

	//由于C99不支持将数组初始化为一个非零值，则手动赋值
	for (int i = 0; i < 999; i++)
	{
		cow[i] = 9;
	}

	int n = 10, y = 0, a = 0;//n为轮数（年数）

	cow[0] = 3;

	//用于表示轮数
	for (int i = 0; y < n; y++)
	{
		//遍历整个数组
		while (cow[i] != 9)
		{
			//为0的牛
			if (cow[i] == 0)
			{
				//寻找数组有意义末尾
				while (cow[a] != 9)
				{
					a++;
				}
				//生成新牛
				cow[a] = 3;
				a = 0;
				i++;
			}
			//不为0的牛
			else
			{
				cow[i] = cow[i] - 1;
				i++;
			}
		}
		//i归零，下一轮（年）
		i = 0;
	}

	//寻找数组末尾并输出，即为牛的数量
	a = 0;
	while (cow[a] != 9)
	{
		a++;
	}
	printf("%d", a);

	return 0;
}