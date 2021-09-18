// CPP code for optimized implementation
#include <bits/stdc++.h>
using namespace std;

// Returns sum of elements in X[]
int getSum(int X[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += X[i];
	return sum;
}

// Finds value of
// a - b = (sumA - sumB) / 2
int getTarget(int A[], int n, int B[], int m)
{
	// Calculation of sums from both arrays
	int sum1 = getSum(A, n);
	int sum2 = getSum(B, m);

	// because that the target must be an integer
	if ((sum1 - sum2) % 2 != 0)
		return 0;
	return ((sum1 - sum2) / 2);
}

// Prints elements to be swapped
void findSwapValues(int A[], int n, int B[], int m)
{
	// Call for sorting the arrays
	sort(A, A + n);
	sort(B, B + m);

	// Note that target can be negative
	int target = getTarget(A, n, B, m);

	// target 0 means, answer is not possible
	if (target == 0)
		return;

	int i = 0, j = 0;
	while (i < n && j < m) {
		int diff = A[i] - B[j];
		if (diff == target) {
			cout << A[i] << " " << B[j];
			return;
		}

		// Look for a greater value in A[]
		else if (diff < target)
			i++;

		// Look for a greater value in B[]
		else
			j++;
	}
}

// Driver code
int main()
{
	int A[] = { 4, 1, 2, 1, 1, 2 };
	int n = sizeof(A) / sizeof(A[0]);

	int B[] = { 1, 6, 3, 3 };
	int m = sizeof(B) / sizeof(B[0]);

	findSwapValues(A, n, B, m);
	return 0;
}
