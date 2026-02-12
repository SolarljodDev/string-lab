#include <stdint.h>
#include "str_utils.h"

size_t  get_length(const char *ptr){
	size_t  k = 0;
	while(*ptr != 0){
		k++;
		ptr++;
	}
	return k;
}
