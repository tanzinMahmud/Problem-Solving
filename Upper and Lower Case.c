#include <stdio.h>
int main()
{
    char x,y,z;
    printf("Enter Character:\n");
    scanf("%c",&x);
    if(x>='a'&&x<='z') {
        y=x-32;
        printf("%c\n",y);
    }
        else if(x>='A'&&x<='Z') {
            z=x+32;
            printf("%c\n",z);
        }
         return 0;
    }
