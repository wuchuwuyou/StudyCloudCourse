#include "stdio.h"
#include "stdlib.h"

// int peakIndexInMountainArray(int* A, int ASize) {
//     int max = 0;
//     int index = 0;
//     for(size_t i = 0; i < ASize; i++)
//     {
//         if (max<A[i]) {
//             max = A[i];
//             index = i;
//         }
//     }
//     return index;
// }
int peakIndexInMountainArray(int* A, int ASize) {
    int l = 0;
    int r = ASize;
    while (l < r) {
      int m = l + (r - l) / 2;
      if (A[m] > A[m + 1])
        r = m;
      else
        l = m + 1;
    }
    return l;
}



int main(int argc, char const *argv[])
{

    return 0;
}
