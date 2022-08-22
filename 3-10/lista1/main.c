#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time (NULL));
   int n, c;
   for(c=0;c<50;c++){
        n=rand()%100;
        printf("%d\n", n);
   }
}
