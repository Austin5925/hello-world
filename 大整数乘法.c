//计算两个大整数的积。
//输入
//第1行是一个整数n，表示随后有n组数据。每组数据占一行，包含两个整数a，b，用空格隔开。
//0 <= a,b <= 10^500(10的500次方)
//输出
//对每组数据输出两个整数的积，并换行。
//样例
//输入
//输出
//3
//
//1 2
//
//5 8
//
//2 9999
//
//
//2
//
//40
//
//19998

#include<stdio.h>
#include<math.h> 
#include<stdlib.h> 
int main(){
	int n,i,a=0,j=0,b = -1;
	scanf("%d",&n);
	int product[n-1];
	for(i=0;i<n;i++){
		scanf("%d",&a);			
       	if ( getchar() == '\n' ) {
       		product[i] = -1;
       		continue;
		   }
       	scanf("%d",&b);	
		if ( a >= 0 && a <= pow(10,500) && b >= 0 && b <= pow(10,500)){
		product[i] = a*b;
		}
	}	
	for(j=0;j<n;j++){
		if(product[j] == -1) 
		printf("\n");
		else
		printf("%d\n",product[j]);
	}
	return 0;
}

 


