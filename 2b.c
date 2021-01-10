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
}
