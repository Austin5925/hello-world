/*有n个小伙伴坐在一起摆龙门阵。某无聊的路人甲路过，莫名其妙就跑去问第n号小伙伴多大年纪，他说比第n-1号小伙伴大k岁。
路人甲又跑去问第n-1号小伙伴多大年纪，他说比第n-2号小伙伴大k岁。路人甲又跑去问第n-2号小伙伴多大年纪，他说比第n-3号小伙伴大k岁。
路人甲又跑去问第n-3号小伙伴多大年纪，他说比第n-4号小伙伴大k岁。然后无聊的路人甲就这样挨个问下去。最后，除了第1号小伙伴，
所有人都说自己比编号小1的小伙伴大k岁，而第1号小伙伴说自己a岁。现在，请你使用函数递归（不是简单的循环）的方法，帮助无聊的路人甲计算并输出第n号小伙伴的年龄。

输入三个正整数n、a和k（0<n,a,k<=100,n>=2），分别代表摆龙门阵的小伙伴的人数、第一号小伙伴的年龄和相邻编号小伙伴的年龄差。
若输入数据不合题意，输出Wrong Number ,否则输出第n号小伙伴的年龄。*/

#include<stdio.h>

int func(int , int , int);
int main(void){
	int a,n,k;
	printf("请分别输入龙门阵的小伙伴的人数，第一号小伙伴的年龄，年龄差："); 
	scanf("%d%d%d",&n,&a,&k);
	
	if( n > 0 && n < 100 && a > 0 && a < 100 && k > 0 && k < 100 && n >=2)
	printf("%d",func(a,n,k));
	else
	printf("Wrong Number"); 
	
	return 0 ;
}

int func(int initial_age, int num , int dif){
	int temp1 = initial_age;
	if( num >= 2){
		num--;
		temp1 += dif;
		func(temp1,num,dif);
	}
	else
	return temp1;
}
