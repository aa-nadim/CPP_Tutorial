#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    double sum,b;
    int a;
    char c[40];
    scanf("%d%lf",&a,&b);
    getchar();
    gets(c);
    sum=a+b;
    printf("%.0lf\n%.1lf\n",sum,b+b);
    printf("%s",s);
    printf("%s\n",c);
    return 0;
}
