#include<stdio.h>
#include<string.h>

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
	char a[200][200] = {0};
	int n,sum = 0,i = 0,j = 0,k = 0,cnt = 0,chk[200]={0};
	int* chkp = &chk[200];
	while((getchar())!=EOF){
		if(((getchar())==' ')||((getchar())=='?')||((getchar())=='.')||((getchar())=='!')){
			i++;
			cnt = 0;
		}else{
			a[i][cnt++] = getchar();
		}
	}
	
	for(;i<200;i++){
		for(;j<200;j++){
			if(a[i][j]>64&&a[i][j]<91){
				a[i][j] += 32;
			}
		}
	}
	
	for(i=0;i<200;i++){
		for(j=0;j<200;j++){
				if(strcmp(a[i],a[j]) == 0){
				chk[i]++;
			}
		}

	}
	bubble_sort(chkp,200);
	printf("%s %d",a[i],chkp[199]);
	return 0;
} 
