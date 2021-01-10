//#include<stdio.h> 
//
//
//int main(void){
//	int n, cnt=1, a[200];
//	scanf("%d",&n);
//	for(int i = 0; i<n;i++){
//		scanf("%d",&a[i]);
		
#include <stdio.h>
#include <string.h>
int main()
{
	int I,N;
	scanf("%d",&N);

	for(I=0;I<N;I++)
	{
		int i,j,n,m,len=1;
		char x[5]={0};
		gets(x);
		printf("%s:\n",x);
		for(len=1;len<=7;len++){
		if(len==1) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*****  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("*****  ");break;
				case '3': printf("*****  ");break;
				case '4': printf("*   *  ");break;
				case '5': printf("*****  ");break;
				case '6': printf("*****  ");break;
				case '7': printf("*****  ");break;
				case '8': printf("*****  ");break;
				case '9': printf("*****  ");break;
			    }
		    }
		    printf("\n");
		}
		if(len==2) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*   *  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("    *  ");break;
				case '3': printf("    *  ");break;
				case '4': printf("*   *  ");break;
				case '5': printf("*      ");break;
				case '6': printf("*      ");break;
				case '7': printf("    *  ");break;
				case '8': printf("*   *  ");break;
				case '9': printf("*   *  ");break;
			    }
		    }
		    printf("\n");
		}
		if(len==3) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*   *  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("    *  ");break;
				case '3': printf("    *  ");break;
				case '4': printf("*   *  ");break;
				case '5': printf("*      ");break;
				case '6': printf("*      ");break;
				case '7': printf("    *  ");break;
				case '8': printf("*   *  ");break;
				case '9': printf("*   *  ");break;
			    }
		    }
		    printf("\n");
		}
		if(len==4) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*   *  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("*****  ");break;
				case '3': printf("*****  ");break;
				case '4': printf("*****  ");break;
				case '5': printf("*****  ");break;
				case '6': printf("*****  ");break;
				case '7': printf("    *  ");break;
				case '8': printf("*****  ");break;
				case '9': printf("*****  ");break;
			    }
		    }
		    printf("\n");
		}
		if(len==5) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*   *  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("*      ");break;
				case '3': printf("    *  ");break;
				case '4': printf("    *  ");break;
				case '5': printf("    *  ");break;
				case '6': printf("*   *  ");break;
				case '7': printf("    *  ");break;
				case '8': printf("*   *  ");break;
				case '9': printf("    *  ");break;
			    }
		    }
		    printf("\n");
		}
		if(len==6) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*   *  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("*      ");break;
				case '3': printf("    *  ");break;
				case '4': printf("    *  ");break;
				case '5': printf("    *  ");break;
				case '6': printf("*   *  ");break;
				case '7': printf("    *  ");break;
				case '8': printf("*   *  ");break;
				case '9': printf("    *  ");break;
			    }
		    }
		    printf("\n");
		}
		if(len==7) {
			for(i=0;x[i]!='\0';i++){
			switch(x[i]){
				case '0': printf("*****  ");break;
				case '1': printf("    *  ");break;
				case '2': printf("*****  ");break;
				case '3': printf("*****  ");break;
				case '4': printf("    *  ");break;
				case '5': printf("*****  ");break;
				case '6': printf("*****  ");break;
				case '7': printf("    *  ");break;
				case '8': printf("*****  ");break;
				case '9': printf("*****  ");break;
			    }
		    }
		}
		}
		printf("\n");
	}
	return 0;
}

