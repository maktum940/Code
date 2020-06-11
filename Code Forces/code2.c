#include<stdio.h>
int main()
{
    int s , i = 0;
    int l, r, a, ara[i];
    scanf("%d %d", &l, &r);
    s = r-l+1;
    for(; l <= r; l++, i++){
        ara[i] = l;
    }

    for(a = 0; a < s; a++){
        printf("%d\n", ara[a]);
    }

    return 0;
}
