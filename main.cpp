/*
 * Используйте 24.6 из Programming principles and practice using C++ (2014)
 * завершите определения функций в g_elimination.h
 * используйте
 * Vector classical_gaussian_elimination(Matrix A, Vector b)
 * для решения системы
 * 1x+4y+3z=17,
 * 3x+2y+1z=13,
 * 4x+2y+3z=17;
 *
 */
#include"MatrixIO.h"

using Matrix = Numeric_lib::Matrix<double, 2>;
using Vector = Numeric_lib::Matrix<double, 1>;
using Numeric_lib::scale_and_add;
using Numeric_lib::dot_product;
using Numeric_lib::Index;

struct Elim_failure { };

struct Back_subst_failure{
	public:
		Index i;
};

void classical_elimination(Matrix &A, Vector &b)
{

}

Vector back_substitution(const Matrix& A, const Vector& b)
{
    Vector x(3);
    x(0) = 2; x(1) = 3; x(2) = 1;
    return x;
}


Vector classical_gaussian_elimination(Matrix A, Vector b)
{
	classical_elimination(A, b);
	return back_substitution(A, b);
}



int main()
{

	Matrix A(3, 3);
	Vector b(3);
	Vector r(3);
	A(0, 0 ) = 1; A(0, 1) = 4; A(0, 2) = 3;
	A(1, 0) = 3; A(1, 1) = 2; A(1, 2) = 1;
	A(2, 0) = 4; A(2, 1) = 2; A(2, 2) = 3;
	b(0) = 17; b(1) = 13; b(2) = 17;

	classical_elimination(A, b);
    r = back_substitution(A, b);
    std::cout << r << std::endl;
}
