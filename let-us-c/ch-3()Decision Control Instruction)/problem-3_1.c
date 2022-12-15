//If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
//input
/* Calculate profit or loss */

#include <stdio.h>
int main()
{
	float cp, sp, p, l;
	printf("\nEnter cost price and selling price: ");
	scanf("%f %f", &cp, &sp);
	p = sp-cp;
	l = cp - sp ;
	if (p > 0)
	printf("The seller incurred loss of Rs. %.2f\n", p);
	if (l > 0)
	printf("The seller made a profit of Rs. %.2f\n", l);
	if (p == 0)
	printf("There is no loss, no profit\n");
	return 0;
}



//output
/*Enter cost price and selling price: 25 
15
The seller made a profit of Rs. 10.000000
*/
