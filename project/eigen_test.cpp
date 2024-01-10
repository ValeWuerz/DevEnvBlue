#include "eigen_test.h"

int main() {
    MatrixXd mat(2,2);
    mat(0,0) = 3;
    mat(1,0) = 3;
    mat(0,1) = 3;
    mat(1,1) = 1;
    cout << mat << endl;
    // ... rest of your code ...
}

