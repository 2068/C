#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *aPtr,i;
    aPtr=&a[0];
    for(i=0;i<5;i++)
        printf("a[%d]=%d\n",i,a[i]);
    for(i=0;i<5;i++)
        printf("*(a+%d)=%d\n",i,*(a+i));
    for(i=0;i<5;i++)
        printf("aPtr[%d]=%d\n",i,aPtr[i]);
    for(aPtr=a,i=0;aPtr<a+5;aPtr++,i++)
        printf("*(aPtr+%d)=%d\n",i,*aPtr);
    return 0;
}
