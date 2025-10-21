#include<stdio.h>
#include"arraylib.h"

int main(void){
	int a[]={3,1,4,5};
	int n=4;
	displayArray(a,n);
	findMaxIndex(a,n);
	findMinIndex(a,n);
	findAverage(a,n);
	reverseArray(a,n);
	displayArray(a,n);
	sortArray(a,n);
	displayArray(a,n);
	linearSearch(a,n,3);
	linearSearch(a,n,10);
	
	return 0;
}
