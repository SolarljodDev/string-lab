#include <stdio.h>
#include "str_utils.h"

int main(){
	char name[20];
	printf("Enter your name: ");
	scanf("%s", name);
	size_t name_len = get_length(name);
	printf("Hello, %s! Your name is %zu letters.\n", name, name_len);
}
