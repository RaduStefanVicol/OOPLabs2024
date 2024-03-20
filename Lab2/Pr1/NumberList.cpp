#include "NumberList.h"
#include <stdio.h>
void NumberList::Init()
{
	this->count = 0;
}
	
// count will be 0
bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	this->count++;
	if (count >= 10) return false;
	return true;
}
// adds X to the numbers list and increase the data member count.
// if count is bigger or equal to 10, the function will return false
void NumberList::Sort()
{
    //bubble sort
	int i, j, aux, da=1;
	while (da)
	{da=0;
	 for (i=0;i<count-1;i++)
	     if (numbers[i]>numbers[i+1])
		 {
		    da=1;
			aux = numbers[i]; 
			numbers[i] = numbers[i + 1]; 
			numbers[i + 1] = aux;
			//swap(a[i],a[i+1]);
		 }
	
	}

}

// will sort the numbers vector
void NumberList::Print()
{
	int i,c = this->count;
	for (i = 0; i < c; i++)
	{
		printf("%d\n", numbers[i]);
	}


}