//
//  476-1.c
//  LeetCode
//
//  Created by Murphy on 17/3/13.
//  Copyright © 2017年 Murphy. All rights reserved.
//

#include "476-1.h"
#include <limits.h>
int findComplement(int num) {
    int mask = INT_MAX;
    while (mask & num) mask <<= 1;
    return ~mask & ~num;
}
