#include <stdio.h>
#include <stdlib.h>
typedef int Tab[100];
int maximun(int n, Tab t)
{   int max;
    if  (n==0)
    {
        return t[0];
    }
        else
        {
			
			max = maximun(n-1,t);
			
            if(t[n]< max )
            {
               return max; //return doit se placer ici
            }
            else
            {
                return t[n];
            }
        }
}

int main()
{
    int n; Tab t;
    Tab table={8,9,7};
     n =8;
    printf("%d\n",maximun(n, table));
    Tab t2={9,14,0,17,11,1,7,25};
     printf("%d\n",maximun(n, t2));
}