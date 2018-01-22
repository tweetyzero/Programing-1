#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int pedir_codigo(int num[4]) {

		int j, i = 0;
			do{
				scanf("%d", &num[i]);

				if (num[i] > 9 || num[i] < 0) {
					i++;
					printf("INVALIDO NUM %d!\n", i++);
					i = i - 2;
					continue;
				}
				if (i >= 0) {

					for (j = 0; j < i; j++) {

						if (num[j] == num[i]) {
							i++;
							printf("REPETIDO NUM %d!\n", i);
							i = i - 2;
							j = 0;
							continue;

						}
					}

				}
				i++;

			} while (i < 4);
		
		return 0;
		
    }