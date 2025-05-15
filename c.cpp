#include<iostream>
#include<algorithm>
using namespace std;


int Size = 0;

int parent(int idx) {
	return idx / 2;
}
int Left(int idx) {
	return idx * 2;
}
int Right(int idx) {
	return idx * 2 + 1;
}
void insert(int *heap, int data) {
	//int size = sizeof(heap);//
	Size = Size + 1;
	
}

int remove(int* heap) {
	if (Size < 1) {
		cout << "Heap is empty";
	}

		int max = heap[1];
		heap[1] = heap[Size];
		Size = Size - 1;

		int i = 1;
		while(Left(i) <= Size) {
			int largest = i;
			int l = Left(i);
			int r = Right(i);

			if (l <= Size && heap[l] > heap[largest]) {
				largest = l;
			}
			if (r <= Size && heap[r] > heap[largest]) {
				largest = r;
			}
			if (largest == i) {
				break;
			}

			swap(heap[i], heap[largest]);
				i = largest;
			
		}
		return max;


	
}


int main() {
	int arr[] = { 10, 40, 30, 5, 12, 6, 15, 9, 60 };
	int heap[100];
	int* p = arr;
	cout << p[0] << endl;


}
