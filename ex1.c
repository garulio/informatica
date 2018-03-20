#include <stdio.h>
#include <stdlib.h>

int main(){

    int qualTab;
    int n;

    printf ("Super Tabuada\n");
    printf ("==============\n");
    printf ("Calcular qual tabuada?: ");
    scanf ("%d", &qualTab);
    if ( qualTab<1 || qualTab>10){
        printf ("Valor invalido!\n");
        exit(0);
    }
    for (n=1; n<=10; n++){
        printf ("%d x %d = %d\n", qualTab, n, qualTab*n);
    }


    return 0;


}
