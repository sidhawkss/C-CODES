#include <stdio.h>

int compare(char *ptr1, char *ptr2);

int main(void){
	int r;
	char arr1[] = "sidhawks";
	char arr2[] = "sidhawks";
	char *string1 = arr1;
	char *string2 = arr2;
	r = compare(string1,string2);
	if (r == 0){
		printf("Equal strings\n");
	}else if (r < 0){
		printf("String lexicographically smaller\n");
	} else {
		printf("String lexicographically grater\n");
	}

	return 0;
}


int compare(char *str1, char *str2){
	while((*str1 && str2) && (*str1 == *str2)) {
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
