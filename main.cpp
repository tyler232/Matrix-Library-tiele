#include "tiele.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<double>> data_A = {{3, 1, 4},
                                               {2, 3, 6},
                                               {0, 5, 10}};
    std::vector<std::vector<double>> data_B = {{7, 1, 6},
                                               {2, 4, 8},
                                               {7, 3, 8}};
    std::vector<std::vector<double>> data_b = {{2},
                                               {4},
                                               {7}};
    std::vector<std::vector<double>> data_a = {{2, -2},
                                               {4, 3}};
    tiele::Matrix matrix_A(data_A);
    tiele::Matrix matrix_B(data_B);
    tiele::Matrix matrix_b(data_b);
    tiele::Matrix matrix_a(data_a);

    // tiele::Matrix matrix_C = tiele::addition(matrix_A, matrix_B);
    // std::cout << matrix_C << std::endl;
    // std::cout << std::endl;
    // tiele::Matrix matrix_D = tiele::subtraction(matrix_A, matrix_B);
    // std::cout << matrix_D << std::endl;
    // std::cout << std::endl;
    // tiele::Matrix matrix_E = tiele::multiplication(matrix_A, matrix_B);
    // std::cout << matrix_E << std::endl;
    // std::cout << std::endl;
    tiele::Matrix matrix_F = tiele::transpose(matrix_A);
    std::cout << matrix_F << std::endl;
    std::cout << std::endl;
    tiele::Matrix matrix_G = tiele::identity(3);
    std::cout << matrix_G << std::endl;
    std::cout << std::endl;

    tiele::Matrix matrix_H = tiele::inverse(matrix_A);
    std::cout << matrix_H << std::endl;
    std::cout << std::endl;

    tiele::Matrix matrix_I = tiele::solve(matrix_A, matrix_b);
    std::cout << matrix_I << std::endl;
    std::cout << std::endl;

    tiele::Matrix matrix_J = tiele::reduced_row_echelon(matrix_B);
    std::cout << matrix_J << std::endl;
    std::cout << std::endl;

    int r = tiele::matrix_rank(matrix_B);
    std::cout << r << std::endl;
    std::cout << std::endl;

    double d = tiele::det(matrix_a);
    std::cout << d << std::endl;
    std::cout << std::endl;

    double t = tiele::trace(matrix_A);
    std::cout << t << std::endl;
    std::cout << std::endl;

    double n = tiele::norm(matrix_A, std::numeric_limits<int>::infinity());
    std::cout << "Norm " << n << std::endl;
    std::cout << std::endl;

    double c = tiele::cond(matrix_A, std::numeric_limits<int>::infinity());
    std::cout << "Cond " << c << std::endl;
    std::cout << std::endl;

    std::cout << tiele::qrDecomposition(matrix_A).first << std::endl;
    std::cout << tiele::qrDecomposition(matrix_A).second << std::endl;


    std::cout << tiele::eigenvalues(matrix_A)[2] << std::endl;
    std::cout << tiele::eigenvectors(matrix_A)[0] << std::endl;

    std::cout << std::endl;
    std::cout << tiele::norm(matrix_A, 2) << std::endl;
    std::cout << tiele::cond(matrix_A, 2) << std::endl;

    std::cout << std::endl;
    std::cout << tiele::luDecomposition(matrix_A).first << std::endl;
    std::cout << tiele::luDecomposition(matrix_A).second << std::endl;

    std::cout << tiele::eigenvectors_asMatrix(matrix_A) << std::endl;

    std::cout << tiele::eigenvectors_normalized(matrix_A)[2] << std::endl;
    std::cout << tiele::eigenvectors_normalized_asMatrix(matrix_A) << std::endl;

    std::cout << tiele::eigen(matrix_A).second << std::endl;

    std::cout << tiele::svd(matrix_A)[0] << std::endl;

    std::cout << tiele::svd(matrix_A)[2] << std::endl;

    std::cout << tiele::svd(matrix_A)[1] << std::endl;

    std::cout << tiele::inner(tiele::transpose(tiele::Matrix({1, 2, 4})), 
                            tiele::transpose(tiele::Matrix({3, 2, 8}))) << std::endl;
    
    tiele::Matrix matrix_LL = tiele::reduced_row_echelon(matrix_A);
    std::cout << matrix_LL << std::endl;
    return 0;
}