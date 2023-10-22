/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
  for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop
  int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }
  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
for (int i = 1; i <= n; i++) {
    if (i == n) {
      printf("%d", i);
    } else {
      printf("%d, ", i);
    }
  }
  printf("\n");
  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25
for (int i = 1; i <= n; i++) {
    if (i == n) {
      printf("%d", i * i);
    } else {
      printf("%d, ", i * i);
    }
  }
  printf("\n");
  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
    if (i == n) {
      printf("%d = %d\n", i, sum);
    } else {
      printf("%d + ", i);
    }
  }
  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
int sum_squares = 0;
  for (int i = 1; i <= n; i++) {
    sum_squares += i * i;
    if (i == n) {
      printf("%d^2 = %d\n", i, sum_squares);
    } else {
      printf("%d^2 + ", i);
    }
  }

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
int sum_even = 0;
  for (int i = 2; i <= n; i += 2) {
    sum_even += i;
    if (i == n || i + 2 > n) {
      printf("%d", i);
    } else {
      printf("%d + ", i);
    }
  }
  if (n % 2 == 0) {
    printf(" = %d\n", sum_even);
  } else {
    printf("\n");
  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
for (int i = 1; i <= n; i++) {
    if (i % 7 == 0 && i % 11 == 0) {
      printf("FooBar\n");
    } else if (i % 7 == 0) {
      printf("Foo\n");
    } else if (i % 11 == 0) {
      printf("Bar\n");
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}
