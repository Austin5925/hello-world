//����
//����n��ѧ�������������֤�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ�������������֤�š�ע�⣺ѧ�������п���ȱ����û�гɼ�����ʾΪn/a.
//����
//ÿ�������������1��������������ʽΪ
//  ��1�У�������n (1<=n<=100)
//
//  ��2�У���1��ѧ�������� ѧ�� �ɼ�
//
//  ��3�У���2��ѧ�������� ѧ�� �ɼ�
//
//  ... ... ...
//
//  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
//��������Ϊ������10���ַ����ַ��������֤�Ǳ�׼18λ���ɼ�Ϊ0��100֮���һ��������
//������������һλѧ���гɼ���
//
//���
//
//��ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ�������֮����1���ո�����ɼ���ߵ�ѧ���ж������������ֵ�����С���Ǹ�������ɼ���͵��ж������������ֵ��������Ǹ���
//
// ����
// ����
//
//3
//
//Joe   510502199001011234 89
//
//Mike   51050220000101123x 100
//
//Mary   510502199901011234 n/a
//
//���
//Mike 51050220000101123x
//
//Joe 510502199001011234

#include<stdio.h>
int main (void){
restart:	int i,n,j;
	int max,min,temp=0,tempmax,tempmin;
	scanf("%d",&n);
	int a[n],stu[n];
	if (n>=1 && n <= 100){	
		struct stuinfo{
			char name;
			char id[17];
			char score;
			int realscore;
		};
		for(i=0;i<n;i++){
restart1:	struct stuinfo stu[i];
			scanf("%s",&stu[i].name);
			for(j=0;j<18;j++){
				scanf("%1s",&stu[i].id[j]);
			}
			scanf("%s",&stu[i].score);
			
			if (sizeof(stu[i])>80){
			printf ("�������Ȳ��Ϸ������ٴ�����\n");
			goto restart1;
			}
			else if( stu[i].score != *"n/a"){
				stu[i].realscore = stu[i].score - 48;
				if(stu[i].realscore >= 0 && stu[i].realscore <= 100)
				continue;
				else {
					printf ("�������Ϸ������ٴ�����\n");
					goto restart1;
				}
			}
			else if( stu[i].score == *"n/a")
				stu[i].score = '\0';
			
			if(i>=1){
				max = stu[i-1].score;
				min = stu[i-1].score;
				if(stu[i].score > stu[i-1].score){
					max = stu[i].score;	
					tempmax = i;			
				}
				else if(stu[i].score = stu[i-1].score){
					temp++;			
				}
				else if(stu[i].score < stu[i-1].score){
					min = stu[i].score;		
					tempmin = i;	
				}
			}	
		printf("%s %s",stu[tempmax].name,stu[tempmax].id);
		printf("\n");
		printf("%s %s",stu[tempmin].name,stu[tempmin].id);	
		}
		
}
else
printf ("n���Ϸ������ٴ�����\n");
goto restart;
return 0;	
}
 
