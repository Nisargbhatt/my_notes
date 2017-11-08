#include <stdio.h>

int swap(int *x,int *y);
int main()
{   
    int a=10,b=20;

    printf("value of a and b before swap:\na=%d\nb=%d\n0",a,b);

    swap(&a,&b);
    
    printf("value of a and b after swap:\na=%d\nb=%d\n0",a,b);

return 0;
}

int swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;

}
