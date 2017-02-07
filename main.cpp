#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

int mySum(int a, int b) {
    int r;
    r = a + b;
    return r;
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    int x = RUN_ALL_TESTS();

    int v1, v2, sum;
    std::cout << "Please enter two integers: " << std::endl;
    std::cin >> v1 >> v2;

    sum = mySum(v1, v2);
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << sum;

    return x;
}