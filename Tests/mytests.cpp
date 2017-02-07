//
// Created by mgalactico on 2/5/17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "mytest.h"

TEST (TestSum, Test1) {
    EXPECT_EQ(11, mySum(6, 5));
}

TEST (TestSum, Test2) {
    EXPECT_NE(11, mySum(6, 4));
}