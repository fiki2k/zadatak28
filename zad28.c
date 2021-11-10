// Program treba naci velicinu polja.

#include <stdio.h>
int main()
{
    double polje[] = {11, 22, 33, 44, 55, 66};
    int velicina;

    /* 
     * velicina = sizeof(array_name) / sizeof(array_name[0])
     * Ovo je univerzalna formula z naci velicinu polja,
       radit ce za sve tipove podataka kao sto su
       int ,float, char...
     */
    velicina = sizeof(polje) / sizeof(polje[0]);
    printf("Velicina polja je: %d\n", velicina);
    return 0;
}
