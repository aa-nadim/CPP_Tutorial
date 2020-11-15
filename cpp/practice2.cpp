#include<stdio.h>
int main()
{
    int min,max,i,a[1000];
    min=100;
    max=-1;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
     printf("min: %d\nmax %d\n",min, max);
    return 0;
}
