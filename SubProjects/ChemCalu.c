//Copyrights by FibreCase, 2023
//Licences of GNU General Public License v3.0

#include <stdio.h>

void init(float * ele, float * ratio, float * weight);
void calu(float * ele, float * ratio, float * weight);

int main() {
	float ele[4] = {0};
	float ratio[4] = {0};
	float weight[4] = {0};
	char c;
	printf("************************\n");
	printf("FibreCase的化学方程计算器\n");
	printf("https://gitee.com/fibrecase/fibrecase_c_learning/blob/master/SubProjects/ChemCalu.c\n");
	printf("************************\n");
	printf("使用说明：\n任意位置输入q以退出\n输入c以重置\n输入数字即可执行\n");
	printf("************************\n");

	while (1) {



		init(ele,ratio,weight);
		calu(ele,ratio,weight);

		printf("\n*********Result*********\n");

		//output
		for (int i = 0; i < 4; ++i) {
			printf("第%d个物质的质量是:",i+1);
			printf("%.6f\n\n", *(weight + i));
		}
		printf("************************\n");
		printf("任意位置输入q以退出、输入c以重置\n输入数字即可执行计算\n");
		printf("************************\n");

		//end code
		scanf("%c",&c);
		if (c == 'q') {
			break;
		}
		else if (c == 'c'){
			continue;
		}
	}

	return 0;
}

void init(float * ele, float * ratio, float * weight) {
	//init the ele Ar
	for (int i = 0; i < 4; ++i) {
		printf("输入第%d个物质相对质量:",i+1);
		scanf("%f", (ele+i));
	}
	printf("************************\n");
	//init the ratio of every element
	for (int i = 0; i < 3; ++i) {
		printf("输入第%d个物质的比例系数:",i+1);
		scanf("%f", (ratio+i));
	}
	for (int i = 0; i < 3; ++i) {
		*(ratio + 3) += *(ratio + i);
	}
	*(ratio + 3) = *(ratio + 3) * 1.1;
	printf("************************\n");
	printf("输入第1个物质的初始质量:");
	scanf("%f", weight);
}

void calu(float * ele, float * ratio, float * weight) {
	float mol[4] = {0};
	float k = 0;

	//init the first mol
	mol[0] = weight[0] / ele[0];
	k = mol[0] / ratio[0];

	//compute all the ele
	for (int i = 1; i < 4; ++i) {
		*(mol + i) = k * *(ratio + i);
	}

	//compute all the weight
	for (int i = 1; i < 4; ++i) {
		*(weight + i) = *(mol + i) * *(ele + i);
	}
}
