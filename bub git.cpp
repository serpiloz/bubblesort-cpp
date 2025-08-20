#include <iostream>
#include <algorithm>
using namespace std;

void bubblesortArray(int array[], int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
	
	if(array[j]>array[j+1]){
		swap(array[j],array[j+1]);
}
}
}
int main() {
    int Array[] = {50,0,10,30,20,40};
    int size = sizeof(Array) / sizeof(Array[0]);

    cout << "dizi:";
    for (int i = 0; i < size; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;

    bubblesortArray(Array, size);

    cout << "yeni hali:";
    for (int i = 0; i < size; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

