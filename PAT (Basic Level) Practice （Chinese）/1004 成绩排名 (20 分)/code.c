#include <stdio.h>
typedef struct student
{
	char name[11];
	char ID[11];
	int score;
	struct student* next;
}stu;

int main()
{
	stu* head=(stu *)malloc(sizeof(stu));
	head->next == NULL;
	stu* p = head;
	stu* new;
	stu* max;
	stu* min;
	int n,i;
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		new = (stu*)malloc(sizeof(stu));
		new->next = NULL;
		scanf("%s %s %d",new->name, new->ID, &new->score);
		p->next = new;
		p = new;
	}
	p = head->next;
	max = p;
	min = p;
	for (; p!=NULL; p = p->next)
	{
		if (p->score >= max->score)
		{
			max = p;
		}
		if (p->score <= min->score)
		{
			min = p;
		}
	}
	printf("%s %s\n",max->name,max->ID);
	printf("%s %s", min->name, min->ID);
}



/*
**解题思路：  
我采用的是利用一个结构体链表来存储学生信息，然后再遍历查询最高分和最低分，
用指针记录最高分和最低分结点的地址，最后输出即可




*/