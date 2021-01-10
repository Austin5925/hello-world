#include<stdio.h>
#include<string.h>

int main() {
	int M, len;
	
	scanf("%d", &M);
	fflush(stdin);//读入M 
	
	char ch[201] = " ";
	char cg[201] = " ";
	
	fgets(ch, 202, stdin);
	len = strlen(ch) - 1;
	if(len == 0){
		puts(ch);//考虑特殊情况 
	}
	else{
		
		M = M % len;
		
		if(M == 0){
			for(int i = 0; i < len; i++){
				cg[i] = ch[i];//考虑特殊情况 
			}
		}
		
		else{
			for (int i = 0; i < M; i++) {
				cg[i] = ch[len + i - M];//把该右移的赋给数组cg 
			}
			
			for (int i = M, j = 0; j < len - M; i++,j++) {
				cg[i] = ch[j];//把没有右移的赋给数组cg 
		}
		}
	
		puts(cg);//输出 
			
	}

	return 0;
}
