#include <stdio.h>

int main(){
	int n, m = 0;
	scanf("%d", &n);
	int arr[30] = {};
//	getchar();
	for(int i = 0; i < n; i++){
		int count = 1;
		int a;
		scanf("%d", &a);
		for(int j = 0; j < m; j++){
			if(a == arr[j]){
				count = 0;
				break;
			}
		}
		if(count){
			arr[m] = a;
			m++;
		}
	}

	printf("%d", m);

	return 0;
}
