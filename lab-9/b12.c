#include <stdio.h> //gets()
#include <stdlib.h> //calloc() free()
#include <string.h> //strtok()

void lab9_b12();
void buble_sort(char *s);
void clean_arr(char *s);

int main() {
    lab9_b12();
    return 0;
}

void lab9_b12() {
    //создание строки в виде указателя и её ввод с клавиатуры
    char *str = (char*) calloc(509, sizeof(char));
    printf("Write string:\n");
    gets(str);
    
    char words[509][509]; //массив для слов со строки
    int kWords = 0; //число слов
    char letters[509]; //массив для 1-ых букв
    
    //разделение строки на слова
    //и взятие у первого слова 1-ого символа
    char *pointerStr = strtok(str, " ");
    
    while(pointerStr) {
    	//printf("%s\n", pointerStr);
    	
    	strcpy(words[kWords], pointerStr); //записать слово из указателя в массив со словами
    	//printf("%c\n\n", words[i][0]);
    	
    	letters[kWords] = words[kWords][0]; //записать первую букву слова в массив со словами
    	kWords++; //слов стало на 1 больше
    	
    	pointerStr = strtok(NULL, " ");
	}
    
	for (int i = 0; i < kWords; i++)
		printf("%s\n", words[i]);
	
	printf("\n\nfirst letters:\n%s\n\n", letters);
	buble_sort(letters); //сортировка слов по алфавиту
	
	printf("\n\nletters:\n%s\n\n", letters);
	//функция удаления букв
	//удалит символ, если он один
	//оставит символ, если их больше 2-ух, но удалит, его копии
    clean_arr(letters);
	
  	for (int i = 0; i < kWords; i++)
  		for (int j = 0; j < strlen(letters); j++)
  			if (words[i][0] == letters[j]) {
  				printf("%s ", words[i]);
  				break;
			}

}

void buble_sort(char *s) {
    for (int i = 0; i < strlen(s); i++)
        for (int j = 0; j < strlen(s); j++)
            if (s[j] > s[i]) {
                char t = s[j];
                s[j] = s[i];
                s[i] = t;
            }
}

void clean_arr(char *s) {
    for (int i = 0; i < strlen(s); i++)
        if (s[i] != s[i + 1])
            s[i] = ' ';

    for (int i = 0; i < strlen(s); i++)
        if (s[i] == s[i + 1] || s[i] == ' ') {
            for (int j = i; j < strlen(s); j++)
                s[j] = s[j + 1];
            i--;
        }

    printf("clean arr:\n%s\n\n\n", s);
}
