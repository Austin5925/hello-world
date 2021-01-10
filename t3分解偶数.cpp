//C: 分解偶数
//描述
//任何大于6的偶数都可以分解成两个奇质数的和。输入n，输出所有解，按小的在前，大的在后输出，不要重复。
//输入
//每行输入包含一个测试用例，输入一个整数(能够用32位整数表示)。
//输出
//对符合要求的输入数据，依次输出所有解，每个解占一行，两个数用空格分隔。对输入不符合要求的数，则输出ERROR。
//样例
//输入
//10
//输出
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

