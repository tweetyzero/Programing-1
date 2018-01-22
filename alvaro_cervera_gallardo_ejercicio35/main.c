#include <stdio.h>
#include"header.h"

			int main() {

				int num[4], i;

				pedir_codigo(num);


				for (i = 0; i < 4; i++) {
					printf("%d", num[i]);
				}


				return 0;
			}