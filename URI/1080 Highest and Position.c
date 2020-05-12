#include<stdio.h>

int main()
{
    int i, j,a[100],max=0, pos;
    for(i = 0; i<100; i++){

            scanf("%d", &a[i]);
            //printf("%d", a[i]);
    }
    for(i = 0; i<100; i++)
        {
         if (a[i]>=max){
         max=a[i];
         pos=i;
         //printf("%d %d\n", max, pos+1);
       }
    }



    printf("%d\n%d\n", max, pos+1);
    return 0;
}
