#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    int i,j;
    srand(time(NULL));
    printf ("N i gir : "); scanf("%d",&n);
    int dizi[n][100];
    for(i=0;i<n;i++){
        for(j=0;j<100;j++){
            dizi[i][j]=rand()%2;
        }
    }

    /*for(i=0;i<n;i++){
        for(j=0;j<100;j++){
            printf("[%d][%d]: %d \n",i+1,j+1,dizi[i][j]);
        }
    }*/

    int sayac=0,toplam=0;
    i=0;
    int satir,sutun;
    for(j=0;j<100;j++){
        for(i=0;i<n;i++){
            if(dizi[i][j]==1)
                 toplam+=1;
        }
        if(sayac<toplam){
            sayac=toplam;
            sutun=j;
        }

    }

   printf("\nEncok 1 olan sutun %d ve toplam urun  %d: ",sutun,sayac);
    return 0;
}
