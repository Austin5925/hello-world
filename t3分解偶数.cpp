//C: �ֽ�ż��
//����
//�κδ���6��ż�������Էֽ�������������ĺ͡�����n��������н⣬��С����ǰ������ں��������Ҫ�ظ���
//����
//ÿ���������һ����������������һ������(�ܹ���32λ������ʾ)��
//���
//�Է���Ҫ����������ݣ�����������н⣬ÿ����ռһ�У��������ÿո�ָ��������벻����Ҫ������������ERROR��
//����
//����
//10
//���
//3 7
//5 5

//#include <stdio.h>
//int main(){
//    int a[200]={0},b[200]={0};  
//    int m=0,n=0,test;  
//    scanf("%d",&m);
//    test = m/2;
//    for(int k = 2; k < m*m; k++){
//    	for(int i=2;i<m*m;i++){
//    	if(i>2){
//    		if(i%2 == 0)
//    		continue;
//	    	}
//        if(m%i==0){
//            a[k]++;
//            }
//        }
//        if(a[k]==0 && (k%2 != 0)){
//        	b[n] = k;
//        	n++;
//  		}
//	}// gets primes
//    for(int i = 2;i <= n;i++){
//    	printf("%d",b[i]);
//	}
//    return 0;
//}

#include <stdio.h>
#include <math.h>
int isPrime(int m){
	int d;
	for(d=2;d<=m;d++){
	    if(m % d == 0) 
	    break; 
	}
	if(d<m)
		return 0;
	else
	 	return -1;
}
int main(){
 	int n,i;
	scanf("%d", &n);
	if (n % 2 == 0 && n >= 6) {
		for (i = 2; i <= n/2; i++)
			if (isPrime(i) && isPrime(n - i))
			printf("%d %d\n", i, n - i);
	    }
	else
	    printf("ERROR");
	return 0;
}

