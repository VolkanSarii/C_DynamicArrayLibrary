#ifndef DYNAMIC_ARR_H
#define DYNAMIC_ARR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_utility.h"

#define NOT_FOUND			(UINT64_MAX)
#define DEFAULT_CAPACITY	(16)

typedef int DATATYPE;

typedef struct tagVector
{
	DATATYPE* mp;
	size_t msize;
	size_t mcap;
}vector, *hVector;

hVector create_vector_with_default(void);
hVector create_vector_with_capacity(size_t cap);
hVector create_vector_with_array(const DATATYPE* p, size_t size);
hVector create_filled_vector(DATATYPE value, size_t size);

bool set_capacity(hVector h, size_t cap);
bool push_back(hVector h, DATATYPE value);
bool pop_back(hVector h);
bool insert(hVector h, size_t idx, DATATYPE value);
bool erase(hVector h, size_t idx);
bool erase_value(hVector h, DATATYPE value);
bool is_empty(hVector h);

size_t find(hVector h, DATATYPE value);
size_t erase_all(hVector h, DATATYPE value);

void clear(hVector h);
void shrink(hVector h);
void destroy_vector(hVector h);
void print_vector(hVector h);

//functional macros
#define get_size(hvec)			((hvec)->msize)
#define get_capacity(hvec)		((hvec)->mcap)
#define get_item(hvec, idx)		((hvec)->mp[idx])











#endif