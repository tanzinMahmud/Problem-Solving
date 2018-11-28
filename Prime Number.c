#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter a Number:\n");
   scanf("%d",&y);
      for (x=2;x<y;x++){
           if(y%x==0){
             printf("Not a Prime Number\n");
             break;
                }
            }
            if(x==y){
              printf("Prime Number\n");
            }
            return 0;
}