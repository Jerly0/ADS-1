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
uint64_t l = 1;
uint64_t ifsimp;
for(uint64_t i = 3; i <= n; i++) {
  ifsimp = 0;
for(uint64_t k = 2; k < i; k++) {
  if (i % k == 0) {
    ifsimp = ifsimp + 1;
  }
}
  if (ifsimp == 0) {
    l = l + 1;
}
}
return l;
}

uint64_t nextPrime(uint64_t value) {
return 0;
}

uint64_t sumPrime(uint64_t hbound) {
return 0;
}
