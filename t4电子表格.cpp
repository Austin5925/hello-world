//描述
//
//
//
//有一个r行c列(1<=r,c<=50)的电子表格，行从上到下编号为1~r，列从左到右编号是1~c。上面定义了几种操作：(x, y等都是整数)
//
//l  SR x1 x2 
//交换x1行和x2行
//
//l  SC y1 y2 
//交换y1列和y2列
//
//l  DR x
//删除x行
//
//l  DC y
//删除y列
//
//l  IR x
//在x行上面插入一行，新插入的行的所有单元格值为0
//
//l  IC y
//在y列前面插入一列，新插入的列的所有单元格值为0
//
// 
//
//输入
//
// 
//
//第一行是2个整数r, c，表示电子表格有r行c列。接下来的r行，每行c个整数，表示每个单元格的值。再接下来的一行有1个整数n，表示随后有n行，每行是一个操作命令。
//
// 
//
// 
//
//输出
//
// 
//
//输出经过这n次操作后的电子表格内容。
//
// 
//
//样例输入
//
// 
//
//3 5
//
//1 2 3 4 5
//
//3 4 5 6 7
//
//5 6 7 8 9
//
//4
//
//SR 1 3
//
//SC 2 4
//
//IR 2
//
//DC 2
//
// 
//
//样例输出
//
// 
//
//5 7 6 9
//
//0 0 0 0
//
//3 5 4 7
//
//1 3 2 5

#include<stdio.h>
#include<string.h>
int main() {
	int r, c, m, n;
	scanf("%d %d", &r, &c);
	int a[101][101] = {0};
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &m);
			a[i][j] = m;
		}
	}
	
	scanf("%d", &n);
	for (int i = 0; i < n + 1; i++) {
		char cmd[10];		
		fgets(cmd, sizeof(cmd), stdin);
		
		int p = 0, q = 0, t = 0;
		for (int j = 3; j < 10; j++) {
			if (cmd[j] == '\n') {
				break;
			}
			if (t == 0 && cmd[j] != ' ') {
				p = p * 10 + (cmd[j] - '0');
			}
			if (t == 1 && cmd[j] != ' ') {
				q = q * 10 + (cmd[j] - '0');
			}
			if (cmd[j] == ' ') {
				t = 1;
			}
		}
		p = p - 1;
		q = q - 1;
		
		if (cmd[0] == 'S' && cmd[1] == 'R') {
//			printf("1\n");
			for (int j = 0; j < c; j++) {
				a[100][j] = a[p][j];
				a[p][j] = a[q][j];
				a[q][j] = a[100][j];
			}
		}
		
		if (cmd[0] == 'S' && cmd[1] == 'C') {
//			printf("2\n");
			for (int j = 0; j < r; j++) {
				a[j][100] = a[j][p];
				a[j][p] = a[j][q];
				a[j][q] = a[j][100];
			}			
		}
		
		if (cmd[0] == 'D' && cmd[1] == 'R') {
//			printf("3\n");
			for (int j = p; j < r; j++) {
				for (int k = 0; k < c; k++) {
					a[j][k] = a[j + 1][k];
				}
			}
			for (int k = 0; k < c; k++) {
				a[r][k] = 0;
			}
			r = r - 1;
		}
		
		if (cmd[0] == 'D' && cmd[1] == 'C') {
//			printf("4\n");
			for (int j = p; j < c; j++) {
				for (int k = 0; k < r; k++) {
					a[k][j] = a[k][j + 1];
				}
			}
			for (int k = 0; k < r; k++) {
				a[k][c] = 0;
			}
			c = c - 1;
		}
		
		if (cmd[0] == 'I' && cmd[1] == 'R') {
//			printf("5\n");
			for (int j = r; j >= p; j--) {
				for (int k = 0; k < c; k++) {
					a[j][k] = a[j - 1][k];
				}
			}
			for (int k = 0; k < c; k++) {
				a[p][k] = 0;
			}
			r = r + 1;
		}
		
		if (cmd[0] == 'I' && cmd[1] == 'C') {
//			printf("6\n");
			for (int j = c; j >= p; j--) {
				for (int k = 0; k < r; k++) {
					a[k][j] = a[k][j - 1];
				}
			}
			for (int k = 0; k < c; k++) {
				a[k][p] = 0;
			}
			c = c + 1;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", a[i][j]);
			if (j == c - 1) printf("\n");
		}
	}
	
	return 0;
}


