#include "Math.hpp"

int math::square(double base, double exp) {
    double result = 1.0;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}