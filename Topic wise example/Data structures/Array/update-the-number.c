// Update array element using One Dimensional Array in C
// This program is about to update and print the element in array using array and for loops

// Source Code
#include <stdio.h>
int main()
{
  int i, position, a[10], n, update;

  /*taking input from user*/
  printf("\nEnter the Limit: ");
  scanf("%d", &n);

  /*use for loop for enter the n nummber of value*/
  printf("Enter the Values: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  /*use this for loop for display the value */
  for (i = 0; i < n; i++)
  {
    printf("\nGiven values are: ");
    printf("a[%d]=%d", i, a[i]);
  }

  /*take position number for updating the number*/
  printf("\nEnter the position to be update: ");
  scanf("%d", &position);

  /*take input from user for update the pre given value*/
  printf("\nEnter the value to be update: ");
  scanf("%d", &update);

  /*use this for loop for updating the value old to new*/
  for (i = 0; i < n; i++)
  {
    if (i == position)
    {
      a[i] = update;
    }
  }

  /*use this for loop for print the updated loop*/
  printf("\nUpdated value is: ");
  for (i = 0; i < n; i++)
  {
    printf("\na[%d]=%d", i, a[i]);
  }
  return 0;
}

// output
/*Enter the Limit: 5
Enter the Values:
26
45666
32456
15
25

Given values are: a[0]=26
Given values are: a[1]=45666
Given values are: a[2]=32456
Given values are: a[3]=15
Given values are: a[4]=25
Enter the position to be update: 3

Enter the value to be update: 35000000

Updated value is:
a[0]=26
a[1]=45666
a[2]=32456
a[3]=35000000
a[4]=25  */