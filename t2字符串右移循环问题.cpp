//描述
//将一个字符串循环向右移M（M>=0）个字符位置，即将字符串A中的数据由（A0 A1……AN-1）变换为（AN-M …… AN-1 A0 A1……AN-M-1）（N是字符串的长度，最后M个数循环移至最前面的M个位置）。
//输入
//每个输入包含一个测试用例，第1行输入M（M>=0）；第2行为输入字符串，长度不超过200。
//输出
//
//在一行中输出循环右移M位以后的字符串。
//
//样例1
//
//输入                                           输出
//
//2
//
//Hello World Here I Come                        meHello World Here I Co
//
//提示
//
//可以使用scanf读入整数，但不能使用scanf读入字符串，因为字符串中可能包含空格。可以使用fgets读入字符串，但要注意处理上一行末和本行末的的回车换行符。

// ver 1
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//int main(){
//	int M,i,j,k,len;
//	bool z = 1;
//	scanf("%d",&M);
//	if (M >= 0){
//		char ch[200],cg[M];
//		if (getchar() != '\n'){
//			fgets(ch, 200, stdin);
//			len = strlen(ch);
//			for(i=0;i<M;i++){
//				cg[i] = ch[len-i];
//			}
//			for(j=M;j<len;j++){
//				if (z){
//					for(k=0;k<M;k++){
//						printf("%d",cg[M-k]);
//						z = 0;
//					}
//				}
//				printf("%d",ch[j]);
//			}
//			
//		}
//	}
//	return 0;
//} 

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int M,i,j,k,len;
	bool z = 1;
	scanf("%d",&M);//读入M 
	fflush(stdin);
	if (M >= 0){
	char ch[201],cg[M];//fgets得到输入字符串并将每一个字符存入数组ch中 
		fgets(ch, 201, stdin);
		len = strlen(ch) - 1;//得到字符串有效长度 
		for(i=0;i<M;i++){
			cg[i] = ch[len-i-1];//将应当循环移动的字符存到数组cg中 
		}
		for(j=M;j<len;j++){//先输出cg，再输出ch 
			if (z){
				for(k=0;k<M;k++){ 
					printf("%s",cg[M-k-1]);
					z = 0;
				}
			}
			else printf("%s",ch[j-M]);
		}
	}
	return 0;
} 
