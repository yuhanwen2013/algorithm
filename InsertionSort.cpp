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
/*�ʼ� 2016/11/14
C�����У���������������sizeof����������ĳ��ȣ���������Ԫ�ظ�������
����ͨ�������������������Ӻ����У��Ի�����鳤���ǲ����еģ���Ϊ���Ӻ������У����������˻�Ϊһ��ָ�롣*/