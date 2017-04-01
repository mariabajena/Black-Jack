#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int losujKarte() {
	return rand() % 13 + 2;
}

int wartoscKarty(int karta) {
	if (karta > 11) {
		return 10;
	}
	
	return karta;
}

int main(int argc, char *argv[]) {
	
	int i, n, gracz1, gracz2, gracz3, komp1, komp2, komp3, decyzjaGracza, decyzjaKomp, sumaGracza, sumaKomp, czyGramy;

    printf("Maria Bajena, grupa I2 2017L, sroda 14-16\n Napisac program umozliwiajace gre w Black Jacka z komputerem.\n\n");
	
		srand(time(NULL));
		
		gracz1=wartoscKarty(losujKarte());
		gracz2=wartoscKarty(losujKarte());
		komp1=wartoscKarty(losujKarte());
		komp2=wartoscKarty(losujKarte());
						
		printf( "Twoje karty to: %d , %d\n", gracz1, gracz2 );
		printf( "Jedna z kart komputera to: %d\n", komp1 );
		
		printf("Czy chcesz dobrac kolejna karte? Jesli tak ----> 1, jesli nie -----> 0\n");
		scanf("%d", &decyzjaGracza);
		
		if(decyzjaGracza==1) {
			gracz3=wartoscKarty(losujKarte());
		}
		else gracz3=0;
		
		printf("Twoje karty to %d, %d, %d\n", gracz1, gracz2, gracz3);
		
		decyzjaKomp=rand() % 2;
		
		if(decyzjaKomp==1) {
			komp3=wartoscKarty(losujKarte());
		}
		else komp3=0;
		
		printf("Karty komputera to %d, %d, %d\n", komp1, komp2, komp3);
		
		sumaKomp=komp1+komp2+komp3;
		if ((sumaKomp>21) && (komp1==11)) {
			sumaKomp=sumaKomp-10;
			printf("ZMIENILEM KARTE komp 1!!!!!\n");
		}
			
			if ((sumaKomp>21) && (komp2==11)) {
				sumaKomp=sumaKomp-10;
				printf("ZMIENILEM KARTE komputerka 2!!!!!\n");
			}
			
			if ((sumaKomp>21) && (komp3==11)) {
				sumaKomp=sumaKomp-10;
				printf("ZMIENILEM KARTE komputerka 3!!!!!\n");
			}
		
		sumaGracza=gracz1+gracz2+gracz3;
			if ((sumaGracza>21) && (gracz1==11)) {
				sumaGracza=sumaGracza-10; 
				printf("ZMIENILEM KARTE gracza 1 !!!!!\n");
			}
			
			if ((sumaGracza>21) && (gracz2==11)) {
				sumaGracza=sumaGracza-10; 
				printf("ZMIENILEM KARTE gracza 2!!!!!\n");
			}
			
			if ((sumaGracza>21) && (gracz3==11)) {
				sumaGracza=sumaGracza-10; 
				printf("ZMIENILEM KARTE gracza 3!!!!!\n");
			}
		
		printf("Twoja suma oczek to: %d\n", sumaGracza);
		printf("Suma oczek komputera to: %d\n", sumaKomp);
		
	
		if(((21-sumaGracza)*(21-sumaKomp))<0) {
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
