#include <iostream>
#include <string>
#include <cmath>
#include "formatter_ex.h"
#include "solver.h"

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    auto [x1, x2] = solve(a, b, c);
    if (x1 != x1) {
        formatter(std::cout, "No real roots");
    } else {
        formatter(std::cout, "x1 = " + std::to_string(x1));
        formatter(std::cout, "x2 = " + std::to_string(x2));
    }
    return 0;
}
