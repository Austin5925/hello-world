#include<stdio.h>
// reverse a string
void reverse(char *a, int b, int c) 
{
    char ch;
    while (b < c) {
        ch = a[b];
        a[b] = a[c];
        a[c] = ch;//当 b < c时，让a[b]和a[c]交换 
        b++;
        c--;
    }//直到 b >= c为止 
}

int main() {
    char a[10000];
    gets(a);

    int b = 0;
    int i = 0; 

    while ('.' != a[i]) {
        while (' ' != a[i] && '.' != a[i]) {
            i++;
        }
        if (' ' == a[i]) {
            reverse(a, b, i-1);
            b = i + 1;
            i ++;
        }
        if ('.' == a[i]) {
            reverse(a, b, i-1);
        }
    }   
    printf("%s\n", a);
    return 0;
}

