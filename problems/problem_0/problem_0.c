/**
 * A number is a perfect square, or a square number, if it is the square of a positive integer.
 * For example, 25 is a square number because  5^2 = 5 * 5 = 25; it is also an odd square.
 * The first 5 square numbers are: 1, 4, and the sum of the odd squares is.
 * Among the first 651 thousand square numbers, what is the sum of all the odd squares?
 */

#include <stdio.h>
#include <assert.h>

int main() {
   // Iterative "non-mathematical" first approach (O(n))
   long sum = 0;

   for (long i = 1; i <= 651000; i++) {
      long square = i * i;
      if (square % 2 == 1) {
         sum += square;
      }
   }

   // Mathematical approach / using the formula for 0(1)
   long n_odd = 651000 / 2;
   long math_sum = n_odd * (4 * n_odd * n_odd - 1) / 3;

   assert(math_sum == sum);

   printf("%ld\n", math_sum);
   return 0;
}
