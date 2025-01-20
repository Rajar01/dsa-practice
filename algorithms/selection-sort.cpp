#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int array[8] = {657, 860, 708, 871, 984, 399, 509, 532};
	int currentMinIndex;

	for(int i = 0; i < std::size(array); i++) {
		currentMinIndex = i;

		for(int j = i + 1; j < std::size(array); j++) {
			if(array[currentMinIndex] > array[j]) {
				currentMinIndex = j;
			}	
		}

		swap(array[i], array[currentMinIndex]);
	}

	for(int i = 0; i < std::size(array); i++) {
		std::cout << array[i] << " ";
	}

	return 0;
}
