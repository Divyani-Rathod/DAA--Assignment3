#include <iostream>
using namespace std;

void cycle_Sort(int arr[], int n)
{
	int writes = 0;
	for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) 
    {
        int item = arr[cycle_start];
		int pos = cycle_start;
		for (int i = cycle_start + 1; i < n; i++)
			if (arr[i] < item)
				pos++;

		if (pos == cycle_start)
			continue;

		while (item == arr[pos])
			pos += 1;

		if (pos != cycle_start) {
			swap(item, arr[pos]);
			writes++;
		}

		while (pos != cycle_start) {
			pos = cycle_start;

			for (int i = cycle_start + 1; i < n; i++)
				if (arr[i] < item)
					pos += 1;

			while (item == arr[pos])
				pos += 1;

			if (item != arr[pos]) {
				swap(item, arr[pos]);
				writes++;
			}
		}
	}

}

int main()
{
	int arr[] = {25,5,10,66,35,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	cycle_Sort(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
