//E: 统计回文数
//描述
//输入一段文本，统计中间出现次数最多的回文数。回文数是类似12321，1221这样，顺序和逆序相同的十进制无符号整数，不考虑符号，长度至少为2，不能以0开始。
//另外，不考虑数的一部分，即abc1232abc中的232不是一个单独的数。(数据可能超过32位)
//输入
//输入数据为一段文本，可能包含若干行，直到文件末尾(EOF)为止。即只有一组测试用例。
//输出
//对于每一组输入数据，输出出现次数最多的回文数和它出现的次数。如果有多个，按从小到大输出，每个数占一行。如果没有， 输出None。
//样例
//输入
//Thin34543king 121 is8 interesting121.
//I like121 thinking23.
//输出
//121 3

#include <stdio.h>

int main(){
	int temp, test1, n = 0, M, len[200] = {0}, *lenn[200] = {0};
	char *str[200] ={0}, *strr[200] ={0};
	while( *str == (char*)getchar() != 'EOF'){
		for (int i=0 ; i < 200; i++){
			if (*str[i] == '\0'){
				M = i;
				break;
			}
			if ( *str[i] >= 48 && *str[i] <= 57){
				*strr[n++] = *str[i];
			}
		} 
	}
	// read the input
	
	for( int i = 0; i<n ; i++){
		test1 = 0;
			for(int j = 0; j< len[i]/2 ; j++ ){
				if( *strr[j] == *strr[len[i] - 1 - j]){
					test1++;
					continue;			
				}
			}
			if(test1 == len[i]/2)
			printf("Yes\n");
			else
			printf("No\n");
		}
	return 0;//wrong
}
