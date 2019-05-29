#include "function.h"

// nhap mang 1 chieu
void nhap_mang(int A[], int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << "A[" << i << "] = ";
		std::cin >> A[i];
	}
}

//nhap mang ma tran vuong
void nhap_mt_vuong(int B[100][100], int m) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << "B[" << i << "][" << j << "] = ";
			std::cin >> B[i][j] ;
		}
	}
}

//xuat duong cheo cua ma tran vuong
void duong_cheo(int B[100][100], int m) {
	std::cout << "Duong cheo cua ma tran vuong la: ";
	for (int i = 0; i < m; i++)
	{
		std::cout << B[i][i] << "\t";
	}
}

void xuat_mang(int A[], int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << A[i] << "\t";
	}
}

//define min function
int min(int A[], int n) {
	int min = A[0];
	for (int i = 0; i < n; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	return min;
}

//define max funtion
int max(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < 10; i++)
	{
		if (A[i] > max) {
			max = A[i];
		}
	}
	return max;
}

//define function tim so chinh phuong
void so_cp(int A[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (sqrt(A[i]) * sqrt(A[i]) == A[i]) {
			std::cout << A[i] << "\t";
		}
	}
}

//define function tim so nguyen to trong mang
void so_nt(int A[], int n) {
		bool test;
		for (int i = 0; i < n; i++) {
			if (A[i] >= 2) {
				test = true;
				for (int j = 2; j <= sqrt(A[i]); j++) {
					if (A[i] % j == 0) {
						test = false;
						break;
					}
				}
				if (test) {

					std::cout << A[i] << "\t";
				}
			}
		}
}

//define function tim so xuat hien nhieu nhat
int max_fre(int A[], int n) {
	int max = 0;//so lan xuat hien nhieu nhat
	int fre = 0;//dem so lan xuat hien
	int index = 0;//chi so cua phan tu mang co  lan xuat hien nhieu nhat
	for (int i = 0; i < n-1; i++)
	{
		if (A[i] == A[i + 1]) {
			fre++;
		}
		if (max < fre) {
			max = fre;
			index = i;
		}
	}
	return (A[index]);
}

//define function tim cac so am, duong trong mang
void am_duong(int A[], int n) {
	std::cout << "cac so am trong mang: ";
	for (int i = 0; i < n; i++)
	{
		if (A[i] < 0) {
			std::cout << A[i] << "\t";//in so am
		}
	}

	std::cout << "\n";

	std::cout << "cac so duong trong mang: ";
	for (int i = 0; i < n; i++)
	{
		if (A[i] >= 0) {
			std::cout << A[i] << "\t";//in so duong
		}
	}
	
}