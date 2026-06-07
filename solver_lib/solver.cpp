#include "solver.h"
#include <cmath>

std::pair<double, double> solve(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return {std::nan(""), std::nan("")};
    }
    double sqrt_d = sqrt(d);
    double x1 = (-b - sqrt_d) / (2 * a);
    double x2 = (-b + sqrt_d) / (2 * a);
    return {x1, x2};
}
