#include <stdio.h>

int main(){
	int T, m, n, tmp1 = 0, tmp2 = 0, sum = 0, num[32] = {0}, f = 0, bln = 0;
	scanf("%d",&T);
	for( int k = 0; k< T ;k++){ // do k times
		scanf("%d %d",&m,&n); //read the inputs
		for( int i = m; i < n; i++){ //from m to n
			sum = 0;
			f = 0;
			tmp1 = i;
			tmp2 = tmp1;
			do{	num[f++] = tmp1%10;
			tmp1 /= 10;//get every number and store each one into an array
			}while(tmp1 != 0);
			
			for(int j = f-1; j>= 0; j--){
				sum += num[j] * num[j] * num[j];
			}
			if (sum == i){
				printf("%d ",i);
				bln = 1;
			}
		}
		if(bln == 0){
			printf("-1\n");
		}else{
			printf("\n");
		}
	}
} 
