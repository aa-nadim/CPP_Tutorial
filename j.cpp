#include<stdio.h>
int main()
{
    int a[100]={34, 39, 44, 49, 59, 66, 70, 78, 81, 88, 89};
    int strt=0,end=10,key=49,mid;

    while(strt<=end)
    {
        mid=(strt + end)/ 2;
        if(a[mid]==key)
        {
            printf("Find at: %d\n", mid+1);
            break;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
            strt=mid +1;
    }
    if(strt>end)
        printf("Not Found\n");
    return 0;
}
