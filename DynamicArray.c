#include "DynamicArray.h"


hVector create_vector_with_capacity(size_t cap)
{
	hVector new_vector = (hVector)malloc(sizeof(vector));
	if (!new_vector)
		return NULL;

	new_vector->msize = 0;
	new_vector->mcap = cap;
	new_vector->mp = (DATATYPE*)malloc(cap * sizeof(DATATYPE));

	if (!new_vector->mp)
	{
		free(new_vector);
		return NULL;
	}

	return new_vector;


}


hVector create_vector_with_default(void)
{
	return create_vector_with_capacity(DEFAULT_CAPACITY);
}

void print_vector(hVector h)
{

	printf("size = %zu\n", get_size(h));
	printf("cap = %zu\n", get_capacity(h));

	for (size_t i = 0; i < get_size(h); i++)
	{
		printf("%d ", get_item(h, i));
	}
	printf("\n");
}

hVector create_vector_with_array(const DATATYPE* p, size_t size)
{
	hVector h = create_vector_with_capacity(size);
	if (!h)
		return h;

	h->msize = size;
	memmove(h->mp, p, size * sizeof(DATATYPE));

	return h;
}

hVector create_filled_vector(DATATYPE value, size_t size)
{
	hVector h = create_vector_with_capacity(size);
	if (!h)
		return h;

	h->msize = size;

	for (size_t i = 0; i < h->msize; i++)
	{
		h->mp[i] = value;
	}

	return h;
}

void destroy_vector(hVector h)
{
	free(h->mp);
	free(h);
}

bool set_capacity(hVector h, size_t new_cap)
{
	if (new_cap < h->mcap)
	{
		return false;
	}

	if (new_cap == h->mcap)
	{
		return true;
	}

	DATATYPE* pbuf = (DATATYPE * ) realloc(h->mp, new_cap * sizeof(DATATYPE));

	if (!pbuf)
	{
		return false;
	}

	h->mcap = new_cap;
	h->mp = pbuf;

	return true;
}

bool push_back(hVector h, DATATYPE value)
{
	if(h->mcap == h->msize && !set_capacity(h, h->mcap * 2))
	{
		return false;
	}

	h->mp[h->msize] = value;
	++h->msize;

	return true;
}

bool insert(hVector h, size_t idx, DATATYPE value)
{
	if (idx > h->msize)
	{
		return false;
	}

	if (h->mcap == h->msize && !set_capacity(h, h->mcap * 2))
	{
		return false;
	}

	memmove(h->mp + idx + 1, h->mp + idx, (h->msize - idx) * sizeof(DATATYPE));

	h->mp[idx] = value;
	++h->msize;

	return true;
}

bool pop_back(hVector h)
{
	if (h->msize == 0)
		return false;

	--h->msize;
	return true;
}

bool erase(hVector h, size_t idx)
{
	if (idx >= h->msize)
	{
		return false;
	}

	memmove(h->mp + idx, h->mp + idx + 1, (h->msize - idx - 1) * sizeof(DATATYPE));

	--h->msize;

	return true;
}

bool is_empty(hVector h)
{
	return h->msize == 0;
}

void shrink(hVector h)
{
	realloc(h->mp, h->msize * sizeof(DATATYPE));
}

void clear(hVector h)
{
	h->msize = 0;
}

size_t find(hVector h, DATATYPE value)
{
	for (size_t i = 0; i < h->msize; ++i)
	{
		if (h->mp[i] == value)
		{
			return i;
		}
	}

	return NOT_FOUND;
}

bool erase_value(hVector h, DATATYPE value)
{
	size_t idx = find(h, value);

	if (idx = NOT_FOUND)
	{
		return false;
	}

	return erase(h, idx);
}

size_t erase_all(hVector h, DATATYPE value)
{
	size_t write_idx = 0;

	for (size_t i = 0; i < h->msize; ++i)
	{
		if (h->mp[i] != value)
		{
			h->mp[write_idx] = h->mp[i];
		}
	}

	size_t erased = h->msize - write_idx;

	h->msize = write_idx;

	return erased;




}