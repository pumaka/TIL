/* ref: https://www.guru99.com/print-all-possible-combinations.html */

// Method 1
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

// Method 2
#include<bits/stdc++.h>
#include<stdio.h>
void Combination(char inputArray[], char combinationArray[], int n, int r, int index, int i) {
  if (index == r) {
    for (int j = 0; j & lt; r; j++) {
      printf("%c", combinationArray[j]);
    }
    printf("\n");
    return;
  }
  if (i & gt; = n)
    return;
  combinationArray[index] = inputArray[i];
  Combination(inputArray, combinationArray, n, r, index + 1, i + 1);
  Combination(inputArray, combinationArray, n, r, index, i + 1);
}
int main() {
  char inputArray[] = {'R','G','Y','B','I'};
  int n = sizeof(inputArray) / sizeof(inputArray[0]);
  int r = 3;
  char combinationArray[r];
  printf("Combinations:\n");
  Combination(inputArray, combinationArray, n, r, 0, 0);
}
