#include <limits.h>
#include <extract_bits.hpp>
#include <extract_bits_traditional_pass.hpp>
#include <extract_bits_fast_pass.hpp>
#include "gtest/gtest.h"
namespace {

/**
 * Traditional Pass Unit Tests
 */
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

TEST(TraditionalPassZeroTest, TraditionalZero) {
    ExtractBits * extractBits = new ExtractBitsTraditionalPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 0);
    delete extractBits;
    extractBits = nullptr;
    int size = longList.size();
    EXPECT_EQ(0, size);
}

TEST(TraditionalPassNegativeTest, TraditionalNegative) {
    ExtractBits * extractBits = new ExtractBitsTraditionalPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, -1);
    delete extractBits;
    extractBits = nullptr;
    int size = longList.size();
    EXPECT_EQ(0, size);
}

TEST(TraditionalPassLargeNumberTest, TraditionalLargeNumber) {
    ExtractBits * extractBits = new ExtractBitsTraditionalPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 123456);
    delete extractBits;
    extractBits = nullptr;
    int size = longList.size();
    EXPECT_EQ(6, size);
}

/**
 * Fast Pass Unit Tests
 */
TEST(FastPassTest, Fast) {
    ExtractBits * extractBits = new ExtractBitsFastPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 88);
    delete extractBits;
    extractBits = nullptr;
    EXPECT_EQ(8, longList.at(0));
    EXPECT_EQ(16, longList.at(1));
    EXPECT_EQ(64, longList.at(2));
}

TEST(FastPassZeroTest, FastZero) {
    ExtractBits * extractBits = new ExtractBitsFastPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 0);
    delete extractBits;
    extractBits = nullptr;
    int size = longList.size();
    EXPECT_EQ(0, size);
}

TEST(FastPassNegativeTest, FastNegative) {
    ExtractBits * extractBits = new ExtractBitsFastPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 0);
    delete extractBits;
    extractBits = nullptr;
    int size = longList.size();
    EXPECT_EQ(0, size);
}

TEST(FastPassLargeNumberTest, FastLargeNumber) {
    ExtractBits * extractBits = new ExtractBitsFastPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, 123456);
    delete extractBits;
    extractBits = nullptr;
    int size = longList.size();
    EXPECT_EQ(6, size);
}

}  // namespace
