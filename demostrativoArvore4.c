#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int printFases = 0;

int returnNum(char letra){
	int ax = 0;
	switch(letra){
		case ' ': ax = 32; break;
		case '!': ax = 33; break;
		case '"': ax = 34; break;
		case '#': ax = 35; break;
		case '$': ax = 36; break;
		case '%': ax = 37; break;
		case '&': ax = 38; break;
		case '\'': ax = 39; break;
		case '(': ax = 40; break;
		case ')': ax = 41; break;
		case '*': ax = 42; break;
		case '+': ax = 43; break;
		case ',': ax = 44; break;
		case '-': ax = 45; break;
		case '.': ax = 46; break;
		case '/': ax = 47; break;
		case '0': ax = 48; break;
		case '1': ax = 49; break;
		case '2': ax = 50; break;
		case '3': ax = 51; break;
		case '4': ax = 52; break;
		case '5': ax = 53; break;
		case '6': ax = 54; break;
		case '7': ax = 55; break;
		case '8': ax = 56; break;
		case '9': ax = 57; break;
		case ':': ax = 58; break;
		case ';': ax = 59; break;
		case '<': ax = 60; break;
		case '=': ax = 61; break;
		case '>': ax = 62; break;
		case '?': ax = 63; break;
		case '@': ax = 64; break;
		case 'A': ax = 65; break;
		case 'B': ax = 66; break;
		case 'C': ax = 67; break;
		case 'D': ax = 68; break;
		case 'E': ax = 69; break;
		case 'F': ax = 70; break;
		case 'G': ax = 71; break;
		case 'H': ax = 72; break;
		case 'I': ax = 73; break;
		case 'J': ax = 74; break;
		case 'K': ax = 75; break;
		case 'L': ax = 76; break;
		case 'M': ax = 77; break;
		case 'N': ax = 78; break;
		case 'O': ax = 79; break;
		case 'P': ax = 80; break;
		case 'Q': ax = 81; break;
		case 'R': ax = 82; break;
		case 'S': ax = 83; break;
		case 'T': ax = 84; break;
		case 'U': ax = 85; break;
		case 'V': ax = 86; break;
		case 'W': ax = 87; break;
		case 'X': ax = 88; break;
		case 'Y': ax = 89; break;
		case 'Z': ax = 90; break;
		case '[': ax = 91; break;
		case '\\': ax = 92; break;
		case ']': ax = 93; break;
		case '^': ax = 94; break;
		case '_': ax = 95; break;
		case '`': ax = 96; break;
		case 'a': ax = 97; break;
		case 'b': ax = 98; break;
		case 'c': ax = 99; break;
		case 'd': ax = 100; break;
		case 'e': ax = 101; break;
		case 'f': ax = 102; break;
		case 'g': ax = 103; break;
		case 'h': ax = 104; break;
		case 'i': ax = 105; break;
		case 'j': ax = 106; break;
		case 'k': ax = 107; break;
		case 'l': ax = 108; break;
		case 'm': ax = 109; break;
		case 'n': ax = 110; break;
		case 'o': ax = 111; break;
		case 'p': ax = 112; break;
		case 'q': ax = 113; break;
		case 'r': ax = 114; break;
		case 's': ax = 115; break;
		case 't': ax = 116; break;
		case 'u': ax = 117; break;
		case 'v': ax = 118; break;
		case 'w': ax = 119; break;
		case 'x': ax = 120; break;
		case 'y': ax = 121; break;
		case 'z': ax = 122; break;
		case '{': ax = 123; break;
		case '|': ax = 124; break;
		case '}': ax = 125; break;
		case '~': ax = 126; break;
	}
	return ax;
}

char returChar(int num){
	char ax = ' ';
	switch(num){
		case 32: ax = ' '; break;
		case 33: ax = '!'; break;
		case 34: ax = '"'; break;
		case 35: ax = '#'; break;
		case 36: ax = '$'; break;
		case 37: ax = '%'; break;
		case 38: ax = '&'; break;
		case 39: ax = '\''; break;
		case 40: ax = '('; break;
		case 41: ax = ')'; break;
		case 42: ax = '*'; break;
		case 43: ax = '+'; break;
		case 44: ax = ','; break;
		case 45: ax = '-'; break;
		case 46: ax = '.'; break;
		case 47: ax = '/'; break;
		case 48: ax = '0'; break;
		case 49: ax = '1'; break;
		case 50: ax = '2'; break;
		case 51: ax = '3'; break;
		case 52: ax = '4'; break;
		case 53: ax = '5'; break;
		case 54: ax = '6'; break;
		case 55: ax = '7'; break;
		case 56: ax = '8'; break;
		case 57: ax = '9'; break;
		case 58: ax = ':'; break;
		case 59: ax = ';'; break;
		case 60: ax = '<'; break;
		case 61: ax = '='; break;
		case 62: ax = '>'; break;
		case 63: ax = '?'; break;
		case 64: ax = '@'; break;
		case 65: ax = 'A'; break;
		case 66: ax = 'B'; break;
		case 67: ax = 'C'; break;
		case 68: ax = 'D'; break;
		case 69: ax = 'E'; break;
		case 70: ax = 'F'; break;
		case 71: ax = 'G'; break;
		case 72: ax = 'H'; break;
		case 73: ax = 'I'; break;
		case 74: ax = 'J'; break;
		case 75: ax = 'K'; break;
		case 76: ax = 'L'; break;
		case 77: ax = 'M'; break;
		case 78: ax = 'N'; break;
		case 79: ax = 'O'; break;
		case 80: ax = 'P'; break;
		case 81: ax = 'Q'; break;
		case 82: ax = 'R'; break;
		case 83: ax = 'S'; break;
		case 84: ax = 'T'; break;
		case 85: ax = 'U'; break;
		case 86: ax = 'V'; break;
		case 87: ax = 'W'; break;
		case 88: ax = 'X'; break;
		case 89: ax = 'Y'; break;
		case 90: ax = 'Z'; break;
		case 91: ax = '['; break;
		case 92: ax = '\\'; break;
		case 93: ax = ']'; break;
		case 94: ax = '^'; break;
		case 95: ax = '_'; break;
		case 96: ax = '`'; break;
		case 97: ax = 'a'; break;
		case 98: ax = 'b'; break;
		case 99: ax = 'c'; break;
		case 100: ax = 'd'; break;
		case 101: ax = 'e'; break;
		case 102: ax = 'f'; break;
		case 103: ax = 'g'; break;
		case 104: ax = 'h'; break;
		case 105: ax = 'i'; break;
		case 106: ax = 'j'; break;
		case 107: ax = 'k'; break;
		case 108: ax = 'l'; break;
		case 109: ax = 'm'; break;
		case 110: ax = 'n'; break;
		case 111: ax = 'o'; break;
		case 112: ax = 'p'; break;
		case 113: ax = 'q'; break;
		case 114: ax = 'r'; break;
		case 115: ax = 's'; break;
		case 116: ax = 't'; break;
		case 117: ax = 'u'; break;
		case 118: ax = 'v'; break;
		case 119: ax = 'w'; break;
		case 120: ax = 'x'; break;
		case 121: ax = 'y'; break;
		case 122: ax = 'z'; break;
		case 123: ax = '{'; break;
		case 124: ax = '|'; break;
		case 125: ax = '}'; break;
		case 126: ax = '~'; break;
	}
	return ax;
}


int isPot2(int num){
	int pot = 1;
	int i = 0;
	for(i = 0; i < 10; i++){
		pot *= 2;
		if(num == pot-1) return 1;
	}
	return 0;
}

void descriptografar(char* palavra){
	int aux = 0;
	int i = 0;
	for(i = 0; i < 1024; i++){
		if(palavra[i] != '\0'){
			aux = returnNum(palavra[i]);
			aux -= ((i+1)%5);
			printf("%c", returChar(aux));
		} else i = 1024;
	}
}

void printLinha(char* palavra, int tipo){
	int i = 0;
	for(i = 0; i < 1024; i++){
		if(palavra[i] != '\0'){
				if(tipo == 1) printf("%d ", i);
			else if(tipo == 2) printf("%c ", palavra[i]);
			else if(tipo == 3) printf("%d ", returnNum(palavra[i]));
		}   else i = 1024;
	}
	printf("\n");
}

void printLinha2(char *linha, int total, int sentido){
	int i = 0;
	if(sentido == 1){
		for(i = 0; i < total; i++) printf("%c ", linha[i]);
	} else {
		for(i = total-1; i >= 0; i--) printf("%c ", linha[i]);
	}
}


void printArvore(char* palavra, int sentido){
	char linha[512];
	int i = 0, j = 0, k = 0;
	for(i = 0; i < 512; i++) linha[i] = '\0';
	for(i = 0; i < 1024; i++){
		if(palavra[i] != '\0'){
			linha[j] = palavra[i];
			j++;
		}
		if(isPot2(i+1) == 1){
			printLinha2(linha, j, sentido);
			for(k = 0; k < 512; k++) linha[k] = '\0';
			if(j != 0) printf("\n");
			j = 0;
		}
	}
}

int main(void){
	char palavra[1024], inverso[1024], linha[512];
	int i = 0, j = 0, k = 0, l = 0, numF = 0, indice = 0;
	for(i = 0; i < 1024; i++) palavra[i] = '\0';

	printf("Entre com o numero de frases: ");
	scanf("%i", &numF);
	char frases[numF][1024];

	printf("Numero de frases %d\n", numF);

	for(i = 0; i < numF; i++){
		printf("Entre com a frase %d: ", (i + 1));
		setbuf(stdin, NULL);
		for(j = 0; j < 1024; j++) frases[i][j] = '\0';
		gets(frases[i]);
	}

	for(indice = 0; indice < numF; indice++){
		j = 0; k = 0; l = 0;
		for(i = 0; i < 1024; i++) palavra[i] = frases[indice][i]; // '\0';

		if(printFases == 1){
			printf("Ex 1:\n");
			printLinha(palavra, 1); // imprime somente os indicea
			printLinha(palavra, 2); // imprime as letras
			printLinha(palavra, 3); // imprime o numero coresponete na tabela ASCII

			printf("\n\nEx 2:\n");
			printArvore(palavra, 1); // printa arvore no sentido convencional


			printf("\n\nEx 4:\n");
			printArvore(palavra, 2); // printa arvore no sentido convencional

		}

		for(i = 0; i < 1024; i++) inverso[i] = '\0';
		for(i = 0; i < 512; i++) linha[i] = '\0';
		for(i = 0; i < 1024; i++){
			if(palavra[i] != '\0'){
				linha[j] = palavra[i];
				j++;
			}
			if(isPot2(i+1) == 1){
				for(k = j-1; k >= 0; k--){
					inverso[l] = linha[k];
					l++;
				}
				j = 0;
				for(k = 0; k < 512; k++) linha[k] = '\0';
			}
		}

		if(printFases == 1){
			printf("\n\nEx 5:\n");
			printLinha(inverso, 2);
			printf("\n\nDescriptografa palavra original: ");
			descriptografar(palavra);
			printf("\nDescriptografa palavra invertida: ");
			descriptografar(inverso);
			printf("\n\n");
		} else {
			printf("\nFrase %d: ", (indice + 1));
			descriptografar(inverso);
		}
	}
	return 0;
}