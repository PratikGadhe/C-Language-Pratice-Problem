//w.a.p to check whether the user enter a year is leap or not

#include <stdio.h>
int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is a leap year",year);

    }
    else{
        printf("%d is non leap year",year);
    }
    return 0;
}