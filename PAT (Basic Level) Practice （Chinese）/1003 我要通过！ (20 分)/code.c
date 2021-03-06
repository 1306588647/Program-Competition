#include <stdio.h>
int main()
{
	char str[10][100];
	int n;
	scanf("%d", &n);
	getchar();
	int i;
	for (i = 0; i < n; i++)
	{
		gets(str[i]);
	}


	for (i = 0; i < n; i++)
	{
		int cp = 0, ct = 0, ca = 0;//c，t，a的个数
		int ap = 0;//p之前的a个数
		int at = 0;//t之前的A个数
		int flag = 1;
		for (int j = 0; str[i][j] != '\0'; j++)
		{
			if (str[i][j] == 'A')
			{
				ca++;
			}
			else if (str[i][j] == 'P')
			{
				cp++;
				ap = ca;
			}
			else if (str[i][j] == 'T')
			{
				ct++;
				at = ca;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if ((ca>=1&&cp==1&&ct==1)&&(ap*(at - ap) == ca - at)&&flag)
		{
			printf("YES");
			printf("\n");
		}
		else {
			printf("NO");
			printf("\n");
		}

	}
}



/*
我的解题思路：  
 1.首先统计A、P、T的个数，然后统计P前面A的个数，T前面A的个数。由此可以计算处T后面A的个数。  
 2.该题的关键就是找出题目给定的规律：  
    （1）只能包含P、A、T三个字母，并且P和T的数量只有一个 ，A的数量可以有多个  
    （2）第二个最难发现，就是P前面A的数量×P与T中间A的数量=T之后A的数量
      
这两个规律发现后就可以做题了

*/