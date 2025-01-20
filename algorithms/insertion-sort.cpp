#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int array[8] = {948, 904, 314, 572, 950, 532, 31, 378};

	for(int i = 0; i < std::size(array); i++) {
		for(int j = i;j >= 0; j--) {
			if(array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}

	for(int i = 0; i < std::size(array); i++) {
		std::cout << array[i] << " ";
	}

	return 0;
}
