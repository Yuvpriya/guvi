#include<stdio.h>
#include<string.h>
int main()
{
    char p[20],q[20],r[20],i;
   scanf("%s",p);
     scanf("%s",r);
     scanf("%s",q);
    for(i=0;i<19;i++)
    {
        if((p[i]==q[i])&&(q[i]==r[i]))
    {printf("%c",p[i]);
    }
    else
    break;
    }
    
    return 0;
}
