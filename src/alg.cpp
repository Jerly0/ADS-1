// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrime(uint64_t value) {
for(uint64_t i = 2; i < sqrt(value); i++) {
  if (value % i == 0) {
    return false;
  }
}
return true;
}

uint64_t nPrime(uint64_t n) {
uint64_t k = 1;
uint64_t k1 = 0;
for(uint64_t t = 3; t < n; t++) {
for(uint64_t i = 2; i < t; i++) {
  if (value % i == 0) {
    k1 = 0;
  } else {
    k = k + 1;
  }
}
}
return k;
}

uint64_t nextPrime(uint64_t value) {
return 0;
}

uint64_t sumPrime(uint64_t hbound) {
return 0;
}
