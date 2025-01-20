#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int array[8] = {114, 523, 562, 567, 665, 496, 598, 535};
	bool isSorted;

	do {
		isSorted = true;

		for(int i = 0; i < std::size(array) - 1; i++) {
			if(array[i] > array [i+1]) {
				swap(array[i], array[i+1]);
				isSorted = false;
			}
		}
	} while(!isSorted);

	for(int i = 0; i < std::size(array); i++) {
		std::cout << array[i] << " ";
	}

	return 0;
}
