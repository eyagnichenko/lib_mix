#include <stdio.h>
#include <ctype.h>

void _strlwr(char *p) {
	while (*p) {
		*p = tolower(*p);
		p++;
	}
}

int perform_lowering() {

	char text[1000];
	printf("\nPlease enter the text to be lowercased:\n");
	fgets(text, 1000, stdin);

	_strlwr(text);
	printf("\nLowercased:\n");
	printf("%s", text);

	return 0;
}
