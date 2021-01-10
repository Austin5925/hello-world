#include<stdio.h>
#include<stdlib.h>
int isprime(int i){
	int ret=1;
	int j ;
	for(j=2; j<i; j++){
		if(i%j == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}

void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main(void){
	int n, cnt=1, a;
	scanf("%d",&n);
	for(int i = 0; i<n;i++){
		scanf("%d",&a);
		if(isprime(a)){
		printf("%d\n",a);
		}
		else{
		while(a != 1){
			int b[99]={0};
			for(int j=2 ; j<=a ; j++){
			if(isprime(j) && a%j == 0){
				if(j != a ){
					b[cnt-1] = j;
					cnt++;
				}else
					b[cnt-1] = j;
					a/=j;
				}
			}
		}
		bubble_sort(b, cnt);
		for(int k=0;k<cnt;k++){
			printf("%d",b[k]);
			if(k<cnt-1)
			printf("*");
			else 
			printf("\n");
		}
	}
	}
	return 0;
} 
