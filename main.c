#include <stdio.h>

int main(void) {
    int i,n,num,somma=0;
    printf("inserire il numero di numeri da sommare:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("numero %d=",i);
        scanf("%d",&num);
        somma+=num;
    }
    printf("la somma dei valori e': %d\n",somma);
}
