#include <stdio.h>
int main()
{
    float a,b,c,x,y;
    printf("Press 1 For DOLLAR TO TAKA\n      OR \nPress 2 For TAKA TO DOLLAR\n");
    scanf("%f",&a);
    if(a==1) {
        printf("\nEnter DOLLAR:\n");
        scanf("%f",&b);
        c=b*80.45;
        printf("Taka:%.2f\n",c);
    }
    else if(a==2) {
        printf("\nEnter TAKA:\n");
        scanf("%f",&x);
        y=x/80.45;
        printf("Dollar:%.2f\n",y);
    }
    return 0;
}
