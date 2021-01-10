//A: 判断直角三角形
//描述
//输入三角形的3条边长， 判断三角形是否是直角三角形。
//输入
//第1行是一个整数n，表示随后有n组数据。每组数据占一行，包含3个整数代表3条边长(每个整数的平方能够用32位整数表示)，用空格分隔。
//输出
//每组输出占一行，如果是直角三角形输出Yes，不是则输出No。
//样例
//输入          
//2
//3 4 5   
//3 5 7
//输出
//Yes
//No

#include<stdio.h>
int main() {
	int n, a[200], b[200], c[200];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a[i],&b[i],&c[i]);
		if ((a[i] + b[i] > c[i]) && (b[i] + c[i] > a[i]) && (a[i] + c[i] > b[i]) &&((a[i]*a[i]==b[i]*b[i]+c[i]*c[i])||(b[i]*b[i]==a[i]*a[i]+c[i]*c[i])||(c[i]*c[i]==a[i]*a[i]+b[i]*b[i]) ) ){
			printf("Yes\n");
		}else
			printf("No\n");
	}
	return 0;
}
