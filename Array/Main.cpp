/*
Viết chương trình C++ nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất, 
tìm giá trị có tần suất xuất hiện nhiều nhất, sắp xếp mảng theo thứ tự tăng dần, giảm dần 
và hiển thị kết quả.
*/

#include<iostream>
#include "min.h"
using namespace std;

int main() {
	int A[10];
	//nhap gia tri cho mang
	for (int i = 0; i < 10; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}

	// min of array
	cout << "Min of array is " << min(A) << endl;

	//max of array
	cout << "Max of array is " << max(A) << endl;

	//xuat gia tri cua mang
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << "\t";
	}

	return 0;
}