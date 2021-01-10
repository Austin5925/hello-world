//描述
//程序中输入一个正整数(32位int可以存放下)，请判断他是否为回文数。
//提示：回文数：类似1234321，123321等这样，顺序和逆序相同的整数称为回文数。
//输入
//每个测试输入包含1个测试用例，格式为
//  第1行：正整数n 
//  第2行：正整数x1
//  第3行：正整数x2
//  ... ... ...
// 第n+1行：正整数xn
//输出
//若n是回文数，输出Yes，否则输出No。
//样例1
//输入             输出
//3
//1231             No
//12321            Yes
//12345            No

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n,test1,temp = 0,temp1;
	int x[200],len[200] = {0},shit[200][200];
	bool z = 0;
	scanf("%d",&n);
	//输入n+1行正整数
	for( int i = 0; i<n ; i++){
		scanf("%d",&x[i]);
		len[i] = 0;
		temp = x[i];
		do{	
			temp1 = temp;			//获取每一个数据的长度 
			temp /= 10;			
			shit[i][len[i]] = temp1 - temp*10;
			len[i]++;
		}while ( temp != 0);
	}
	//算法判断是否为回文数
	for( int i = 0; i<n ; i++){
		test1 = 0;
		if( len[i] % 2 == 0){
			for(int j = 0; j< len[i]/2 ; j++ ){
				if( shit[i][j] == shit[i][len[i] - 1 - j]){
					test1++;
					continue;				//长度偶数情况 
				}
			}
			if(test1 == len[i]/2)
			printf("Yes\n");
			else
			printf("No\n");
		}else{
			for(int j = 0; j< len[i]/2 ; j++ ){
				if( shit[i][j] == shit[i][len[i] - 1 - j]){
					test1++;	
					continue;			//长度奇数情况 
				}
			}
			if(test1 ==  len[i]/2 )
			printf("Yes\n");
			else
			printf("No\n");
		}		
	}
} 

