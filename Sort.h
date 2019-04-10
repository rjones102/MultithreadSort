#ifndef SORT_H
#define SORT_H

class Sort {
public:
	// Constructor
	Sort(char* list, int num);

	// Deconstructor
	~Sort();

	// Calls mergeSort()
	void MERGESORT();		

	// Reading data
	int getSize() const;

private:
	// Data members
	int size;
	DataType* dataItems;

	void mergeSort(char *list, int num); // implement the merge sort algorithm
	void merge(char *A, int N, char *B, int M, char* C); // merge A and B to C in ascending order
}

#endif // !SORT_H
