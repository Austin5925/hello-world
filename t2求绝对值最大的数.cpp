//B: 求绝对值最大的数
//描述
//求一组数据中绝对值最大的数输出。
//输入
//每行输入包含一个测试用例，第一个整数m(1<=m<=20)，表示随后有m个整数(能够用32位整数表示)，各数之间用空格分隔。
//输出
//每组输出占一行，输出绝对值最大的数。
//样例
//输入
//3 0 -2 1
//输出
//-2

//#include <stdio.h>
//int main(void){
//	int m, a[200] = {0}, b[200]={0} , max = 0;
//	scanf("%d",&m);
//	for(int i = 0; i<m ; i++){
//		scanf("%d",&a[i]);
//		if(a[i] < 0){
//			b[i] = -a[i];
//		}else{
//			b[i] = a[i];
//		}
//		if(i==0){
//			max=a[i];			
//		}
//		else if(i>0){
//			if( b[i] >= b[i-1]){
//				max = a[i];
//			}
//		}
//	}
//	printf("%d",max);
//	return 0;
//}      //5/20

//#include <stdio.h>
//#include <string.h>
//int main(void){
//	int m,a[200] = {0},max = 0, i = 0, k = 0;
//	char *str[200] = {0},*b[200] = {0};
//	int *app = a;
//	while((b[i]=getchar())!='\n')
//    i++;
//    for ( int j = 0 ; j < i ;j++){
//    	if( b[j] == ' '){
//    		(int*)strcpy(*str,const* b);
//    		
//		}
//	}
//	
//}

#include <stdio.h>

int main(){
	int a, m;
	int b = 0;
	int c = -1;
	scanf("%d", &m);
	int N[20];
	
	for(int i = 0; i < m; i++){
		scanf("%d", &N[i]);
		a = N[i];
		if(a < 0){
			a = -a;
		}
		if(a >= b){
			b = a;
			c = i;
		}
	}
	
	printf("%d", N[c]);
	
	return 0;
}//20/20
