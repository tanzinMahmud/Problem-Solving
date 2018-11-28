#include<stdio.h>
int main()
{
   int x,y,c;
   int m[10];
   printf("Enter 10 Numbers:\n");
   for (x=0;x<10;x++)
   {
       scanf("%d",&m[x]);
   }
        printf("\nAfter Sorting:\n");
   for (x=0;x<10;x++)
       {
       for(y=x+1;y<10;y++)
       {
           if(m[x]>m[y])
       {
           c=m[x];
           m[x]=m[y];
           m[y]=c;
       }
       }
       }
       for(x=0;x<10;x++)
       {
            printf("%d\n",m[x]);
       }
   return 0;
}
