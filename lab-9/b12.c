#include <stdio.h> //gets()
#include <stdlib.h> //calloc() free()
#include <string.h> //strtok()

void lab9_b12();
void buble_sort(char*);
void clean_arr(char*);

int main() {
    lab9_b12();
    printf("\n\n");
    return 0;
}

void lab9_b12() {
    char* str = (char*) calloc(509, sizeof(char));
    printf("Write string:\n");
    gets(str);


    char words[509][509]; //array for words
    int numWords = 0; //number of words
    char* letters = (char*) calloc(509, sizeof(char)); //array for 1st letters in words


    char* pointerStr = strtok(str, " ");
    while(pointerStr) {
    	strcpy(words[numWords], pointerStr); //input word in array words
    	letters[numWords] = words[numWords][0]; //1st letter in string letters
    	numWords++;
    	pointerStr = strtok(NULL, " ");
	}
	free(str);

	buble_sort(letters); //sort the letters alphabetically


	//function that removes letters
	//deletes a character if it is 1
	//will leave a symbol if there are more than 2, but will delete its copies
    clean_arr(letters);


	printf("\noutput of words whose first letter occurs more than 1 time\n");
  	for (int i = 0; i < numWords; i++)
  		for (int j = 0; j < strlen(letters); j++)
  			if (words[i][0] == letters[j]) {
  				printf("%s ", words[i]);
  				break;
			}

    free(letters);
}

void buble_sort(char* s) {
    for (int i = 0; i < strlen(s); i++)
        for (int j = 0; j < strlen(s); j++)
            if (s[j] > s[i]) {
                char t = s[j];
                s[j] = s[i];
                s[i] = t;
            }
}

void clean_arr(char* s) {
    for (int i = 0; i < strlen(s); i++)
        if (s[i] != s[i + 1])
            s[i] = ' ';

    for (int i = 0; i < strlen(s); i++)
        if (s[i] == s[i + 1] || s[i] == ' ') {
            for (int j = i; j < strlen(s); j++)
                s[j] = s[j + 1];
            i--;
        }
}
