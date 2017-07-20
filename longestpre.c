#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20],i;
   scanf("%s",a);
     scanf("%s",c);
     scanf("%s",b);
    for(i=0;i<19;i++)
    {if((a[i]==b[i])&&(b[i]==c[i]))
    {printf("%c",a[i]);
    }
    else
    break;
    }
    
    return 0;
}
