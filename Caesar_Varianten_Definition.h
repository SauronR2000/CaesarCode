#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdio.h>

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
	matrix_caesar_abc [1] [0] = 'B';
	matrix_caesar_abc [1] [1] = 'C';
	matrix_caesar_abc [1] [2] = 'D';
	matrix_caesar_abc [1] [3] = 'E';
	matrix_caesar_abc [1] [4] = 'F';
	matrix_caesar_abc [1] [5] = 'G';
	matrix_caesar_abc [1] [6] = 'H';
	matrix_caesar_abc [1] [7] = 'I';
	matrix_caesar_abc [1] [8] = 'J';
	matrix_caesar_abc [1] [9] = 'K';
	matrix_caesar_abc [1] [10] = 'L';
	matrix_caesar_abc [1] [11] = 'M';
	matrix_caesar_abc [1] [12] = 'N';
	matrix_caesar_abc [1] [13] = 'O';
	matrix_caesar_abc [1] [14] = 'P';
	matrix_caesar_abc [1] [15] = 'Q';
	matrix_caesar_abc [1] [16] = 'R';
	matrix_caesar_abc [1] [17] = 'S';
	matrix_caesar_abc [1] [18] = 'T';
	matrix_caesar_abc [1] [19] = 'U';
	matrix_caesar_abc [1] [20] = 'V';
	matrix_caesar_abc [1] [21] = 'W';
	matrix_caesar_abc [1] [22] = 'X';
	matrix_caesar_abc [1] [23] = 'Y';
	matrix_caesar_abc [1] [24] = 'Z';
	matrix_caesar_abc [1] [25] = 'A';
}

int caesar_definition_2 (){
	matrix_caesar_abc [2] [0] = 'C';
	matrix_caesar_abc [2] [1] = 'D';
	matrix_caesar_abc [2] [2] = 'E';
	matrix_caesar_abc [2] [3] = 'F';
	matrix_caesar_abc [2] [4] = 'G';
	matrix_caesar_abc [2] [5] = 'H';
	matrix_caesar_abc [2] [6] = 'J';
	matrix_caesar_abc [2] [7] = 'I';
	matrix_caesar_abc [2] [8] = 'K';
	matrix_caesar_abc [2] [9] = 'L';
	matrix_caesar_abc [2] [10] = 'M';
	matrix_caesar_abc [2] [11] = 'N';
	matrix_caesar_abc [2] [12] = 'O';
	matrix_caesar_abc [2] [13] = 'P';
	matrix_caesar_abc [2] [14] = 'Q';
	matrix_caesar_abc [2] [15] = 'R';
	matrix_caesar_abc [2] [16] = 'S';
	matrix_caesar_abc [2] [17] = 'T';
	matrix_caesar_abc [2] [18] = 'U';
	matrix_caesar_abc [2] [19] = 'V';
	matrix_caesar_abc [2] [20] = 'W';
	matrix_caesar_abc [2] [21] = 'X';
	matrix_caesar_abc [2] [22] = 'Y';
	matrix_caesar_abc [2] [23] = 'Z';
	matrix_caesar_abc [2] [24] = 'A';
	matrix_caesar_abc [2] [25] = 'B';
}

int caesar_definition_3 (){
	matrix_caesar_abc [3] [0] = 'D';
	matrix_caesar_abc [3] [1] = 'E';
	matrix_caesar_abc [3] [2] = 'F';
	matrix_caesar_abc [3] [3] = 'G';
	matrix_caesar_abc [3] [4] = 'H';
	matrix_caesar_abc [3] [5] = 'I';
	matrix_caesar_abc [3] [6] = 'J';
	matrix_caesar_abc [3] [7] = 'K';
	matrix_caesar_abc [3] [8] = 'L';
	matrix_caesar_abc [3] [9] = 'M';
	matrix_caesar_abc [3] [10] = 'N';
	matrix_caesar_abc [3] [11] = 'O';
	matrix_caesar_abc [3] [12] = 'P';
	matrix_caesar_abc [3] [13] = 'Q';
	matrix_caesar_abc [3] [14] = 'R';
	matrix_caesar_abc [3] [15] = 'S';
	matrix_caesar_abc [3] [16] = 'T';
	matrix_caesar_abc [3] [17] = 'U';
	matrix_caesar_abc [3] [18] = 'V';
	matrix_caesar_abc [3] [19] = 'W';
	matrix_caesar_abc [3] [20] = 'X';
	matrix_caesar_abc [3] [21] = 'Y';
	matrix_caesar_abc [3] [22] = 'Z';
	matrix_caesar_abc [3] [23] = 'A';
	matrix_caesar_abc [3] [24] = 'B';
	matrix_caesar_abc [3] [25] = 'C';
}

int caesar_definition_4 (){
	matrix_caesar_abc [4] [0] = 'E';
	matrix_caesar_abc [4] [1] = 'F';
	matrix_caesar_abc [4] [2] = 'G';
	matrix_caesar_abc [4] [3] = 'H';
	matrix_caesar_abc [4] [4] = 'I';
	matrix_caesar_abc [4] [5] = 'J';
	matrix_caesar_abc [4] [6] = 'K';
	matrix_caesar_abc [4] [7] = 'L';
	matrix_caesar_abc [4] [8] = 'M';
	matrix_caesar_abc [4] [9] = 'N';
	matrix_caesar_abc [4] [10] = 'O';
	matrix_caesar_abc [4] [11] = 'P';
	matrix_caesar_abc [4] [12] = 'Q';
	matrix_caesar_abc [4] [13] = 'R';
	matrix_caesar_abc [4] [14] = 'S';
	matrix_caesar_abc [4] [15] = 'T';
	matrix_caesar_abc [4] [16] = 'U';
	matrix_caesar_abc [4] [17] = 'V';
	matrix_caesar_abc [4] [18] = 'W';
	matrix_caesar_abc [4] [19] = 'X';
	matrix_caesar_abc [4] [20] = 'Y';
	matrix_caesar_abc [4] [21] = 'Z';
	matrix_caesar_abc [4] [22] = 'A';
	matrix_caesar_abc [4] [23] = 'B';
	matrix_caesar_abc [4] [24] = 'C';
	matrix_caesar_abc [4] [25] = 'D';
}

int caesar_definition_5 (){
	matrix_caesar_abc [5] [0] = 'F';
	matrix_caesar_abc [5] [1] = 'G';
	matrix_caesar_abc [5] [2] = 'H';
	matrix_caesar_abc [5] [3] = 'I';
	matrix_caesar_abc [5] [4] = 'J';
	matrix_caesar_abc [5] [5] = 'K';
	matrix_caesar_abc [5] [6] = 'L';
	matrix_caesar_abc [5] [7] = 'M';
	matrix_caesar_abc [5] [8] = 'N';
	matrix_caesar_abc [5] [9] = 'O';
	matrix_caesar_abc [5] [10] = 'P';
	matrix_caesar_abc [5] [11] = 'Q';
	matrix_caesar_abc [5] [12] = 'R';
	matrix_caesar_abc [5] [13] = 'S';
	matrix_caesar_abc [5] [14] = 'T';
	matrix_caesar_abc [5] [15] = 'U';
	matrix_caesar_abc [5] [16] = 'V';
	matrix_caesar_abc [5] [17] = 'W';
	matrix_caesar_abc [5] [18] = 'X';
	matrix_caesar_abc [5] [19] = 'Y';
	matrix_caesar_abc [5] [20] = 'Z';
	matrix_caesar_abc [5] [21] = 'A';
	matrix_caesar_abc [5] [22] = 'B';
	matrix_caesar_abc [5] [23] = 'C';
	matrix_caesar_abc [5] [24] = 'D';
	matrix_caesar_abc [5] [25] = 'E';
}

int caesar_definition_6 (){
	matrix_caesar_abc [6] [0] = 'G';
	matrix_caesar_abc [6] [1] = 'H';
	matrix_caesar_abc [6] [2] = 'I';
	matrix_caesar_abc [6] [3] = 'J';
	matrix_caesar_abc [6] [4] = 'K';
	matrix_caesar_abc [6] [5] = 'L';
	matrix_caesar_abc [6] [6] = 'M';
	matrix_caesar_abc [6] [7] = 'N';
	matrix_caesar_abc [6] [8] = 'O';
	matrix_caesar_abc [6] [9] = 'P';
	matrix_caesar_abc [6] [10] = 'Q';
	matrix_caesar_abc [6] [11] = 'R';
	matrix_caesar_abc [6] [12] = 'S';
	matrix_caesar_abc [6] [13] = 'T';
	matrix_caesar_abc [6] [14] = 'U';
	matrix_caesar_abc [6] [15] = 'V';
	matrix_caesar_abc [6] [16] = 'W';
	matrix_caesar_abc [6] [17] = 'X';
	matrix_caesar_abc [6] [18] = 'Y';
	matrix_caesar_abc [6] [19] = 'Z';
	matrix_caesar_abc [6] [20] = 'A';
	matrix_caesar_abc [6] [21] = 'B';
	matrix_caesar_abc [6] [22] = 'C';
	matrix_caesar_abc [6] [23] = 'D';
	matrix_caesar_abc [6] [24] = 'E';
	matrix_caesar_abc [6] [25] = 'F';
}

int caesar_definition_7 (){
	matrix_caesar_abc [7] [0] = 'H';
	matrix_caesar_abc [7] [1] = 'I';
	matrix_caesar_abc [7] [2] = 'J';
	matrix_caesar_abc [7] [3] = 'K';
	matrix_caesar_abc [7] [4] = 'L';
	matrix_caesar_abc [7] [5] = 'M';
	matrix_caesar_abc [7] [6] = 'N';
	matrix_caesar_abc [7] [7] = 'O';
	matrix_caesar_abc [7] [8] = 'P';
	matrix_caesar_abc [7] [9] = 'Q';
	matrix_caesar_abc [7] [10] = 'R';
	matrix_caesar_abc [7] [11] = 'S';
	matrix_caesar_abc [7] [12] = 'T';
	matrix_caesar_abc [7] [13] = 'U';
	matrix_caesar_abc [7] [14] = 'V';
	matrix_caesar_abc [7] [15] = 'W';
	matrix_caesar_abc [7] [16] = 'X';
	matrix_caesar_abc [7] [17] = 'Y';
	matrix_caesar_abc [7] [18] = 'Z';
	matrix_caesar_abc [7] [19] = 'A';
	matrix_caesar_abc [7] [20] = 'B';
	matrix_caesar_abc [7] [21] = 'C';
	matrix_caesar_abc [7] [22] = 'D';
	matrix_caesar_abc [7] [23] = 'E';
	matrix_caesar_abc [7] [24] = 'F';
	matrix_caesar_abc [7] [25] = 'G';
}

int caesar_definition_8 (){
	matrix_caesar_abc [8] [0] = 'I';
	matrix_caesar_abc [8] [1] = 'J';
	matrix_caesar_abc [8] [2] = 'K';
	matrix_caesar_abc [8] [3] = 'L';
	matrix_caesar_abc [8] [4] = 'M';
	matrix_caesar_abc [8] [5] = 'N';
	matrix_caesar_abc [8] [6] = 'O';
	matrix_caesar_abc [8] [7] = 'P';
	matrix_caesar_abc [8] [8] = 'Q';
	matrix_caesar_abc [8] [9] = 'R';
	matrix_caesar_abc [8] [10] = 'S';
	matrix_caesar_abc [8] [11] = 'T';
	matrix_caesar_abc [8] [12] = 'U';
	matrix_caesar_abc [8] [13] = 'V';
	matrix_caesar_abc [8] [14] = 'W';
	matrix_caesar_abc [8] [15] = 'X';
	matrix_caesar_abc [8] [16] = 'Y';
	matrix_caesar_abc [8] [17] = 'Z';
	matrix_caesar_abc [8] [18] = 'A';
	matrix_caesar_abc [8] [19] = 'B';
	matrix_caesar_abc [8] [20] = 'C';
	matrix_caesar_abc [8] [21] = 'D';
	matrix_caesar_abc [8] [22] = 'E';
	matrix_caesar_abc [8] [23] = 'F';
	matrix_caesar_abc [8] [24] = 'G';
	matrix_caesar_abc [8] [25] = 'H';
}

int caesar_definition_9 (){
	matrix_caesar_abc [9] [0] = 'J';
	matrix_caesar_abc [9] [1] = 'K';
	matrix_caesar_abc [9] [2] = 'L';
	matrix_caesar_abc [9] [3] = 'M';
	matrix_caesar_abc [9] [4] = 'N';
	matrix_caesar_abc [9] [5] = 'O';
	matrix_caesar_abc [9] [6] = 'P';
	matrix_caesar_abc [9] [7] = 'Q';
	matrix_caesar_abc [9] [8] = 'R';
	matrix_caesar_abc [9] [9] = 'S';
	matrix_caesar_abc [9] [10] = 'T';
	matrix_caesar_abc [9] [11] = 'U';
	matrix_caesar_abc [9] [12] = 'V';
	matrix_caesar_abc [9] [13] = 'W';
	matrix_caesar_abc [9] [14] = 'X';
	matrix_caesar_abc [9] [15] = 'Y';
	matrix_caesar_abc [9] [16] = 'Z';
	matrix_caesar_abc [9] [17] = 'A';
	matrix_caesar_abc [9] [18] = 'B';
	matrix_caesar_abc [9] [19] = 'C';
	matrix_caesar_abc [9] [20] = 'D';
	matrix_caesar_abc [9] [21] = 'E';
	matrix_caesar_abc [9] [22] = 'F';
	matrix_caesar_abc [9] [23] = 'G';
	matrix_caesar_abc [9] [24] = 'H';
	matrix_caesar_abc [9] [25] = 'I';
}

int caesar_definition_10 (){
	matrix_caesar_abc [10] [0] = 'K';
	matrix_caesar_abc [10] [1] = 'L';
	matrix_caesar_abc [10] [2] = 'M';
	matrix_caesar_abc [10] [3] = 'N';
	matrix_caesar_abc [10] [4] = 'O';
	matrix_caesar_abc [10] [5] = 'P';
	matrix_caesar_abc [10] [6] = 'Q';
	matrix_caesar_abc [10] [7] = 'R';
	matrix_caesar_abc [10] [8] = 'S';
	matrix_caesar_abc [10] [9] = 'T';
	matrix_caesar_abc [10] [10] = 'U';
	matrix_caesar_abc [10] [11] = 'V';
	matrix_caesar_abc [10] [12] = 'W';
	matrix_caesar_abc [10] [13] = 'X';
	matrix_caesar_abc [10] [14] = 'Y';
	matrix_caesar_abc [10] [15] = 'Z';
	matrix_caesar_abc [10] [16] = 'A';
	matrix_caesar_abc [10] [17] = 'B';
	matrix_caesar_abc [10] [18] = 'C';
	matrix_caesar_abc [10] [19] = 'D';
	matrix_caesar_abc [10] [20] = 'E';
	matrix_caesar_abc [10] [21] = 'F';
	matrix_caesar_abc [10] [22] = 'G';
	matrix_caesar_abc [10] [23] = 'H';
	matrix_caesar_abc [10] [24] = 'I';
	matrix_caesar_abc [10] [25] = 'J';
}

int caesar_definition_11 (){
	matrix_caesar_abc [11] [0] = 'L';
	matrix_caesar_abc [11] [1] = 'M';
	matrix_caesar_abc [11] [2] = 'N';
	matrix_caesar_abc [11] [3] = 'O';
	matrix_caesar_abc [11] [4] = 'P';
	matrix_caesar_abc [11] [5] = 'Q';
	matrix_caesar_abc [11] [6] = 'R';
	matrix_caesar_abc [11] [7] = 'S';
	matrix_caesar_abc [11] [8] = 'T';
	matrix_caesar_abc [11] [9] = 'U';
	matrix_caesar_abc [11] [10] = 'V';
	matrix_caesar_abc [11] [11] = 'W';
	matrix_caesar_abc [11] [12] = 'X';
	matrix_caesar_abc [11] [13] = 'Y';
	matrix_caesar_abc [11] [14] = 'Z';
	matrix_caesar_abc [11] [15] = 'A';
	matrix_caesar_abc [11] [16] = 'B';
	matrix_caesar_abc [11] [17] = 'C';
	matrix_caesar_abc [11] [18] = 'D';
	matrix_caesar_abc [11] [19] = 'E';
	matrix_caesar_abc [11] [20] = 'F';
	matrix_caesar_abc [11] [21] = 'G';
	matrix_caesar_abc [11] [22] = 'H';
	matrix_caesar_abc [11] [23] = 'I';
	matrix_caesar_abc [11] [24] = 'J';
	matrix_caesar_abc [11] [25] = 'K';
}

int caesar_definition_12 (){
	matrix_caesar_abc [12] [0] = 'M';
	matrix_caesar_abc [12] [1] = 'N';
	matrix_caesar_abc [12] [2] = 'O';
	matrix_caesar_abc [12] [3] = 'P';
	matrix_caesar_abc [12] [4] = 'Q';
	matrix_caesar_abc [12] [5] = 'R';
	matrix_caesar_abc [12] [6] = 'S';
	matrix_caesar_abc [12] [7] = 'T';
	matrix_caesar_abc [12] [8] = 'U';
	matrix_caesar_abc [12] [9] = 'V';
	matrix_caesar_abc [12] [10] = 'W';
	matrix_caesar_abc [12] [11] = 'X';
	matrix_caesar_abc [12] [12] = 'Y';
	matrix_caesar_abc [12] [13] = 'Z';
	matrix_caesar_abc [12] [14] = 'A';
	matrix_caesar_abc [12] [15] = 'B';
	matrix_caesar_abc [12] [16] = 'C';
	matrix_caesar_abc [12] [17] = 'D';
	matrix_caesar_abc [12] [18] = 'E';
	matrix_caesar_abc [12] [19] = 'F';
	matrix_caesar_abc [12] [20] = 'G';
	matrix_caesar_abc [12] [21] = 'H';
	matrix_caesar_abc [12] [22] = 'I';
	matrix_caesar_abc [12] [23] = 'J';
	matrix_caesar_abc [12] [24] = 'K';
	matrix_caesar_abc [12] [25] = 'L';
}

int caesar_definition_13 (){
	matrix_caesar_abc [13] [0] = 'N';
	matrix_caesar_abc [13] [1] = 'O';
	matrix_caesar_abc [13] [2] = 'P';
	matrix_caesar_abc [13] [3] = 'Q';
	matrix_caesar_abc [13] [4] = 'R';
	matrix_caesar_abc [13] [5] = 'S';
	matrix_caesar_abc [13] [6] = 'T';
	matrix_caesar_abc [13] [7] = 'U';
	matrix_caesar_abc [13] [8] = 'V';
	matrix_caesar_abc [13] [9] = 'W';
	matrix_caesar_abc [13] [10] = 'X';
	matrix_caesar_abc [13] [11] = 'Y';
	matrix_caesar_abc [13] [12] = 'Z';
	matrix_caesar_abc [13] [13] = 'A';
	matrix_caesar_abc [13] [14] = 'B';
	matrix_caesar_abc [13] [15] = 'C';
	matrix_caesar_abc [13] [16] = 'D';
	matrix_caesar_abc [13] [17] = 'E';
	matrix_caesar_abc [13] [18] = 'F';
	matrix_caesar_abc [13] [19] = 'G';
	matrix_caesar_abc [13] [20] = 'H';
	matrix_caesar_abc [13] [21] = 'I';
	matrix_caesar_abc [13] [22] = 'J';
	matrix_caesar_abc [13] [23] = 'K';
	matrix_caesar_abc [13] [24] = 'L';
	matrix_caesar_abc [13] [25] = 'M';
}

int caesar_definition_14 (){
	matrix_caesar_abc [14] [0] = 'O';
	matrix_caesar_abc [14] [1] = 'P';
	matrix_caesar_abc [14] [2] = 'Q';
	matrix_caesar_abc [14] [3] = 'R';
	matrix_caesar_abc [14] [4] = 'S';
	matrix_caesar_abc [14] [5] = 'T';
	matrix_caesar_abc [14] [6] = 'U';
	matrix_caesar_abc [14] [7] = 'V';
	matrix_caesar_abc [14] [8] = 'W';
	matrix_caesar_abc [14] [9] = 'X';
	matrix_caesar_abc [14] [10] = 'Y';
	matrix_caesar_abc [14] [11] = 'Z';
	matrix_caesar_abc [14] [12] = 'A';
	matrix_caesar_abc [14] [13] = 'B';
	matrix_caesar_abc [14] [14] = 'C';
	matrix_caesar_abc [14] [15] = 'D';
	matrix_caesar_abc [14] [16] = 'E';
	matrix_caesar_abc [14] [17] = 'F';
	matrix_caesar_abc [14] [18] = 'G';
	matrix_caesar_abc [14] [19] = 'H';
	matrix_caesar_abc [14] [20] = 'I';
	matrix_caesar_abc [14] [21] = 'J';
	matrix_caesar_abc [14] [22] = 'K';
	matrix_caesar_abc [14] [23] = 'L';
	matrix_caesar_abc [14] [24] = 'M';
	matrix_caesar_abc [14] [25] = 'N';
}

int caesar_definition_15 (){
	matrix_caesar_abc [15] [0] = 'P';
	matrix_caesar_abc [15] [1] = 'Q';
	matrix_caesar_abc [15] [2] = 'R';
	matrix_caesar_abc [15] [3] = 'S';
	matrix_caesar_abc [15] [4] = 'T';
	matrix_caesar_abc [15] [5] = 'U';
	matrix_caesar_abc [15] [6] = 'V';
	matrix_caesar_abc [15] [7] = 'W';
	matrix_caesar_abc [15] [8] = 'X';
	matrix_caesar_abc [15] [9] = 'Y';
	matrix_caesar_abc [15] [10] = 'Z';
	matrix_caesar_abc [15] [11] = 'A';
	matrix_caesar_abc [15] [12] = 'B';
	matrix_caesar_abc [15] [13] = 'C';
	matrix_caesar_abc [15] [14] = 'D';
	matrix_caesar_abc [15] [15] = 'E';
	matrix_caesar_abc [15] [16] = 'F';
	matrix_caesar_abc [15] [17] = 'G';
	matrix_caesar_abc [15] [18] = 'H';
	matrix_caesar_abc [15] [19] = 'I';
	matrix_caesar_abc [15] [20] = 'J';
	matrix_caesar_abc [15] [21] = 'K';
	matrix_caesar_abc [15] [22] = 'L';
	matrix_caesar_abc [15] [23] = 'M';
	matrix_caesar_abc [15] [24] = 'N';
	matrix_caesar_abc [15] [25] = 'O';
}

int caesar_definition_16 (){
	matrix_caesar_abc [16] [0] = 'Q';
	matrix_caesar_abc [16] [1] = 'R';
	matrix_caesar_abc [16] [2] = 'S';
	matrix_caesar_abc [16] [3] = 'T';
	matrix_caesar_abc [16] [4] = 'U';
	matrix_caesar_abc [16] [5] = 'V';
	matrix_caesar_abc [16] [6] = 'W';
	matrix_caesar_abc [16] [7] = 'X';
	matrix_caesar_abc [16] [8] = 'Y';
	matrix_caesar_abc [16] [9] = 'Z';
	matrix_caesar_abc [16] [10] = 'A';
	matrix_caesar_abc [16] [11] = 'B';
	matrix_caesar_abc [16] [12] = 'C';
	matrix_caesar_abc [16] [13] = 'D';
	matrix_caesar_abc [16] [14] = 'E';
	matrix_caesar_abc [16] [15] = 'F';
	matrix_caesar_abc [16] [16] = 'G';
	matrix_caesar_abc [16] [17] = 'H';
	matrix_caesar_abc [16] [18] = 'I';
	matrix_caesar_abc [16] [19] = 'J';
	matrix_caesar_abc [16] [20] = 'K';
	matrix_caesar_abc [16] [21] = 'L';
	matrix_caesar_abc [16] [22] = 'M';
	matrix_caesar_abc [16] [23] = 'N';
	matrix_caesar_abc [16] [24] = 'O';
	matrix_caesar_abc [16] [25] = 'P';
}

int caesar_definition_4 (){
	matrix_caesar_abc [4] [0] = 'E';
	matrix_caesar_abc [4] [1] = 'F';
	matrix_caesar_abc [4] [2] = 'G';
	matrix_caesar_abc [4] [3] = 'H';
	matrix_caesar_abc [4] [4] = 'I';
	matrix_caesar_abc [4] [5] = 'J';
	matrix_caesar_abc [4] [6] = 'K';
	matrix_caesar_abc [4] [7] = 'L';
	matrix_caesar_abc [4] [8] = 'M';
	matrix_caesar_abc [4] [9] = 'N';
	matrix_caesar_abc [4] [10] = 'O';
	matrix_caesar_abc [4] [11] = 'P';
	matrix_caesar_abc [4] [12] = 'Q';
	matrix_caesar_abc [4] [13] = 'R';
	matrix_caesar_abc [4] [14] = 'S';
	matrix_caesar_abc [4] [15] = 'T';
	matrix_caesar_abc [4] [16] = 'U';
	matrix_caesar_abc [4] [17] = 'V';
	matrix_caesar_abc [4] [18] = 'W';
	matrix_caesar_abc [4] [19] = 'X';
	matrix_caesar_abc [4] [20] = 'Y';
	matrix_caesar_abc [4] [21] = 'Z';
	matrix_caesar_abc [4] [22] = 'A';
	matrix_caesar_abc [4] [23] = 'B';
	matrix_caesar_abc [4] [24] = 'C';
	matrix_caesar_abc [4] [25] = 'D';
}

int caesar_definition_5 (){
	matrix_caesar_abc [5] [0] = 'F';
	matrix_caesar_abc [5] [1] = 'G';
	matrix_caesar_abc [5] [2] = 'H';
	matrix_caesar_abc [5] [3] = 'I';
	matrix_caesar_abc [5] [4] = 'J';
	matrix_caesar_abc [5] [5] = 'K';
	matrix_caesar_abc [5] [6] = 'L';
	matrix_caesar_abc [5] [7] = 'M';
	matrix_caesar_abc [5] [8] = 'N';
	matrix_caesar_abc [5] [9] = 'O';
	matrix_caesar_abc [5] [10] = 'P';
	matrix_caesar_abc [5] [11] = 'Q';
	matrix_caesar_abc [5] [12] = 'R';
	matrix_caesar_abc [5] [13] = 'S';
	matrix_caesar_abc [5] [14] = 'T';
	matrix_caesar_abc [5] [15] = 'U';
	matrix_caesar_abc [5] [16] = 'V';
	matrix_caesar_abc [5] [17] = 'W';
	matrix_caesar_abc [5] [18] = 'X';
	matrix_caesar_abc [5] [19] = 'Y';
	matrix_caesar_abc [5] [20] = 'Z';
	matrix_caesar_abc [5] [21] = 'A';
	matrix_caesar_abc [5] [22] = 'B';
	matrix_caesar_abc [5] [23] = 'C';
	matrix_caesar_abc [5] [24] = 'D';
	matrix_caesar_abc [5] [25] = 'E';
}

int caesar_definition_6 (){
	matrix_caesar_abc [6] [0] = 'G';
	matrix_caesar_abc [6] [1] = 'H';
	matrix_caesar_abc [6] [2] = 'I';
	matrix_caesar_abc [6] [3] = 'J';
	matrix_caesar_abc [6] [4] = 'K';
	matrix_caesar_abc [6] [5] = 'L';
	matrix_caesar_abc [6] [6] = 'M';
	matrix_caesar_abc [6] [7] = 'N';
	matrix_caesar_abc [6] [8] = 'O';
	matrix_caesar_abc [6] [9] = 'P';
	matrix_caesar_abc [6] [10] = 'Q';
	matrix_caesar_abc [6] [11] = 'R';
	matrix_caesar_abc [6] [12] = 'S';
	matrix_caesar_abc [6] [13] = 'T';
	matrix_caesar_abc [6] [14] = 'U';
	matrix_caesar_abc [6] [15] = 'V';
	matrix_caesar_abc [6] [16] = 'W';
	matrix_caesar_abc [6] [17] = 'X';
	matrix_caesar_abc [6] [18] = 'Y';
	matrix_caesar_abc [6] [19] = 'Z';
	matrix_caesar_abc [6] [20] = 'A';
	matrix_caesar_abc [6] [21] = 'B';
	matrix_caesar_abc [6] [22] = 'C';
	matrix_caesar_abc [6] [23] = 'D';
	matrix_caesar_abc [6] [24] = 'E';
	matrix_caesar_abc [6] [25] = 'F';
}

int caesar_definition_7 (){
	matrix_caesar_abc [7] [0] = 'H';
	matrix_caesar_abc [7] [1] = 'I';
	matrix_caesar_abc [7] [2] = 'J';
	matrix_caesar_abc [7] [3] = 'K';
	matrix_caesar_abc [7] [4] = 'L';
	matrix_caesar_abc [7] [5] = 'M';
	matrix_caesar_abc [7] [6] = 'N';
	matrix_caesar_abc [7] [7] = 'O';
	matrix_caesar_abc [7] [8] = 'P';
	matrix_caesar_abc [7] [9] = 'Q';
	matrix_caesar_abc [7] [10] = 'R';
	matrix_caesar_abc [7] [11] = 'S';
	matrix_caesar_abc [7] [12] = 'T';
	matrix_caesar_abc [7] [13] = 'U';
	matrix_caesar_abc [7] [14] = 'V';
	matrix_caesar_abc [7] [15] = 'W';
	matrix_caesar_abc [7] [16] = 'X';
	matrix_caesar_abc [7] [17] = 'Y';
	matrix_caesar_abc [7] [18] = 'Z';
	matrix_caesar_abc [7] [19] = 'A';
	matrix_caesar_abc [7] [20] = 'B';
	matrix_caesar_abc [7] [21] = 'C';
	matrix_caesar_abc [7] [22] = 'D';
	matrix_caesar_abc [7] [23] = 'E';
	matrix_caesar_abc [7] [24] = 'F';
	matrix_caesar_abc [7] [25] = 'G';
}

int caesar_definition_8 (){
	matrix_caesar_abc [8] [0] = 'I';
	matrix_caesar_abc [8] [1] = 'J';
	matrix_caesar_abc [8] [2] = 'K';
	matrix_caesar_abc [8] [3] = 'L';
	matrix_caesar_abc [8] [4] = 'M';
	matrix_caesar_abc [8] [5] = 'N';
	matrix_caesar_abc [8] [6] = 'O';
	matrix_caesar_abc [8] [7] = 'P';
	matrix_caesar_abc [8] [8] = 'Q';
	matrix_caesar_abc [8] [9] = 'R';
	matrix_caesar_abc [8] [10] = 'S';
	matrix_caesar_abc [8] [11] = 'T';
	matrix_caesar_abc [8] [12] = 'U';
	matrix_caesar_abc [8] [13] = 'V';
	matrix_caesar_abc [8] [14] = 'W';
	matrix_caesar_abc [8] [15] = 'X';
	matrix_caesar_abc [8] [16] = 'Y';
	matrix_caesar_abc [8] [17] = 'Z';
	matrix_caesar_abc [8] [18] = 'A';
	matrix_caesar_abc [8] [19] = 'B';
	matrix_caesar_abc [8] [20] = 'C';
	matrix_caesar_abc [8] [21] = 'D';
	matrix_caesar_abc [8] [22] = 'E';
	matrix_caesar_abc [8] [23] = 'F';
	matrix_caesar_abc [8] [24] = 'G';
	matrix_caesar_abc [8] [25] = 'H';
}

int caesar_definition_9 (){
	matrix_caesar_abc [9] [0] = 'J';
	matrix_caesar_abc [9] [1] = 'K';
	matrix_caesar_abc [9] [2] = 'L';
	matrix_caesar_abc [9] [3] = 'M';
	matrix_caesar_abc [9] [4] = 'N';
	matrix_caesar_abc [9] [5] = 'O';
	matrix_caesar_abc [9] [6] = 'P';
	matrix_caesar_abc [9] [7] = 'Q';
	matrix_caesar_abc [9] [8] = 'R';
	matrix_caesar_abc [9] [9] = 'S';
	matrix_caesar_abc [9] [10] = 'T';
	matrix_caesar_abc [9] [11] = 'U';
	matrix_caesar_abc [9] [12] = 'V';
	matrix_caesar_abc [9] [13] = 'W';
	matrix_caesar_abc [9] [14] = 'X';
	matrix_caesar_abc [9] [15] = 'Y';
	matrix_caesar_abc [9] [16] = 'Z';
	matrix_caesar_abc [9] [17] = 'A';
	matrix_caesar_abc [9] [18] = 'B';
	matrix_caesar_abc [9] [19] = 'C';
	matrix_caesar_abc [9] [20] = 'D';
	matrix_caesar_abc [9] [21] = 'E';
	matrix_caesar_abc [9] [22] = 'F';
	matrix_caesar_abc [9] [23] = 'G';
	matrix_caesar_abc [9] [24] = 'H';
	matrix_caesar_abc [9] [25] = 'I';
}

int caesar_definition_10 (){
	matrix_caesar_abc [10] [0] = 'K';
	matrix_caesar_abc [10] [1] = 'L';
	matrix_caesar_abc [10] [2] = 'M';
	matrix_caesar_abc [10] [3] = 'N';
	matrix_caesar_abc [10] [4] = 'O';
	matrix_caesar_abc [10] [5] = 'P';
	matrix_caesar_abc [10] [6] = 'Q';
	matrix_caesar_abc [10] [7] = 'R';
	matrix_caesar_abc [10] [8] = 'S';
	matrix_caesar_abc [10] [9] = 'T';
	matrix_caesar_abc [10] [10] = 'U';
	matrix_caesar_abc [10] [11] = 'V';
	matrix_caesar_abc [10] [12] = 'W';
	matrix_caesar_abc [10] [13] = 'X';
	matrix_caesar_abc [10] [14] = 'Y';
	matrix_caesar_abc [10] [15] = 'Z';
	matrix_caesar_abc [10] [16] = 'A';
	matrix_caesar_abc [10] [17] = 'B';
	matrix_caesar_abc [10] [18] = 'C';
	matrix_caesar_abc [10] [19] = 'D';
	matrix_caesar_abc [10] [20] = 'E';
	matrix_caesar_abc [10] [21] = 'F';
	matrix_caesar_abc [10] [22] = 'G';
	matrix_caesar_abc [10] [23] = 'H';
	matrix_caesar_abc [10] [24] = 'I';
	matrix_caesar_abc [10] [25] = 'J';
}

int caesar_definition_11 (){
	matrix_caesar_abc [11] [0] = 'L';
	matrix_caesar_abc [11] [1] = 'M';
	matrix_caesar_abc [11] [2] = 'N';
	matrix_caesar_abc [11] [3] = 'O';
	matrix_caesar_abc [11] [4] = 'P';
	matrix_caesar_abc [11] [5] = 'Q';
	matrix_caesar_abc [11] [6] = 'R';
	matrix_caesar_abc [11] [7] = 'S';
	matrix_caesar_abc [11] [8] = 'T';
	matrix_caesar_abc [11] [9] = 'U';
	matrix_caesar_abc [11] [10] = 'V';
	matrix_caesar_abc [11] [11] = 'W';
	matrix_caesar_abc [11] [12] = 'X';
	matrix_caesar_abc [11] [13] = 'Y';
	matrix_caesar_abc [11] [14] = 'Z';
	matrix_caesar_abc [11] [15] = 'A';
	matrix_caesar_abc [11] [16] = 'B';
	matrix_caesar_abc [11] [17] = 'C';
	matrix_caesar_abc [11] [18] = 'D';
	matrix_caesar_abc [11] [19] = 'E';
	matrix_caesar_abc [11] [20] = 'F';
	matrix_caesar_abc [11] [21] = 'G';
	matrix_caesar_abc [11] [22] = 'H';
	matrix_caesar_abc [11] [23] = 'I';
	matrix_caesar_abc [11] [24] = 'J';
	matrix_caesar_abc [11] [25] = 'K';
}

int caesar_definition_12 (){
	matrix_caesar_abc [12] [0] = 'M';
	matrix_caesar_abc [12] [1] = 'N';
	matrix_caesar_abc [12] [2] = 'O';
	matrix_caesar_abc [12] [3] = 'P';
	matrix_caesar_abc [12] [4] = 'Q';
	matrix_caesar_abc [12] [5] = 'R';
	matrix_caesar_abc [12] [6] = 'S';
	matrix_caesar_abc [12] [7] = 'T';
	matrix_caesar_abc [12] [8] = 'U';
	matrix_caesar_abc [12] [9] = 'V';
	matrix_caesar_abc [12] [10] = 'W';
	matrix_caesar_abc [12] [11] = 'X';
	matrix_caesar_abc [12] [12] = 'Y';
	matrix_caesar_abc [12] [13] = 'Z';
	matrix_caesar_abc [12] [14] = 'A';
	matrix_caesar_abc [12] [15] = 'B';
	matrix_caesar_abc [12] [16] = 'C';
	matrix_caesar_abc [12] [17] = 'D';
	matrix_caesar_abc [12] [18] = 'E';
	matrix_caesar_abc [12] [19] = 'F';
	matrix_caesar_abc [12] [20] = 'G';
	matrix_caesar_abc [12] [21] = 'H';
	matrix_caesar_abc [12] [22] = 'I';
	matrix_caesar_abc [12] [23] = 'J';
	matrix_caesar_abc [12] [24] = 'K';
	matrix_caesar_abc [12] [25] = 'L';
}