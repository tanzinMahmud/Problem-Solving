#include <stdio.h>
int main()
{
   int a,b;
   int n[5];

   printf("Enter Numbers:\n");
   for(a=0;a<5;a++)
   {
       scanf("%d",&n[a]);
   }
       printf("Enter Number to Search : ");
       scanf("%d",&b);

   for(a=0;a<5;a++)
   {
       if(b==n[a])

    {
           printf("%d is Present\n",b);
           continue;
   }
       if(b=!n[a])
       {
           printf("%d is Not Present\n",b);
       }
   }
       return 0;
}
