 #include <stdlib.h>
 #include <time.h>
 #include <stdio.h>
4  
5 /**/
6 main - Determine whether the number is positive, negative or zero.
7
8 Return : always 0 (Success)
9
10 int main(void)
11 {
12 int n;
13
14 srand(time(0));
15 n = rand() - RAND_MAX / 2;
16 if (n > 0)
17 {
18 printf("%d is positive\n", n);
19 }
20 else if (n == 0)
21 {
22 printf("%d is zero\n", n);
23 }
24 else
25 {
26 printf("%d is negative\n", n);
27 }
28 return (0);
