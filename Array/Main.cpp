/*
Bai1: Viết chương trình C++ nhập 10 giá trị nguyên, sau đó tìm giá trị lớn nhất, nhỏ nhất, 
tìm giá trị có tần suất xuất hiện nhiều nhất, 
***********************************************************
Bài 2: Tìm các số chính phương và nguyên tố trong mảng
Dòng 1: Nhập vào N là số lượng phần tử của mảng
Dòng 2: Nhập N số nguyên (mỗi số cách 1 khoảng trắng)
***********************************************************
Bai 3: Tìm các số âm và dương trong mảng
Dòng 1: Nhập vào N là số lượng phần tử của mảng
Dòng 2: Nhập N số nguyên (mỗi số cách 1 khoảng trắng)
**********************************************************
Bài 4: Tìm đường chéo chính của ma trận vuông NxN
- Dòng 1: Số nguyên N
- Dòng 2: Nhập N dòng, mỗi dòng gồm N số nguyên (cách nhau 1 khoảng trắng)
*/

#include<iostream>
#include "function.h"
using namespace std;

int main() {
	int A[1000], B[100][100];
	int n,m;//so phan tu mang 1 chieu
	cout << "Nhap so phan tu cua mang 1 chieu = ";
	cin >> n;
	cout << "Mang ma tran vuong cap:";
	cin >> m;

	//call nhap_mang 1 chieu function
	nhap_mang(A, n);

	//call nhap ma tran vuong
	nhap_mt_vuong(B, m);

	// min of array
	cout << "Min of array is " << min(A,n) << endl;

	//max of array
	cout << "Max of array is " << max(A,n) << endl;

	//so chinh phuong trong mang
	cout << "So chinh phuong la: ";
	so_cp(A, n);
	cout << "\n";

	//so nguyen to trong mang
	cout << "So nguyen to la: ";
	so_nt(A, n);
	cout << "\n";

	//so xuat hien nhieu nhat trong mang & tan so xuat hien
	cout << "Phan tu xuat hien nhieu nhat: " << max_fre(A, n);

	//xuat cac so am va cac so duong
	am_duong(A, n);

	//duong cheo cua ma tran vuong
	duong_cheo(B, m);
	return 0;
}