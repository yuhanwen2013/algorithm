#include <iostream>
using namespace std;
int InsertionSort(int arr[],int length){
	int i, j;
	int key;
	for (j = 1;j<length; j++)
	{
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i]>key)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
		for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
		return 0;
}
int main(){
	int arr[6] = { 3, 20, 4, 50 , 1, 2};
	int lenght = sizeof(arr) / sizeof(arr[0]);
	InsertionSort(arr,lenght);
}
/*笔记 2016/11/14
C语言中，定义数组后可以用sizeof命令获得数组的长度（即可容纳元素个数）。
但是通过传递数组名参数到子函数中，以获得数组长度是不可行的，因为在子函数当中，数组名会退化为一个指针。*/