#ifndef HEADER_H
#define HEADER_H

/******************************************************************/

const int SIZE = 11;

/******************************************************************/

void display(int list[], int len);

void binary_sort(int a[], int left, int right);

void sort(int a[], int len);

int min_after(int a[],int pos, int len);

void swap(int& first, int& second);

int binary_search(int value, int list[], int first, int last);

/******************************************************************/

#endif
