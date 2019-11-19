#ifndef PERSON_H
#define PERSON_H

#include <string.h>
#include "person.h"

struct person
{
    char name[64];
    unsigned int age;
} typedef person;

void person_sort( person array, unsigned int arraySize);

#endif // PERSON_H