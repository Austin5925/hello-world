//���������������Ļ���
//����
//��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У�������������a��b���ÿո������
//0 <= a,b <= 10^500(10��500�η�)
//���
//��ÿ������������������Ļ��������С�
//����
//����
//���
//3
//
//1 2
//
//5 8
//
//2 9999
//
//
//2
//
//40
//
//19998

#include<stdio.h>
#include<math.h> 
#include<stdlib.h> 
int main(){
	int n,i,a=0,j=0,b = -1;
	scanf("%d",&n);
	int product[n-1];
	for(i=0;i<n;i++){
		scanf("%d",&a);			
       	if ( getchar() == '\n' ) {
       		product[i] = -1;
       		continue;
		   }
       	scanf("%d",&b);	
		if ( a >= 0 && a <= pow(10,500) && b >= 0 && b <= pow(10,500)){
		product[i] = a*b;
		}
	}	
	for(j=0;j<n;j++){
		if(product[j] == -1) 
		printf("\n");
		else
		printf("%d\n",product[j]);
	}
	return 0;
}

 


