#include<stdio.h>
int main()
{
    char *book[4]= {"C Programming Language","Assembly Language","Java Language","Natural Language"};
    int n=4;
    int row;
    char *array;
    for(row=0; row<n; row++)
        printf("%d:%s\n",row+1,book[row]);
    for(array=book[0],row=0; row<n; array=book[row])
    {
        printf("%d:%s\n",row+1,array);
        row++;
    }
}
