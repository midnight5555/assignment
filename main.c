#include <stdio.h>
#include "functions.h"

int main()
{
struct patients patient[10];

populatepatient(patient);
printpatient(patient);

return 0;

}
