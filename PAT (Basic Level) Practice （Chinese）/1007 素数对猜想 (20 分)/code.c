#include <stdio.h>
#include <math.h>

int Isprime(int n)
{
	int k = sqrt(n);
	for (int i = 2; i <= k; i++)
	{
		if (n%i == 0)return 0;
	}
	return 1;
}

int main()
{
	int num;
	scanf("%d",&num);
	int i;
	int count = 0;
	for ( i = 2; i+2 <=num; i++)
	{
		if (Isprime(i) && Isprime(i + 2))
		{
			count++;
		}
	}
	printf("%d",count);
}



/*
解题思路：  
  （1）首先要会求素数的方法，最常用和最快的方法就是利用开根号求素数，如代码上的Isprime函数  
  （2）其次拿到题目我第一感觉就是把所有的素数存到一个数组里面，然后依次遍历求差为2的素数对，
但是这样的方法时间效率和空间效率都太大，所以摒弃。然后我想到的就是反正都是差2，
直接求一个数和比它大2的数是否为素数，那么就可以直接求出所要满足的素数对了。

*/