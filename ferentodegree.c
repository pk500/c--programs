
#include <stdio.h>
main()
{
int fahr;
for (fahr = 0; fahr <= 300; fahr = fahr + 20)
printf("%3o      %6.1f", fahr, (5.0/9.0)*(fahr-32),);
}
