#include <stdio.h>

int main(void) {
	char* str = "hello world\n";

	FILE* fp = fopen("./hello.txt", "w");
	fputs(str, fp);
	fclose(fp);

	return 0;
}
