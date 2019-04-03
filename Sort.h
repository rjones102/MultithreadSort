#ifndef SORT_H
#define SORT_H

template <class DataType>
class Sort {
public:
	// Constructor
	Sort(char* list, int num);

	// Deconstructor
	~Sort();

	// Manipulation Operation
	void MERGESORT();		// Calls mergeSort()

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
