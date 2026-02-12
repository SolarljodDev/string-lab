#include <stdio.h>
#include "str_utils.h"
int main(){
	char name[20];
	printf("Enter your name:");
	scanf("%c", name);
	uint8_t name_len = get_lenght(name);
	printf("\nHello, %s! Yout name is %d letters.\n", name, name_len);
}
