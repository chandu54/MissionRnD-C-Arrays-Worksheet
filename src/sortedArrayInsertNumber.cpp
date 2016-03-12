/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
#include<stddef.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{   
	
	int index = 0, pos, newindex, temp;
	if (len<0 || Arr == NULL)
		return NULL;
	else if (Arr[len - 1] < num)
	{
		Arr[len] = num;
		len++;
		return Arr;
	}
	else
	{
		 /*Arr = (int*)realloc(Arr, sizeof(int)*(len + 1));*/
		while (Arr[index] <= num)
			index++;
		pos = index;
		index = len - 1;
		newindex = len;
		while (index >= pos)
		{
			temp = Arr[index];
			Arr[index] = Arr[newindex];
			Arr[newindex] = temp;
			index--;
			newindex--;
		}
		Arr[pos] = num;
		return Arr;
	}
}