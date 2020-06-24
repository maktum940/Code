#include <stdio.h>

int main()
{
    int t;
    double hight, red_area, green_area, R, length;

    scanf("%d", &t);

    while(t--){
        scanf("%lf", &length);
        hight = length*0.6;
        R = length*0.2;
        green_area = length*hight;
        red_area = 3.14159265359*R*R;
        green_area = green_area-red_area;

        printf("%0.2lf %0.2lf\n", red_area, green_area);
    }
    return 0;
}
