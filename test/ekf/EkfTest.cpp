#include "gtest/gtest.h"
#include <Data.h>

TEST(EkfTest, SimpleTest) {
    auto data = Data(4, 3);
    EXPECT_EQ(4, data.stateValues());
    EXPECT_EQ(3, data.observables());
}
