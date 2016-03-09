/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
#include<stddef.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int index1, position, newindex;
	if (Arr == NULL)
		return -1;
	if (len >= 1)
	{
		for (index1 = 0; index1 < len; index1++)
		{
		 for (position = index1 + 1; position< len;)
			{
			 if (Arr[position] == Arr[index1])
				{
				 for (newindex = position; newindex < len; newindex++) 
					Arr[newindex] = Arr[newindex + 1];
					len--;
				}
				else
			    	position++;
			}
		}
	}
	else
	return -1;
}