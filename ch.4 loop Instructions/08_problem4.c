#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("Reverse Order%d\n",i);
    }
    return 0;
}