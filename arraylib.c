#include<stdio.h>
#include"arraylib.h"

void displayArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}

int findMaxIndex(int arr[],int size)
{
	printf("Last Index Value %d\n",arr[size-1]);
}

int findMinIndex(int arr[],int size)
{
	printf("Min Index Value %d\n",arr[0]);	
}
float findAverage(int arr[], int size)
{
	float sum=0;
	int i;
	for(i=0;i<size;i++){
		sum+=arr[i];
	}
	printf("Avg is %.2f\n",sum/size);
	
}



void reverseArray(int arr[],int size)
{
	int a;
	for(int i=0;i<size/2;i++){
		a=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=a;
	}
	printf("Array reversed\n");
}

void sortArray(int arr[],int size)
{
	int a;
	for(int i=0;i<size/2;i++){
		for(int j=i=1;j<size;j++){
			if(arr[i]>arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
				
			}
		}
    }
    printf("Array sorted in ascending order\n");
}



int linearSearch(int arr[],int size,int value)
{
	for(int i=0;i<size;i++){
		if(arr[i]==value){
			printf("Value %d found at index %d\n",value,i);
			return i;
		}
		
	}
	printf("Value %d not found in array.\n",value);
	return -1;
}
