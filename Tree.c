#include <stdio.h>

	int main(){
		int count = 1;
		printf("%31s","\033[0;93m\u2721\n");
		printf("%30s","\u2721 \u2606 \u2721\n");
		printf("%27s","\u2721 \u2721\n");
		for(int i = 1; i < 8; i++){
			for(int j = 21 - i; j > 0; j--){
				printf(" ");
			}
			for(int k = i + i - 1; k > 0; k--){
				if(count % 7 == 0)
					printf("\033[0;31m\u2b24");
				else if(count % 9 == 0)
					printf("\033[0;34m\e[5m*");
				else if(count % 11 == 0)
					printf("\033[0;97m\e[5m*");
				else
					printf("\033[0;32m*");
				count++;
			}
			printf("\n");
		}
		for(int i = 5; i < 15; i++){
			for(int j = 21 - i; j > 0; j--){
				printf(" ");
			}
			for(int k = i + i - 1; k > 0; k--){
				 if(count % 7 == 0)
                                        printf("\033[0;31m\u2b24");
                                else if(count % 9 == 0)
                                        printf("\033[0;34m\e[5m*");
                                else if(count % 11 == 0)
                                        printf("\033[0;97m\e[5m*");
                                else
                                        printf("\033[0;32m*");
                                count++;
			}
			printf("\n");
	}
		for(int i = 9; i < 22; i++){
			for(int j = 21 - i; j > 0; j--){
				printf(" ");
			}
			for(int k = i + i - 1; k > 0; k--){
				 if(count % 7 == 0)
                                        printf("\033[0;31m\u2b24");
                                else if(count % 9 == 0)
                                        printf("\033[0;34m\e[5m*");
                                else if(count % 11 == 0)
                                        printf("\033[0;97m\e[5m*");
                                else
                                        printf("\033[0;32m*");
                                count++;
			}
			printf("\n");
		}
		for(int i = 5; i > 0; i--){
			for(int j = 17; j > 0; j--){
				printf(" ");
			}
			for(int k = 7; k > 0; k--){
				printf("\033[0;33m|\033[0m");
			}
			printf("\n");
		}
}


