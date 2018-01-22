#include<stdio.h>
#include<stdlib.h>
#include"header.h"


int main() {


	int num[4], num2[4], i = 0, j, coin,aciertos, aux;

			pedir_codigo(num);

			do {

				coin = 0, aciertos = 0, aux = 0;
				pedir_codigo(num2);

				while (aux < 4) {

					if (num[aux] == num2[aux]) {

						coin++;
						aux++;
					}

				}
				if (coin != 4) {
					for (j = 0; j < 4; j++) {
						aux = 0;
						
						while (aux < 4) {
							
							if (num[j] == num2[aux]) {
								aciertos++;
							}
						aux++;
						}
					}
					aciertos -= coin;
				}
				printf("a=%d c=%d\n", coin, aciertos);
				
				if (coin == 4) {
					printf("WIN!");
					return 0;


				}
				i++;
				
			} while (i < 12);
			printf("GAME OVER");
			return 0;
}