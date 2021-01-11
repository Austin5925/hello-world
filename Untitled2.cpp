#include <bits/stdc++.h>

int  main(){
	int count[10];
	char ch[10] = {'0','1','2','3','4','5','6','7','8','9'};
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &count[i]);
	}
	
	for(int i = 1; i < 10; i++){
		if(count[i]){
			printf("%c", ch[i]);
			count[i]--;
			break;
		}
	}
	
	for(int i = 0; i < 10; i++){
		while(count[i]){
			printf("%c", ch[i]);
			count[i]--;
		}
	}
	
	return 0;
}
