/******************************************************************/
#include <iostream>

using namespace std;

#include "header.h"

/******************************************************************/

void display(int list[], int len)
{
	for(int i = 0; i < len; i++)
	{
		cout << list[i] << " | ";
	}
	cout << endl;
}

void binary_sort(int list[], int left, int right)
{
	int pivot = list[(left+right)/2];
	int left_arrow = left;
	int right_arrow = right;
	
	do
	{
		while (list[right_arrow] > pivot)
		{
			right_arrow--;
		}
		while (list[left_arrow] < pivot)
		{
			left_arrow++;
		}
		if (left_arrow <= right_arrow)
		{
			swap(list[left_arrow],list[right_arrow]);
			left_arrow++;
			right_arrow--;
		}
	}
	while (right_arrow >= left_arrow);
	if (left < right_arrow)	
		binary_sort(list, left, right_arrow);
	if (right > left_arrow)
		binary_sort(list, left_arrow, right);
	
}

void sort(int a[], int len)
{
	int index = 0;
	int min = 0;
	for (; index < len; index++)
	{
		min = min_after(a,index,len);
		swap(a[index],a[min]);
	}
}

int min_after(int a[], int pos, int len)
{
	int min = pos;
	for (int i = pos; i < len; i++)
	{
		if (a[i] < a[min])
			min = i;
	}
	return min;
}

void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

int binary_search(int value, int list[], int first, int last)
{
	int index;
	
	if (first > last)
		return -1;
	else
	{
		index = (last+first)/2;
		if (list[index] == value)
			return index;
		else if (value < list[index])
			return binary_search(value,list,first,index - 1);
		else if (value > list[index])
			return binary_search(value,list,index + 1,last);
	}
	return -2; //SHOULD NEVER GET HERE
}


/******************************************************************/
