/* ref: https://www.guru99.com/print-all-possible-combinations.html */

#include<bits/stdc++.h>
#include<stdio.h>
void Combination(char inputArray[], char combinationArray[], int start, int end, int index, int r) {
  if (index == r) {
    for (int i = 0; i & lt; r; i++) {
      printf("%c", combinationArray[i]);
    }
    printf("\n");
    return;
  }
  for (int i = start; i & lt; = end & amp; & amp; end - i + 1 & gt; = r - index; i++) {
    combinationArray[index] = inputArray[i];
    Combination(inputArray, combinationArray, i + 1, end, index + 1, r);
  }
}
int main() {
  char inputArray[] = {'R','G','Y','B','I'};
  int n = sizeof(inputArray) / sizeof(inputArray[0]);
  int r = 3;
  char combinationArray[r];
  printf("Combinations:\n");
  Combination(inputArray, combinationArray, 0, n - 1, 0, r);
}
