#define _CRT_SECURE_NO_WARNINGS
#include "DynamicArray.h"
#include "my_utility.h"

FILE* file;

int main()
{
/************************************************************************************************/

    //hVector handle = create_vector_with_capacity(150);

    //printf("size = %zu\n", get_size(handle));
    //printf("cap = %zu\n", get_capacity(handle));
/************************************************************************************************/

    int a[25];

    randomize();
    my_array_set_random(a, 25);

    my_array_print(a, 25);

    hVector handle = create_vector_with_capacity(150);

    print_vector(handle);


/************************************************************************************************/

    //hVector handle = create_filled_vector(1, 10);

    //printf("size = %zu\n", get_size(handle));
    //printf("cap = %zu\n", get_capacity(handle));

    //print_vector(handle);

    //push_back(handle, 33);

    //print_vector(handle);

/************************************************************************************************/

    //hVector handle = create_vector_with_default();

    //for (int i = 0; i < 40; i++)
    //{
    //    push_back(handle, i);
    //}

    //print_vector(handle);

    //for (int i = 0; i < 25; i++)
    //{
    //    push_back(handle, i * 10);
    //}

    //print_vector(handle);

    //destroy_vector(handle);


 /************************************************************************************************/
    //hVector handle = create_vector_with_default();

    //for (int i = 0; i < 12; i++)
    //{
    //    push_back(handle, i);
    //}

    //print_vector(handle);

    //size_t idx;
    //int ival;

    //printf("indeks degeri ve eklenecek deger: ");
    //(void)scanf("%zu%d", &idx, &ival);

    //insert(handle, idx, ival);

    //print_vector(handle);

    //destroy_vector(handle);

/************************************************************************************************/

    //hVector handle = create_vector_with_default();

    //for (int i = 0; i < 12; i++)
    //{
    //    push_back(handle, i);
    //}

    //print_vector(handle);

    //pop_back(handle);

    //print_vector(handle);

    //destroy_vector(handle);
/************************************************************************************************/
    //hVector handle = create_vector_with_default();

    //for (int i = 0; i < 12; i++)
    //{
    //    push_back(handle, i);
    //}

    //print_vector(handle);

    //erase(handle, 7);

    //print_vector(handle);

    //destroy_vector(handle);

/************************************************************************************************/
    //int a[] = { 2, 3, 5, 7, 11, 13, 17, 19 };

    //hVector handle = create_vector_with_array(a, asize(a));
    //print_vector(handle);

    //while (!is_empty(handle)) {
    //    erase(handle, 0);
    //    print_vector(handle);
    //    printf("******************************");
    //    (void)getchar();
    //}

    //destroy_vector(handle);

/************************************************************************************************/
    //int a[] = { 2, 3, 2, 2, 6, 2, 17, 2, 34, 2, 67, 2};

    //hVector handle = create_vector_with_array(a, asize(a));
    //print_vector(handle);

    //size_t n = erase_all(handle, 2);

    //printf("%zu eleman silindi.\n", n);
    //print_vector(handle);

    //handle->msize = 12;
    //print_vector(handle);
    //destroy_vector(handle);

/************************************************************************************************/

    //int a[] = { 1, 3, 5, 7, 9 };

    //hVector h = create_vector_with_array(a, 5);
    //print_vector(h);

    //push_back(h, 70);
    //print_vector(h);

    //push_back(h, 90);
    //print_vector(h);

    //insert(h, 4, 99);
    //print_vector(h);

    //pop_back(h);
    //print_vector(h);
/************************************************************************************************/



    return 0;
}
