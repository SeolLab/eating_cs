#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	char str[100];
	int i;
	
	gets(str);
	
	for(i = 0; i < strlen(str); i++) {
		if(isalpha(str[i]) == 0) continue;
		else if(isupper(str[i])) str[i] = tolower(str[i]);
		else if(islower(str[i])) str[i] = toupper(str[i]);
	}
	
	printf("%s", str);

	return 0;	
}
