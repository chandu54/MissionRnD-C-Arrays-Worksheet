/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
#include<stddef.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int index = 0, temp1, temp2, pos1, pos2;
	if (len < 1 || Arr == NULL)
		return NULL;
	else{
		while (Arr[index] < Arr[index + 1])
			index++;
		temp1 = Arr[index];
		pos1 = index;
		index = index + 1;
		while (Arr[index] < Arr[index + 1])
			index++;
		temp2 = Arr[index + 1];
		pos2 = index + 1;
		Arr[pos1] = temp2;
		Arr[pos2] = temp1;
	}
}