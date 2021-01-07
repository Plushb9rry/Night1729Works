#include <stdio.h>

int main()
{
    int num,originalnum,remainder,result;
    //printf("enter the three digit integer");
    //scanf("%d",&num);
    for(num=1;num<501;num++)
    {   
        printf("----------------1------------------------\n");
        originalnum=num;
        printf("%d original number \n",originalnum);
        while (originalnum!=0)
        {
            remainder = originalnum%10;
            result+=remainder * remainder*remainder;
            originalnum/=10;
        }
        if (result==num)
        {
            printf("%d is armstrong number \n",num);
        }
        else
        {
            continue;
        }
    }
    return 0 ;
}
             