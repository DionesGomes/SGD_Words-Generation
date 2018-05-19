#include<stdio.h>

main(){

    char consoante[21] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    char vogal[5] = {'A', 'E', 'I', 'O', 'U'};

    int k, i, j, x;
    int cont = 0;
    for(k = 0; k <= 20; k++){
            for(i=0; i <=4; i++){
                    for(j=0; j <=20; j++){
                         for(x=0; x <=4; x++){
                             cont ++;
                             printf(" Palavra: %c%c  %c%c" , consoante[k],vogal[i],consoante[j],vogal[x]);
                             printf("\n");
                         }
                    }

            }

    }
        printf("%d", cont);
}
