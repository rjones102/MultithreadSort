#include "Sort.h"

// Constructors
Sort::Sort(char* list, int num) {
	size = num;
	dataItems = new char[size];
	dataItems = list;
}

// Destructor
Sort::~Sort() {
	delete dataItems;
}

// call mergeSort with parameters
void Sort::MERGESORT() {
	
	// Function will return if array's size passed is zero or one
	if (getSize() == 0 || getSize() == 1)
		return;

	mergeSort(dataItems, size);
}

// Return the number of items in the vector
int  Sort::getSize() const {
	return size;
}

// implement the merge sort algorithm
void Sort::mergeSort(char* list, int num) {
	
	if (num > 1) {
		int mid = num / 2;
		int leftovers = num - mid;

		mergeSort(list, mid);
		mergeSort(list + mid, leftovers);

		char* c = (char*)malloc(num * sizeof(char));

		merge(list, mid, list + mid, leftovers, c);
		free(c);
	}
}

// merge A and B to C in ascending order
void Sort::merge(char* A, int N, char* B, int M, char* C) {
	int i = 0, j = 0, k = 0;

	while (i < M && j < N) {
		if (A[i] < B[j])
			C[k++] = A[i++];
		else
			C[k++] = B[j++];
	}

	while (i < M)
		C[k++] = A[i++];

	while (j < N)
		C[k++] = B[j++];

	for (int i = 0; i < k; i++)
		A[i] = C[i];
}