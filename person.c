#include <stdlib.h>
#include "person.h"

int person_cmp(const void* a, const void* b)
{
    if((person*)a->age < (person*)b->age)
        return -1;
    if((person*)a->age > (person*)b->age)
        return 1;
    return 0;
}

void person_sort( person array, unsigned int arraySize)
{
    qsort(&array, arraySize, sizeof(person), person_cmp);
}