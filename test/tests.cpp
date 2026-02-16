// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime1) {
  uint64_t res = checkPrime(3);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime2) {
  uint64_t res = checkPrime(11);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime3) {
  uint64_t res = checkPrime(13);
  bool expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkNotPrime1) {
  uint64_t res = checkPrime(200);
  bool expected = true;
  EXPECT_NE(expected, res);
}

TEST(st1, checkNotPrime2) {
  uint64_t res = checkPrime(1500);
  bool expected = true;
  EXPECT_NE(expected, res);
}

TEST(st1, checkNotPrime3) {
  uint64_t res = checkPrime(5024);
  bool expected = true;
  EXPECT_NE(expected, res);
}

TEST(st1, checkNextPrime1) {
  uint64_t res = nextPrime(4);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkNextPrime2) {
  uint64_t res = nextPrime(6);
  uint64_t expected = 7;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkNextPrime3) {
  uint64_t res = nextPrime(22);
  uint64_t expected = 23;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkNotNextPrime1) {
  uint64_t res = nextPrime(21);
  uint64_t expected = 22;
  EXPECT_NE(expected, res);
}

TEST(st1, checkNotNextPrime2) {
  uint64_t res = nextPrime(100);
  uint64_t expected = 105;
  EXPECT_NE(expected, res);
}

TEST(st1, checkNotNextPrime3) {
  uint64_t res = nextPrime(500);
  uint64_t expected = 501;
  EXPECT_NE(expected, res);
}

TEST(st1, checkNPrime1) {
  uint64_t res = nPrime(6);
  EXPECT_EQ(13, res);
}

TEST(st1, checkNPrime2) {
  uint64_t res = nPrime(500);
  EXPECT_EQ(3571, res);
}
