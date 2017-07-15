#include "eleventh-argument.h"
#define COUNT_ARGUMENTS(...) ELEVENTH_ARGUMENT(__VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
