#include <stdio.h>
int main()
{
    long long n,a,i,k,b[1000],temp,j,y,z,c[i],d=0,q=1;
    int count = 0;
    scanf("%lld", &n);  //to get the integer
    scanf("%lld",&k);   //to get the k digit to delete
    a=n;
    while(a != 0)           //to get the number of digit
    {
        a/= 10;
        ++count;
    }
    for(i=0;i<count;i++)    //to get the elements in the array
    {   y=n%10;
        n=n/10;
        b[i]=y;
    }
   /* for(i=0;i<count;i++)
    printf("%lld",b[i]);*/
        for (i = 0; i < count; ++i)  // sorting

    {

        for (j = i + 1; j < count; ++j)

        {

            if (b[i] > b[j])

            {

                temp =  b[i];

                b[i] = b[j];

                b[j] = temp;

            }

        }

    }
     /* for(i=0;i<count;i++)
    printf("%lld",b[i]);*/
    z=count-k;
    for(i=0;i<z;i++)        //to delete k elements
    c[i]=(b[i]);
   /* for(i=0;i<z;i++)
    printf("%lld",c[i]);*/
    for(i=z-1;i>=0;i--)
    {d=d+(c[i]*q);
    q=q*10;
    }
    printf("%lld",d);
    return 0;
}
