#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int num;
	int i;
	int A1_sum = 0;
	int A2_sum = 0, signal = 1, flag = 0;
	int A3_count = 0;
	float A4_sum = 0; int A4_count = 0;
	int A5_max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0 && num % 5 == 0)
		{
			A1_sum += num;
		}
		if (num % 5 == 1)
		{
			A2_sum += num * signal;
			signal = -signal;
			flag = 1;
		}
		if (num % 5 == 2)
		{
			A3_count++;
		}
		if (num % 5 == 3)
		{
			A4_sum += num;
			A4_count++;
		}
		if (num % 5 == 4)
		{
			if (num > A5_max)
			{
				A5_max = num;
			}
		}

	}
	if (A1_sum)printf("%d ", A1_sum);
	else printf("N ");
	if (flag)printf("%d ", A2_sum);
	else printf("N ");
	if (A3_count)printf("%d ", A3_count);
	else printf("N ");
	if (A4_count)printf("%.1f ", (float)A4_sum / A4_count);
	else printf("N ");
	if (A5_max)printf("%d\n", A5_max);
	else printf("N\n");

}




//注意：
//（1）其他判断条件都比较简单，只有第二个判断条件比较难，第一次的代码我直接把 A2_sum 是否为0当作判断条件，
//如果不为0则输入A2_sum，如果为0则输出N，但是只有19分，仔细想了想，万一A2_sum通过计算本来就是0，那么也会输出N，
//我就想到了用一个flag变量，如果存在这个数就直接让flag = 1，最后用flag来判断，就解决了问题。 