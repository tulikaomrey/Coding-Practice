#include <stdio.h>

int main() {
    // Write C code here
    int arr1[]={3,4,8,9,10,19};
    int size= sizeof(arr1)/sizeof(int);
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        arr2[i]=arr1[size-1-i];//reversing
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr2[i]);
    }
     

    return 0;
}
