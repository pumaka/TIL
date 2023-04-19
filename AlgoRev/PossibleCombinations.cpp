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


//from GG
// C++ program to print all combination
// of size r in an array of size n
#include<bits/stdc++.h>
using namespace std;
 
void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r);
 
// The main function that prints
// all combinations of size r
// in arr[] of size n. This function
// mainly uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
    // A temporary array to store
    // all combination one by one
    int data[r];
 
    // Print all combination using
    // temporary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 
/* arr[] ---> Input Array
data[] ---> Temporary array to
store current combination
start & end ---> Starting and
Ending indexes in arr[]
index ---> Current index in data[]
r ---> Size of a combination to be printed */
void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r)
{
    // Current combination is ready
    // to be printed, print it
    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data[j] << " ";
        cout << endl;
        return;
    }
 
    // replace index with all possible
    // elements. The condition "end-i+1 >= r-index"
    // makes sure that including one element
    // at index will make a combination with
    // remaining elements at remaining positions
    for (int i = start; i <= end &&
        end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1,
                        end, index+1, r);
    }
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
}
 
// This code is contributed by rathbhupendra
