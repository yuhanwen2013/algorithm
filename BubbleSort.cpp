#include <iostream>
using namespace std;

void BubbleSort(int arr[],int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j>i; j--)
		{
			if (arr[j]<arr[j - 1])
			{
				int t = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = t;

			}
		}
	}
	for (int i = 0; i < length; i++)
		cout << arr[i]<<" ";
}

int main(){
	int arr[6] = { 3, 20, 4, 50, 1, 2 };
	int lenght = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, lenght);
}