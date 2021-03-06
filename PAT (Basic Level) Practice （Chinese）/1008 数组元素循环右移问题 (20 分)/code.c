#include<stdio.h>
int main()
{
    int num[101];
    int m, n, i, temp, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (j = 1; j <= m; j++)
    {
        temp = num[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            num[i] = num[i - 1];
        }
        num[0] = temp;
    }
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", num[i]);
        }
        else
        {
            printf("%d ", num[i]);
        }
    }
}



//解题思路：
//（1）首先将所有的数字存到数组中。
//（2）由于是向右移动，那么最后一个数字必然会被覆盖，因此，先用一个变量来存储最后一个数字，等到移动完后，再将最后那个数字的值赋值给第一个数字，就完成了。