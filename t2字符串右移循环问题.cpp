//����
//��һ���ַ���ѭ��������M��M>=0�����ַ�λ�ã������ַ���A�е������ɣ�A0 A1����AN-1���任Ϊ��AN-M ���� AN-1 A0 A1����AN-M-1����N���ַ����ĳ��ȣ����M����ѭ��������ǰ���M��λ�ã���
//����
//ÿ���������һ��������������1������M��M>=0������2��Ϊ�����ַ��������Ȳ�����200��
//���
//
//��һ�������ѭ������Mλ�Ժ���ַ�����
//
//����1
//
//����                                           ���
//
//2
//
//Hello World Here I Come                        meHello World Here I Co
//
//��ʾ
//
//����ʹ��scanf����������������ʹ��scanf�����ַ�������Ϊ�ַ����п��ܰ����ո񡣿���ʹ��fgets�����ַ�������Ҫע�⴦����һ��ĩ�ͱ���ĩ�ĵĻس����з���

// ver 1
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//int main(){
//	int M,i,j,k,len;
//	bool z = 1;
//	scanf("%d",&M);
//	if (M >= 0){
//		char ch[200],cg[M];
//		if (getchar() != '\n'){
//			fgets(ch, 200, stdin);
//			len = strlen(ch);
//			for(i=0;i<M;i++){
//				cg[i] = ch[len-i];
//			}
//			for(j=M;j<len;j++){
//				if (z){
//					for(k=0;k<M;k++){
//						printf("%d",cg[M-k]);
//						z = 0;
//					}
//				}
//				printf("%d",ch[j]);
//			}
//			
//		}
//	}
//	return 0;
//} 

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	int M,i,j,k,len;
	bool z = 1;
	scanf("%d",&M);//����M 
	fflush(stdin);
	if (M >= 0){
	char ch[201],cg[M];//fgets�õ������ַ�������ÿһ���ַ���������ch�� 
		fgets(ch, 201, stdin);
		len = strlen(ch) - 1;//�õ��ַ�����Ч���� 
		for(i=0;i<M;i++){
			cg[i] = ch[len-i-1];//��Ӧ��ѭ���ƶ����ַ��浽����cg�� 
		}
		for(j=M;j<len;j++){//�����cg�������ch 
			if (z){
				for(k=0;k<M;k++){ 
					printf("%s",cg[M-k-1]);
					z = 0;
				}
			}
			else printf("%s",ch[j-M]);
		}
	}
	return 0;
} 
