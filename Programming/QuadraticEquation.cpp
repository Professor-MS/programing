#include <iostream>
#include <cmath>
#include <iomanip>

void solveQuadratic(double a, double b, double c)
{
    std::cout << "Given quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0\n";

    // Step 1: Check if the equation is quadratic
    if (a == 0)
    {
        std::cout << "Step 1: Since a = 0, this is not a quadratic equation.\n";
        if (b == 0)
        {
            std::cout << "Step 2: Both a = 0 and b = 0, so ";
            if (c == 0)
            {
                std::cout << "the equation has infinitely many solutions.\n";
            }
            else
            {
                std::cout << "the equation has no solution.\n";
            }
        }
        else
        {
            std::cout << "Step 2: Solving the linear equation: " << b << "x + " << c << " = 0\n";
            double x = -c / b;
            std::cout << "Solution: x = " << x << "\n";
        }
        return;
    }

    // Step 2: Calculate the discriminant
    double discriminant = b * b - 4 * a * c;
    std::cout << "Step 2: Calculate the discriminant D = b^2 - 4ac\n";
    std::cout << "D = " << b << "^2 - 4 * " << a << " * " << c << " = " << discriminant << "\n";

    // Step 3: Determine the nature of the roots based on the discriminant
    if (discriminant > 0)
    {
        std::cout << "Step 3: Since D > 0, the equation has two distinct real roots.\n";
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Step 4: Calculate the roots using the quadratic formula:\n";
        std::cout << "x1 = (-b + sqrt(D)) / (2a) = (" << -b << " + " << sqrt(discriminant) << ") / " << 2 * a << " = " << x1 << "\n";
        std::cout << "x2 = (-b - sqrt(D)) / (2a) = (" << -b << " - " << sqrt(discriminant) << ") / " << 2 * a << " = " << x2 << "\n";
    }
    else if (discriminant == 0)
    {
        std::cout << "Step 3: Since D = 0, the equation has one real root (a double root).\n";
        double x = -b / (2 * a);
        std::cout << "Step 4: Calculate the root:\n";
        std::cout << "x = -b / (2a) = " << -b << " / " << 2 * a << " = " << x << "\n";
    }
    else
    {
        std::cout << "Step 3: Since D < 0, the equation has two complex roots.\n";
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Step 4: Calculate the roots:\n";
        std::cout << "Real part = -b / (2a) = " << -b << " / " << 2 * a << " = " << realPart << "\n";
        std::cout << "Imaginary part = sqrt(-D) / (2a) = sqrt(" << -discriminant << ") / " << 2 * a << " = " << imagPart << "\n";
        std::cout << "x1 = " << realPart << " + " << imagPart << "i\n";
        std::cout << "x2 = " << realPart << " - " << imagPart << "i\n";
    }
}

int main()
{
    double a, b, c;

    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    solveQuadratic(a, b, c);

    return 0;
}
