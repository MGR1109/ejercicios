#include <stdio.h>
#include <stdlib.h>
/* Alumnos:Vazquez Mena Cesar
           García Romero Misael
*/         
int main()
{
    int n;
    int i,j,x,k,i2;
    int contador1,contador2;
    printf("Escribe un numero: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(i2 = i; i2<=n;  i2++)
        {
           printf(" ");
        }
          printf("%d", i);
            contador1 = i;
            contador2 = 0;
             for(j=1;j<i;j++)
        {


                 for(x=2;x<=i;x++)
                 {

                       if(i < x+1)
                       {

                       if(contador1+1 == 10)
                       {
                           contador1 = -1;
                           contador2 = contador2 +1;
                       }
            printf("%d",contador1+1);
                        contador1 = contador1 + 1;

                       }

                 }

        }
        if(contador2 > 0)
        {
            contador1 = contador1 + (contador2*10);
        }
        for(k=contador1-1; k>=i; k--)
                        {
                                   if(k>=10)
                                   {
                                        printf("%d",k-10);

                                   } else {
                                       printf("%d",k);
                                   }

                        }
            printf("\n");
    }

    return 0;
}

