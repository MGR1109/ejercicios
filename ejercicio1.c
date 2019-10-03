#include <stdio.h>
#include <stdlib.h>

/*Alumnos: Garcia Romero Misael
           Vazquez Mena Cesar
*/
int main()
{
    int h,j,i,k,l,ne;
    int n;
    printf("Escribe un numero: ");
    scanf("%d",&n);
    //pa delante

    for(i=n;i>0;i--)
    {
         for(k=1;k<=i;k++)
    {

 printf("%d ",k);
      if(k==i)
      {
          for(ne=i;ne<=n;ne++)
          {


          printf("  ");
          }
      }
    }
        for(h=i;h<=n; h++)
        {
            printf("  ");
        }
 printf("%d ",i);
        for(j=i-1;j>0;j--)
        {
              if(i-1 <= 0)
              {
              } else {

         printf("%d ",j);
         }
        }

         printf("\n");
    }
    return 0;
}

