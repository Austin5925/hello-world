//����
//����������һ��������(32λint���Դ����)�����ж����Ƿ�Ϊ��������
//��ʾ��������������1234321��123321��������˳���������ͬ��������Ϊ��������
//����
//ÿ�������������1��������������ʽΪ
//  ��1�У�������n 
//  ��2�У�������x1
//  ��3�У�������x2
//  ... ... ...
// ��n+1�У�������xn
//���
//��n�ǻ����������Yes���������No��
//����1
//����             ���
//3
//1231             No
//12321            Yes
//12345            No

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n,test1,temp = 0,temp1;
	int x[200],len[200] = {0},shit[200][200];
	bool z = 0;
	scanf("%d",&n);
	//����n+1��������
	for( int i = 0; i<n ; i++){
		scanf("%d",&x[i]);
		len[i] = 0;
		temp = x[i];
		do{	
			temp1 = temp;			//��ȡÿһ�����ݵĳ��� 
			temp /= 10;			
			shit[i][len[i]] = temp1 - temp*10;
			len[i]++;
		}while ( temp != 0);
	}
	//�㷨�ж��Ƿ�Ϊ������
	for( int i = 0; i<n ; i++){
		test1 = 0;
		if( len[i] % 2 == 0){
			for(int j = 0; j< len[i]/2 ; j++ ){
				if( shit[i][j] == shit[i][len[i] - 1 - j]){
					test1++;
					continue;				//����ż����� 
				}
			}
			if(test1 == len[i]/2)
			printf("Yes\n");
			else
			printf("No\n");
		}else{
			for(int j = 0; j< len[i]/2 ; j++ ){
				if( shit[i][j] == shit[i][len[i] - 1 - j]){
					test1++;	
					continue;			//����������� 
				}
			}
			if(test1 ==  len[i]/2 )
			printf("Yes\n");
			else
			printf("No\n");
		}		
	}
} 

