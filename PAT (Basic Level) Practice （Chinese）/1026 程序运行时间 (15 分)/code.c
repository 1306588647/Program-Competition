#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int time;
	time = n - m;
	time = (int)(time / 100.0 + 0.5);
	int h;
	int min;
	int sec;
	sec = time % 60;
	min = (time / 60) % 60;;
	h = time / 3600;
	if (h >= 10)printf("%d:", h);
	else printf("0%d:", h);
	if (min >= 10)printf("%d:", min);
	else printf("0%d:", min);
	if (sec >= 10)printf("%d", sec);
	else printf("0%d", sec);
}


//解题思路：
//（1）首先输入两个值，然后求差值；
//（2）这个时候题目要求除以100，但是要求四舍五入，因此需要需要让time / 100.0才能得出time除以100后的带小数的差值，然后加上0.5，在强行转换为int型就得到了最后的差值
//（3）然后算小时，分钟，和秒数既可以了，
//小时 = 差值 / 3600；
//分钟 = （差值 / 60） % 60；
//秒 = 差值 % 60；
//（4）最后输出正确的输出形式就可以了