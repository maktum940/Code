#include<stdio.h>
int main()
{
    int i;
    int count_2,count_3;
    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(i = 0; i<10; i++){
        printf("%d\n", ara[i]);
    }
    if(ara[i]%2 == 0){
        count_2++;
    }
    if(ara[i]%3 == 0){
        count_3++;
    }
    printf("%d %d", count_2, count_3);
    return 0;
}
