#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, n, gracz1, gracz2, gracz3, komp1, komp2, komp3, decyzjaGracza, decyzjaKomp, sumaGracza, sumaKomp;

    printf("Maria Bajena, grupa I2 2017L, sroda 14-16\n Napisac program umozliwiajace gre w Black Jacka z komputerem.\n\n");
	
	srand(time(NULL));
	
	gracz1=rand() % (13) + 2;
	gracz2=rand() % (13) + 2;
	komp1=rand() % (13) + 2;
	komp2=rand() % (13) + 2;
	
	printf( "Twoje karty to: %d , %d\n", gracz1, gracz2 );
	printf( "Jedna z kart komputera to: %d\n", komp1 );
	
	printf("Czy chcesz dobrac kolejna karte? Jesli tak ----> 1, jesli nie -----> 0\n");
	scanf("%d", &decyzjaGracza);
	
	if(decyzjaGracza=1) {
		gracz3=rand() % (13) + 2;
		printf("Twoje karty to %d, %d, %d\n", gracz1, gracz2, gracz3);
	}
	else gracz3=0;
	
	decyzjaKomp=rand() % 2;
	
	if(decyzjaKomp==1) komp3=rand() % (13) + 2;
	else komp3=0;
	
	sumaKomp=komp1+komp2+komp3;
	sumaGracza=gracz1+gracz2+gracz3;
	
	printf("Twoja suma oczek to: %d\n", sumaGracza);
	printf("Suma oczek komputera to: %d\n", sumaKomp);
	

	if(sumaGracza*sumaKomp<0) {
		if ((21-sumaGracza)>=0) printf("Wygrana Gracza! Gratulacje!\n");
		if ((21-sumaGracza)<0) printf("Wygrana Komputera! Tym razem przegrales :( \n)");
	}
	
    else {
    	if (abs(21-sumaGracza)>abs(21-sumaKomp)) printf("Wygrana Komputera! Tym razem przegrales :( \n");
		if (abs(21-sumaGracza)<abs(21-sumaKomp)) printf("Wygrana Gracza! Gratulacje! \n");
		if (abs(21-sumaGracza)==abs(21-sumaKomp)) printf("REMIS \n");
	}
         
	return 0;
}
