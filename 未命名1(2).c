#include<stdio.h>
#include<string.h>

int main() {
	int M, len;
	
	scanf("%d", &M);
	fflush(stdin);//����M 
	
	char ch[201] = " ";
	char cg[201] = " ";
	
	fgets(ch, 202, stdin);
	len = strlen(ch) - 1;
	if(len == 0){
		puts(ch);//����������� 
	}
	else{
		
		M = M % len;
		
		if(M == 0){
			for(int i = 0; i < len; i++){
				cg[i] = ch[i];//����������� 
			}
		}
		
		else{
			for (int i = 0; i < M; i++) {
				cg[i] = ch[len + i - M];//�Ѹ����Ƶĸ�������cg 
			}
			
			for (int i = M, j = 0; j < len - M; i++,j++) {
				cg[i] = ch[j];//��û�����Ƶĸ�������cg 
		}
		}
	
		puts(cg);//��� 
			
	}

	return 0;
}
