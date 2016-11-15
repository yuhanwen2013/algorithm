#include <iostream>
using namespace std;

int SelectionSort(int arr[],int length)
{
	int len = length;
	int min;
	for (int i = 0; i<len - 1; i++)
	{
		min = arr[i];
		for (int j = i + 1; j<len; j++)
		{
			if (arr[j]<arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int t = arr[min];
			arr[min] = arr[i];
			arr[i] = t;
		}
	}
	for (int i = 0; i < length; i++)
		cout << arr[i]<<" ";
	return 0;
}

int main(){
	int arr[6] = { 3, 20, 4, 50, 1, 2 };
	int lenght = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr, lenght);
}