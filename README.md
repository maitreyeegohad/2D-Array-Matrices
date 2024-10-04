# 2D-Array-Matrices
# Aim:
To study and implement C++ 2D Array - Matrices.
# Software Used:
Visual Studio Code.
# Theory:
A 2D array in C++ is an array of arrays, meaning it's a collection of elements arranged in a grid or table with rows and columns. This type of array is commonly referred to as a matrix.
## Syntax:
`data_type array_name[rows][columns];`
```cpp
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[2][3];

    cout<<"Enter 6 numbers: ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
```
# Algorithms:
### A. Displaying a 2D Array Matrix:
**Step 1:** Start.

**Step 2:** Declare a 2D integer array arr with 2 rows and 3 columns.

**Step 3:** Declare integer variables i and j for loop counters.

**Step 4:** Display the message "Enter 6 numbers: " to prompt the user for input.

**Step 5:** Use a nested for loop to input values into the 2D array arr:   
Outer loop: Iterate i from 0 to 1 (for each row).   
Inner loop: Iterate j from 0 to 2 (for each column within the current row).   
Step 5.1: In each iteration of the inner loop, take input from the user and store it in arr[i][j].

**Step 6:** Use another nested for loop to print the elements of the 2D array:   
Outer loop: Iterate i from 0 to 1 (for each row).   
Inner loop: Iterate j from 0 to 2 (for each column within the current row).   
Step 6.1: In each iteration of the inner loop, print the value of arr[i][j] followed by a space.   
Step 6.2: After the inner loop completes (i.e., after printing all elements in a row), print a newline to move to the next row.   

**Step 7:** End.

### B. Adding two 2D Array Matrices:
**Step 1:** Start.

**Step 2:** Declare two 2D integer arrays, matrix1 and matrix2, with dimensions of 2 rows and 3 columns to hold the input matrices.

**Step 3:** Declare a 2D integer array result with the same dimensions to store the sum of the two matrices.

**Step 4:** Declare integer variables i and j for loop counters.

**Step 5:** Display the message "Enter elements for the first matrix (2x3): " to prompt the user for input.

**Step 6:** Use a nested for loop to input values into the first 2D array matrix1:
<br>Outer loop: Iterate i from 0 to 1 (for each row).
<br>Inner loop: Iterate j from 0 to 2 (for each column within the current row).
<br>Step 6.1: In each iteration of the inner loop, take input from the user and store it in matrix1[i][j].

**Step 7:** Display the message "Enter elements for the second matrix (2x3): " to prompt the user for input.

**Step 8:** Use a nested for loop to input values into the second 2D array matrix2:
<br>Outer loop: Iterate i from 0 to 1 (for each row).
<br>Inner loop: Iterate j from 0 to 2 (for each column within the current row).
<br>Step 8.1: In each iteration of the inner loop, take input from the user and store it in matrix2[i][j].

**Step 9:** Use a nested for loop to add the corresponding elements of matrix1 and matrix2, and store the result in the result array:
<br>Outer loop: Iterate i from 0 to 1 (for each row).
<br>Inner loop: Iterate j from 0 to 2 (for each column within the current row).
<br>Step 9.1: In each iteration of the inner loop, compute result[i][j] = matrix1[i][j] + matrix2[i][j].

**Step 10:** Display the message "Resulting Matrix (Sum):" to indicate that the result will be printed.

**Step 11:** Use a nested for loop to print the elements of the resulting 2D array result:
<br>Outer loop: Iterate i from 0 to 1 (for each row).
<br>Inner loop: Iterate j from 0 to 2 (for each column within the current row).
<br>Step 11.1: In each iteration of the inner loop, print the value of result[i][j] followed by a space.
<br>Step 11.2: After the inner loop completes (i.e., after printing all elements in a row), print a newline to move to the next row.

**Step 12:** End.
