#include <stdio.h>
int main(){
    int a, b, coun;
    while(scanf("%d %d", &a, &b) == 2){
        coun = a;

        while(a >= b){
            int renew = a/b;
            coun = coun+renew;

            a = renew+(a%b);
        }

        printf("%d\n", coun);
    }
    return 0;
}
