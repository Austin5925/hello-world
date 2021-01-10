#include<stdio.h>
#include<math.h>

int main() {
	int n, a[200];
	double b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0) {
			puts("ERROR");
		}
		else {
			b = sqrt(a[i]);
			printf("%.2f\n", b);
		}
	}
	return 0;
}
