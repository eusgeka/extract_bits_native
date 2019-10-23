#include <limits.h>
#include <extract_bits.hpp>
#include <extract_bits_traditional_pass.hpp>
#include "gtest/gtest.h"
namespace {

TEST(TraditionalPassTest, Traditional) {
    ExtractBits * extractBits = new ExtractBitsTraditionalPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 88);
    delete extractBits;
    extractBits = nullptr;
    EXPECT_EQ(8, longList.at(0));
    EXPECT_EQ(16, longList.at(1));
    EXPECT_EQ(64, longList.at(2));
}

}  // namespace
