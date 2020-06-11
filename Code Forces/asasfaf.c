#include<stdio.h>
int main()
{
    int i, n, e, a, b, c, d, x, y, z, t;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d %d %d %d", &e, &a, &b, &c, &d);
        t = a+b;
        x = a-b;
        y = c-d;
        z = c+d;
        if((y <= (e*x)) && ((e*x) <= z) || (t <= (e*x)) && ((e*x) <= t)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}

