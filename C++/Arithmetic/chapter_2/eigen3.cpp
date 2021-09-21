#include <iostream>
#include "Eigen/Dense"

int main(void){
    Eigen::Matrix3d md;
    Eigen::Matrix3f mf;
    Eigen::Matrix3i mi;

    
    Eigen::Matrix<double,6,6> md6;
    Eigen::Matrix<double,2,3> md2_3;

    
    Eigen::Matrix3i A;

    
    // A << 1,1,1, 1,1,1, 1,1,1;
    A << 1,1,1, 1,1,1, 1,1,1;
    std::cout << "A << 1,1,1, 1,1,1, 1,1,1;\n" << A << "\n" << "-------------------\n";


    // B = Eigen::MatrixXd::zero(3,3);
    Eigen::MatrixXd B = Eigen::MatrixXd::Zero(3, 3);
    std::cout << "B = Eigen::MatrixXd::zero(3,3);\n" << B << "\n" << "-------------------\n";

    // C = Eigen::MatrixXd::one(3,3);
    Eigen::MatrixXd C = Eigen::MatrixXd::Ones(3, 3);
    std::cout << "C = Eigen::MatrixXd::Ones(3, 3);\n" << C << "\n" << "-------------------\n";

    






}