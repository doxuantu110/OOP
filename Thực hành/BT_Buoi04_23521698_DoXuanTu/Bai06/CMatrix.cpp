#include "CMatrix.h"
int CMatrix::getHang() const{
	return vMatrix.size();
}
int CMatrix::getCot() const{
	if (vMatrix.empty()) {
		return 0;
	}
	return vMatrix[0].size();
}
float CMatrix::operator()(int row, int col) const {
	return vMatrix[row][col];
}

istream& operator >> (istream& is, CMatrix& M) {
	int rows, cols;
	std::cout << "Nhap so hang va so cot cua ma tran: ";
	is >> rows >> cols;
	M.vMatrix.resize(rows, std::vector<float>(cols));
	std::cout << "Nhap cac phan tu cua ma tran:" << std::endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cout << "Nhap phan tu thu (" << i + 1 << ", " << j + 1 << "): ";
			is >> M.vMatrix[i][j];
		}
	}
	return is;
}

ostream& operator << (ostream& os, CMatrix M) {
	os << "Ma tran: " << std::endl;
	for (int i = 0; i < M.getHang(); ++i) {
		for (int j = 0; j < M.getCot(); ++j) {
			os << M.vMatrix[i][j] << " ";
		}
		os << std::endl;
	}
	return os;
}

CMatrix CMatrix::operator+(const CMatrix& A) const {
	if (getHang() != A.getHang() || getCot() != A.getCot()) {
		cout << "Hai ma tran khong cung kich thuoc." << endl;
		return CMatrix();
	}

	CMatrix result;
	result.vMatrix.resize(getHang(), std::vector<float>(getCot()));
	for (int i = 0; i < getHang(); ++i) {
		for (int j = 0; j < getCot(); ++j) {
			result.vMatrix[i][j] = vMatrix[i][j] + A(i, j);
		}
	}
	return result;
}

CMatrix CMatrix::operator-(const CMatrix& A) const {
	if (getHang() != A.getHang() || getCot() != A.getCot()) {
		cout << "Hai ma tran khong cung kich thuoc." << endl;
		return CMatrix();
	}

	CMatrix result;
	result.vMatrix.resize(getHang(), std::vector<float>(getCot()));
	for (int i = 0; i < getHang(); ++i) {
		for (int j = 0; j < getCot(); ++j) {
			result.vMatrix[i][j] = vMatrix[i][j] - A(i, j);
		}
	}
	return result;
}
CMatrix CMatrix::operator*(CMatrix& A) const {
	if (getCot() != A.getHang()) {
		std::cout << "So cot cua ma tran dau phai bang so hang cua ma tran sau." << std::endl;
		return CMatrix();
	}

	CMatrix result;
	result.vMatrix.resize(getHang(), std::vector<float>(A.getCot(), 0.0));
	for (int i = 0; i < getHang(); ++i) {
		for (int j = 0; j < A.getCot(); ++j) {
			for (int k = 0; k < getCot(); ++k) {
				result.vMatrix[i][j] += vMatrix[i][k] * A.vMatrix[k][j];
			}
		}
	}
	return result;
}

CMatrix CMatrix::operator*(CVector& V) const {
	if (getCot() != 1) {
		cout << "So cot cua ma tran phai bang 1 de nhan voi vector." << endl;
		return CMatrix();
	}

	CMatrix result;
	result.vMatrix.resize(getHang(), std::vector<float>(V.getSoChieu(), 0.0));
	for (int i = 0; i < getHang(); ++i) {
		for (int j = 0; j < V.getSoChieu(); ++j) {
			result.vMatrix[i][j] = vMatrix[i][0] * V.getVector()[j];
		}
	}
	return result;
}
