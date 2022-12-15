/*Example 4.2:
A company insures its drivers in the following cases:
If the driver is married.
- If the driver is unmarried, male & above 30 years of age.
- If the driver is unmarried, female & about 25 year of age.
*/
/* Insurance of driver - using logical operators */
#include <stdio.h>
int main()
{
    char sex, ms;
    int age;
    printf("Enter age, sex, marital status \n");
    scanf("%d %c%c", &age, &sex, &ms);
    if ((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))
        printf("Driver should be insured\n");
    else
        printf("Driver should not be insured\n");
    return 0;
}