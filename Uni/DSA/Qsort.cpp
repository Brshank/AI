#include<iostream>
using namespace std;
class Qsort
{
public:
void print(int arr[], int n)
{
	cout << "{";
	for (int i = 0; i < n; i++) {
		if (i + 1 != n)
			cout << arr[i] << ",";
		else
			cout << arr[i];
	}
	cout << "}";
}
void swap(int& m, int& n) {
	int temp = m;
	m = n;
	n = temp;
}
int RandomizedPartition(int* arr, int p, int q) {
	int r = p + rand() % (q - p + 1);
	swap(arr[r], arr[p]);
	int pivot = arr[p];
	int i = p;
	for (int j = p + 1; j <= q; j++) {
		if (arr[j] <= pivot) {
			i = i + 1;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[p], arr[i]);
	return i;
}

void RandomizedQuicksort(int* arr, int p, int q) {
	if (p < q) {
		int r = RandomizedPartition(arr, p, q);
		RandomizedQuicksort(arr, p, r - 1);
		RandomizedQuicksort(arr, r + 1, q);
	}
}
};

int main() {

    Qsort q;
	//Generate input array
    cout<<endl;
    int arr[]={-8,5,1,0,5,26,47,10,99,23,32};
    //Print input array
    cout << "Input array: ";
    q.print(arr, 11);
    
    q.RandomizedQuicksort(arr, 0, 10);
    
    //Print output array
    cout << "\nOutput array: ";
    q.print(arr, 11);
    cout << endl;

	return 0;
}