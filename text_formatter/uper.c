#include <stdio.h>
#include <ctype.h>

void _strupr(char *p) {
	while (*p) {
		*p = toupper(*p);
		p++;
	}
}

int perform_uppering() {

	char text[1000];
	printf("\nPlease enter the text to be uppercased:\n");
	fgets(text, 1000, stdin);

	_strupr(text);
	printf("\nUppercased:\n");
	printf("%s", text);

	return 0;
}
