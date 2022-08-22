#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time (NULL));
   int n, c, a, m;

   n=(rand()%60)+130;
   printf("%d\n", n);
   m=n;

   for(c=0;c=29;c++){
        a=n;
        n=(rand()%60)+130;
        if(a<m){
            m=a;
            printf("%d\n", a);
        }
   }
}
