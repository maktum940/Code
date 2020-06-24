#include <stdio.h>

int main()
{
    int x, y, z, a, b, c;
    while(1){
        scanf("%d%d%d", &x, &y, &z);
        a = x*x;
        b = y*y;
        c = z*z;
        if(x == 0 && y == 0 && z == 0){
            break;
        }
        else if(a+b == c || b+c == a || a+c == b){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
