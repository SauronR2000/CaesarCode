#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdio.h>
#include "Caesar_Varianten_Definition.h"

char matrix_caesar_abc [26] [26];

int caesar_definition_normal (){
	matrix_caesar_abc [0] [0] = 'A';
	matrix_caesar_abc [0] [1] = 'B';
	matrix_caesar_abc [0] [2] = 'C';
	matrix_caesar_abc [0] [3] = 'D';
	matrix_caesar_abc [0] [4] = 'E';
	matrix_caesar_abc [0] [5] = 'F';
	matrix_caesar_abc [0] [6] = 'G';
	matrix_caesar_abc [0] [7] = 'H';
	matrix_caesar_abc [0] [8] = 'I';
	matrix_caesar_abc [0] [9] = 'J';
	matrix_caesar_abc [0] [10] = 'K';
	matrix_caesar_abc [0] [11] = 'L';
	matrix_caesar_abc [0] [12] = 'M';
	matrix_caesar_abc [0] [13] = 'N';
	matrix_caesar_abc [0] [14] = 'O';
	matrix_caesar_abc [0] [15] = 'P';
	matrix_caesar_abc [0] [16] = 'Q';
	matrix_caesar_abc [0] [17] = 'R';
	matrix_caesar_abc [0] [18] = 'S';
	matrix_caesar_abc [0] [19] = 'T';
	matrix_caesar_abc [0] [20] = 'U';
	matrix_caesar_abc [0] [21] = 'V';
	matrix_caesar_abc [0] [22] = 'W';
	matrix_caesar_abc [0] [23] = 'X';
	matrix_caesar_abc [0] [24] = 'Y';
	matrix_caesar_abc [0] [25] = 'Z';
}

int caesar_definition_1 (){
	matrix_caesar_abc [0] [0] = 'A';
	matrix_caesar_abc [0] [1] = 'B';
	matrix_caesar_abc [0] [2] = 'C';
	matrix_caesar_abc [0] [3] = 'D';
	matrix_caesar_abc [0] [4] = 'E';
	matrix_caesar_abc [0] [5] = 'F';
	matrix_caesar_abc [0] [6] = 'G';
	matrix_caesar_abc [0] [7] = 'H';
	matrix_caesar_abc [0] [8] = 'I';
	matrix_caesar_abc [0] [9] = 'J';
	matrix_caesar_abc [0] [10] = 'K';
	matrix_caesar_abc [0] [11] = 'L';
	matrix_caesar_abc [0] [12] = 'M';
	matrix_caesar_abc [0] [13] = 'N';
	matrix_caesar_abc [0] [14] = 'O';
	matrix_caesar_abc [0] [15] = 'P';
	matrix_caesar_abc [0] [16] = 'Q';
	matrix_caesar_abc [0] [17] = 'R';
	matrix_caesar_abc [0] [18] = 'S';
	matrix_caesar_abc [0] [19] = 'T';
	matrix_caesar_abc [0] [20] = 'U';
	matrix_caesar_abc [0] [21] = 'V';
	matrix_caesar_abc [0] [22] = 'W';
	matrix_caesar_abc [0] [23] = 'X';
	matrix_caesar_abc [0] [24] = 'Y';
	matrix_caesar_abc [0] [25] = 'Z';
}

int main(){
  int length;
  int i;
  int caesar;
  char Text[250];

  system("cls");
  printf("Bitte gib deinen Caesar-Verschluesslungs-Wert ein:\n\n");
  scanf("%d", &caesar);

  system("cls");
  printf("Bitte gib deinen Text ein [max. 250 Zeichen]:\n\n");
  scanf("%s", &Text);

  fgetc(stdin);

  system("cls");
  printf("Original: %s\n", Text);

  // Ermitteln der Laenge eines Strings
  length = strlen(Text);

  // Einen String durchlaufen und jedes Zeichen veraendern.
  for(i = 0; i<length; i++){
  
    // Die Variable ist nur innerhalb der for-Schleife gueltig.
    char rotierterbuchstabe;
    
    // Ueberpruefen, ob es ein Buchstabe ist und ob Klein- oder Grossbuchstabe.
    if(isupper(Text[i])){
      rotierterbuchstabe = Text[i];
      if(rotierterbuchstabe < 'A'){rotierterbuchstabe += caesar;}
    }else if(islower(Text[i])){
      rotierterbuchstabe = Text[i];
      if(rotierterbuchstabe < 'a'){rotierterbuchstabe += caesar;}
	}else if(Text[i] == ' '){
		Text[i] = ' ';
	}else{
      rotierterbuchstabe = Text[i];

	  Text[i] = rotierterbuchstabe;
	}
  }
  printf("\nDein Text in Caesar-%d ist:   %s", caesar, Text);

  fgetc(stdin);

  printf("Programm beenden: Enter\n");
  fgetc(stdin);
  return 0;
	
  }