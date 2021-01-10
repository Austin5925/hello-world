#include <stdio.h>
#include <string.h>
int main(){
	char string[200];
	int len,i=0,j=0,cnt=0;
	gets(string);
	len = strlen(string);
	for(;i<len;i++){
		if(string[i]==' '||string[i]=='.'||string[i]=='?'||string[i]=='!'){
			j = i-1;
			while((j--)-cnt){
				printf("%s",string[j-cnt]);
			}
			cnt = i;
		}
	}
	return 0;
} 
