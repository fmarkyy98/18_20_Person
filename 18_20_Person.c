#include "person.h"

int main()
{
    person people[] = 
    {
        {"Géza", 25},
        {"Ede", 32},
        {"József", 24},
        {"András", 26}
    };

    for(int i = 0; i < sizeof(people)/sizeof(person); ++i)
    {
        printf("%s\t-  %d éves\n", people[i].name, people[i].age);
    }

    person_sort(people, sizeof(people)/sizeof(person));
    printf("\nSort!\n\n");

    for(int i = 0; i < sizeof(people)/sizeof(person); ++i)
    {
        printf("%s\t-  %d éves\n", people[i].name, people[i].age);
    }
}