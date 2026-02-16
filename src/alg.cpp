// Copyright 2025 UNN-CS
#include "alg.h"
#include <cstdint>

bool checkPrime(uint64_t value) {
  bool isPrime = true;
  if (value == 0 || value == 1) {
    isPrime = false;
  }

  for (int i = 2; i * i <= value; i++) {
    if (value % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

uint64_t nPrime(uint64_t n) {
  int pos = 1;
  int num = 2;
  if (n == 1)
    return 2;
  while (pos < n) {
    num++;
    if (checkPrime(num) == true)
      pos++;
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  value += 1;
  while (checkPrime(value) != true) {
    value++;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t first = 2;
  uint64_t sumP = 0;
  if (hbound <= 2)
    return 0;
  while (first < hbound) {
    sumP += first;
    first = nextPrime(first);
  }
  return sumP;
}
