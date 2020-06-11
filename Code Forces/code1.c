#include<stdio.h>
int main()
{
    int n, x, y, a, b, bill;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &x, &y);
        scanf("%d %d", &a, &b);
        if(x+1 == 0 && y == 0 || x-1 == 0 && y == 0){
            if(x == 0 && y+1 == 0 || y-1 == 0 && y == 0){
                if(x+1 == 0 && y+1 == 0|| x-1 == 0 && y-1 == 0){
                    if(x == 0 && y == 0){
                        bill = 0;
                        printf("%d\n", bill);
                    }
                }
            }
        }
            else{
                bill = a+b+a;
                printf("%d\n", bill);
        }
    }
    return 0;
}
