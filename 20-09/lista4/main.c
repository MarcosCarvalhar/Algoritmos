#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time (NULL));
   int n, c, a, m, r, d, p;

   n=(rand()%60)+130;
   printf("%d\n", n);
   m=n;

   for(c=0;c=29;c++){
        a=n;
        p=0;
        d=2;
        n=(rand()%60)+130;
        if(a<m){
            m=a;
        }
        while((d<=(m/2))||(p==0)){
            r=m%d;
            d=d+1;
                if(r==0){
                    p=1;
                }else{
                    p=0;
                }
        }
        if(p!=0){
            printf("%d", m);
        }
   }
}
