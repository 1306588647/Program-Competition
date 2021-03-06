#include <stdio.h>  
int main()
{
	int n;
	scanf("%d", &n);
	int num[10001] = { 0 };
	int i;
	int max = 0;
	int location;
	for (i = 0; i < n; i++)
	{
		int team;
		scanf("%d", &team);
		int score;
		scanf("%*c%*d %d", &score);
		num[team] += score;
		if (num[team] > max)
		{
			max = num[team];
			location = team;
		}
	}
	printf("%d %d", location, max);
}


//解题思路：
//（1）最主要的一个思想就是建立一个数组，数组下标就是团队的编号，数组中的值存储下标团队的分数，然后依次录入团队分数，再依次比较大小即可；
//（2）该题利用了%* c和%* d的语法，意思是输入但是不赋值给任何变量；