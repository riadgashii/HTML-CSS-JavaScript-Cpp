// //Programi i pare
// #include <iostream>
// using namespace std;
// int main(){
// /*permes operatorit per shtypje,
// cout, shtypet ne ekran*/

//     cout << "Programimi ne C++" ;
//     return 0;
// }

// programi i trete
//  #include <iostream>
//  using namespace std;
//  int main(){

//     int a;

//     cin >> a;    //leximi prej tastirer
//     cout << a;   // shtypja ne ekran

//     return 0;
// }

// programi per syprinen e katerkendeshit

// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout << "jepni vlerat per:" << endl;

//     cout << "a= ";
//     cin >> a;
//     cout << "b= ";
//     cin >> b;

//    syp = a * b;
//    cout << "Syprina eshte   \n";
//    cout << syp << "\n";
//     return 0;

// }

// program per llogaritje te w,y,z w=y/z, y=a+b, z=a*b/c
// vlera hyrese  - a b c.   llogaritje -  y ,z,w    shtypet w

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     double y, z, w;
//     cout << "Jepni vlerat: a,b dhe c: ";
//     cin >> a >> b >> c;
//     y = a + b;
//     z = a * b / c;
//     w = y / z;
//     cout << " Vlera  eshte w=";
//     cout << w << "\n";
//     return 0;
// }

// sistemi numerik decimal, heksadecimal, octal

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     n = 100; // vlera decimale 100
//     cout << dec << n << endl;
//     cout << hex << n << endl;
//     cout << oct << n << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//      int a, b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;

//     int absA, absB;

//     // get absolute value without ternary
//     if (a >= 0) {
//         absA = a;
//     } else {
//         absA = -a;
//     }

//     if (b >= 0) {
//         absB = b;
//     } else {
//         absB = -b;
//     }

//     // compare absolute values
//     if (absA > absB) {
//         cout << a << " has the greater absolute value." << endl;
//     } else if (absB > absA) {
//         cout << b << " has the greater absolute value." << endl;
//     } else {
//         cout << "Both numbers have the same absolute value." << endl;
//     }

//     return 0;
// }

// Write a small calculator program that reads two decimal numbers a and b, and one character op representing an arithmetic operator.
// The operator can be one of: +, -, *, or /.
// Depending on the operator, compute and display the result of a op b.
// If the operator is not valid, show the message:

// Unknown operation

// #include <iostream>
// using namespace std;
// int main()
// {
//     double a, b;
//     cin >> a >> b;
//     char op;
//     cin >> op;

//     if (op == '+')
//     {
//         cout << "The results are: " << a + b << endl;
//     }
//     else if (op == '-')
//     {
//         cout << "The results are: " << a - b << endl;
//     }
//     else if (op == '*')
//     {
//         cout << "the results are: " << a * b << endl;
//     }
//     else if (op == '/')
//     {
//         cout << "The results are: " << a / b << endl;
//     }
//     else
//     {
//         cout << "you have used an invalid operator";
//     }

//     return 0;
// }

/*Write a program that reads three numbers x, y, and z from the keyboard.
Your program should find the largest and smallest of the three, then print their difference.

Example Run:

Input:  4.5  7.2  2.0
Output: Difference: 5.2
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     double x,y,z;

//     cout << "Enter three numbers" << endl;
//     cout << "x = ";
//     cin >> x;
//     cout << "y = ";
//     cin >> y;
//     cout << "z = ";
//     cin >> z;

//     double largest = x;
//     double smallest = x;

//     if (y > largest) largest = y;
//     if (z > largest) largest = z;

//     if (y < smallest) smallest = y;
//     if (z < smallest) smallest = z;

//     cout << endl;
//     cout << "Largest value  : " << largest << endl;
//     cout << "Smallest value : " << smallest << endl;
//     cout << "Difference     : " << largest - smallest << endl;

//     return 0;
// }

/*Write a program that reads two integers x and y and compares them.
The program should print one of the following messages:
x < y
x > y
x = y
*/

// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout << "x= "; cin >> x;
//     cout << "y= "; cin >> y;
//     if(x>y) cout << "x>y" << endl;
//     if(x=y) cout << "x=y" << endl;
//     if(x<y) cout << "x<y" << endl;

//     return 0;

// }

/*
Write a program that follows these steps:

Declare three integer variables: a, b, and c.
Read the value of a from the keyboard.
Set c to be double the value of a.
Set b to be double the sum of a and c.
Display the result of b / c.
Finally, test your program when a = 4.
Expected output: 3
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "a= ";
//     cin >> a;
//     c = 2 * a;
//     b = 2 * (a + c);

//     cout << "The result for b/c is: " << b / c << endl;
//     return 0;
// }

/*
Write a program that reads two integers p and q.
Then, calculate r = (p + q) * 3.
Finally, print the product of r and (p + q).
Try to reason out what happens when p = 2 and q = 3.

Expected output: 75

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int p, q;
//     cout << "p= ";
//     cin >> p;
//     cout << "q= ";
//     cin >> q;
//     int r;

//     r = (p + q) * 3;
//     cout << "r * (p+q)= " << r * (p + q) << endl;
//     return 0;
// }

/*
Task. Write a program that reads and calculates the sum of an unspecified number of integers. The input 0 signifies the end of input.
Use a variable named data to store each input value and a variable named sum to store the total. When a value is read, assign it to data and add it to sum only if it is not zero.
*/

// #include <iostream>
// using namespace std;

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter an integer (the input ends if it is 0): ";
//     int data;
//     cin >> data;

//     int sum = 0;
//     while (data != 0) {
//         sum += data;

//         cout << "Enter an integer (the input ends if it is 0): ";
//         cin >> data;
//     }

//     cout << "The sum is " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number, max;
//     cin >> number;
//     max = number;

//     while (number != 0)
//     {
//         cin >> number;
//         if (number > max)
//             max = number;
//     }

//     cout << "max is " << max << endl;
//     cout << "number " << number << endl;

//     return 0;
// }

// Write a program that uses a do-while loop to print the numbers from 1 to 10.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     do
//     {
//         cout << i << endl;
//         i++;
//     } while (i <= 10);

//     return 0;
// }

//  Write a program that uses a for loop to calculate the sum of integers from 0 to 9.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum += i;
//     }

//     cout << "The sum is " << sum << endl;
//     return 0;
// }

// Read 6 integers from the keyboard. For each number, check whether it is divisible by 3. In the end, print how many of the entered numbers are divisible by 3.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 0;
//     int number;
//     int count = 0;

//     while (i < 6)
//     {
//         cout << "Enter a number: ";
//         cin >> number;

//         if (number % 3 == 0)
//         {
//             count++;
//         }

//         i++;
//     }

//     cout << "There are " << count << " numbers divisible by 3." << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, x = 0;
//     cout << "a=";
//     cin >> a; // 3
//     b = 3 * a;
//     x = 20;

//     for (int i = a; i <= b; i++)
//     {
//         if (i % 3 == 0)
//         {
//             x = x + 2 * i;
//             cout << "i=" << i << ", x=" << x << "\n";
//         }
//     }

//     return 0;
// }

// Task. Write a program that reads two integers x and y (assume x != y). Then compare them and print all even numbers from the smaller value up to the larger one.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y;
//     cout << "x= ";
//     cin >> x;
//     cout << "y= ";
//     cin >> y;

//     if (x < y)
//     {
//         for (int i = x; i <= y; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 cout << "i= " << i << " ";
//             }
//         }
//     }
//     else
//     {
//         for (int i = y; i <= x; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 cout << "i= " << i << " ";
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0, i = 0;
//     cout << "n= ";
//     cin >> n;

//     do
//     {
//         sum = sum + i;
//         i++;
//     } while (i <= n);

//     cout << "the sum is " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "n= ";
//     cin >> n;

//     for (int i = 2; i <= n; i += 2)
//     {
//         sum = sum + i;
//     }

//     cout << "The sum is " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     const int n = 10;   // a constant upper bound
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 != 0) {
//             cout << "Skip step, odd number: " << i << endl;
//             continue;                  // jump to the next iteration
//         }

//         cout << "Even number: " << i << endl;
//         sum += i;
//     }

//     cout << "Sum = " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double masa, shpejtesia;

//     cout << "Jepni masen ne kg: ";
//     cin >> masa;
//     cout << "Jepni shpejtesine ne meter per sekond ";
//     cin >> shpejtesia;
//     double ek = (masa * shpejtesia * shpejtesia) / 2;
//     cout << "Energjia kinetike eshte " << ek << " Joule";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, shuma = 0;
//     cout << "Shenoni nje numer: ";
//     cin >> n;
//     if (n > 2)
//     {
//         for (int i = 1; i <= n; i += 2)
//         {
//             shuma += i;
//         }
//     }
//     else
//     {
//         shuma = 15;
//     }
//     cout << shuma << endl;
//     return 0;
// }

/* Detyra 4.

Kjo eshte zgjidhja per detyren 4 per te gjitha grupet.
*/
// #include <iostream>
// using namespace std;

// int main() {
//     const int n = 7;
//     int arr[n];

//     cout << "Shenoni " << n << " vlera pozitive per vargun:\n";
//     for (int i = 0; i < n; i++) {
//         int num;
//         cin >> num;

//         if (num <= 0) {
//             cout << "Vlera duhet te jete pozitive. Provoni perseri: ";
//             i--;
//             continue;
//         }

//         arr[i] = num;
//     }

//     int a, b;
//     cout << "Shenoni vleren e a: ";
//     cin >> a;
//     cout << "Shenoni vleren e b: ";
//     cin >> b;

//     int counter = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > a && arr[i] < b) {
//             counter++;
//         }
//     }

//     cout << "Elementet e vargut qe plotesojne kushtin > a dhe < b jane "
//          << counter << "." << endl;

//     return 0;
// }

//  Calculate the sum of even numbers from 1 to n through a for loop using the continue command to skip the odd numbers

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "Give a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     cout << "The sum of even numbers from 1 to " << n << " is " << sum << endl;

//     return 0;
// }

// Calculate the sum of even numbers from 1 to n through a for loop using the continue command to skip the odd numbers. If the sum of the numbers exceeds the number 8, terminate the execution of the loop.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10, sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << "Skip step, odd number: " << i << endl;
//             continue;
//         }
//         else
//         {
//             cout << "Even number: " << i << endl;
//             sum += i;
//         }
//         if (sum >= 8)
//         {
//             cout << "The sum reached is greater than or equal to 8. "
//                  << "The ring is finished.." << endl;
//             break; // exit the loop early
//         }
//     }

//     cout << "Sum = " << sum << endl;
//     return 0;
// }

// Use a for loop that goes from 1 to 20.Use the continue command to skip all even numbers.Use the break command to stop the loop if the sum is >= 15$.Print the sum at the end.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "Give a number for n: ";
//     cin >> n;

//     for (int i = 1; i <= 20; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << "The number given is an even number " << i << endl;
//             continue;
//         }
//         else
//         {
//             sum += i;

//             if (sum >= 15)
//             {
//                 break;
//             }
//         }
//     }

//     cout << "The sum is " << sum;
//     return 0;
// }

// #include <iostream>
// #include <cmath> // Needed for math operations if necessary

// using namespace std;

// int main() {
//     // 1. Initialize constants Pi and Euler
//     const double PI = 3.14;
//     const double EULER = 2.71;

//     // 2. Declare and initialize array 'numrat_baze' with 5 values
//     // Values provided: 1, 3, 4, 10, 4
//     int numrat_baze[5] = {1, 3, 4, 10, 4};

//     // 3. Declare array 'numrat_fitues' with size 5
//     // We read these values from the keyboard (permes tastieres)
//     double numrat_fitues[5];
//     cout << "Enter 5 values for numrat_fitues:" << endl;
//     for(int i = 0; i < 5; i++) {
//         cout << "A[" << i << "] = ";
//         cin >> numrat_fitues[i];
//     }

//     // 4. Change the LAST 3 values of 'numrat_fitues' by multiplying them by PI
//     // Indices for last three values in a size 5 array are 2, 3, and 4
//     for(int i = 2; i <= 4; i++) {
//         numrat_fitues[i] = numrat_fitues[i] * PI;
//     }

//     // 5. Change the FIRST and SECOND TO LAST value of 'numrat_baze'
//     // First index is 0, second to last index is 3 (for size 5)
//     // We multiply them by EULER and use (int) for type casting to keep them as integers
//     numrat_baze[0] = (int)(numrat_baze[0] * EULER);
//     numrat_baze[3] = (int)(numrat_baze[3] * EULER);

//     // Final Output to show the results (matches the Shembull ekzekutimi)
//     cout << "\nOutput:" << endl;
//     cout << "Numrat fitues: ";
//     for(int i = 0; i < 5; i++) {
//         cout << numrat_fitues[i] << " ";
//     }

//     cout << "\nNumrat baze: ";
//     for(int i = 0; i < 5; i++) {
//         cout << numrat_baze[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
//     int A[6];

//     // 1. INPUT: Read numbers from keyboard using a while loop
//     int i = 0; // Declare index outside
//     while (i < n) { // Use < n to stay within 0-5
//         cout << "A[" << i << "] = ";
//         cin >> A[i];
//         i++; // Don't forget to move to the next seat!
//     }

//     // 2. MATH: Find the max in the second half (indices 3, 4, 5)
//     int max_gjysma_dyte = A[3];
//     for(int j = 4; j < 6; j++) {
//         if(A[j] > max_gjysma_dyte) {
//             max_gjysma_dyte = A[j];
//         }
//     }
//     cout << "Maksimumi ne gjysmen e dyte: " << max_gjysma_dyte << endl;

//     // 3. SUM: Sum of first 4 elements (indices 0, 1, 2, 3)
//     int sum = 0;
//     for(int k = 0; k < 4; k++) {
//         sum += A[k];
//     }

//     // 4. LOGIC: Print sum only if it meets conditions
//     // Condition: divisible by 100 (sum % 100 == 0) OR smaller than -1940
//     if (sum % 100 == 0 || sum < -1940) {
//         cout << "Shuma e 4 elementeve te para: " << sum << endl;
//     }

//     return 0;
// }

// Create an array of 7 integers.

// Use a while loop to let the user enter all 7 numbers from the keyboard.

// Calculate the sum of the indices (the seat numbers) only for the spots where the user entered an even number.

// The Filter: If the final sum of these indices is greater than 10, print "Target reached". Otherwise, print "Target not reached".

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int A[n];

//     int i = 0;
//     while (i < n)
//     {
//         cout << "A[ " << i << "] = " << endl;
//         cin >> A[i];
//         i++;
//     }

//     int sum_of_index = 0;
//     for(int j = 0; j < n; j++){
//         if(A[j] % 2 == 0){
//             sum_of_index += j;

//         }

//     }

//      if(sum_of_index >= 10){
//             cout << "target reached";

//         }else{
//             cout << "target hasnt been reached";
//         }

//     return 0;
// }

/*
================================================================
          CHALLENGE: THE SYSTEM VALIDATOR
================================================================
1. INPUT (While Loop):
   - Create an integer array named 'Data' with 7 elements.
   - Use a 'while' loop to read 7 integers from the keyboard.

2. PART A (Boolean Logic):
   - Create a boolean array named 'Status' with 7 elements.
   - Use a loop to check each number in 'Data':
     - If the number is > 50, set Status to true.
     - Otherwise, set Status to false.

3. PART B (Index Math):
   - Find the sum of the INDICES where 'Status' is false.
   - (Remember: Add the "mailbox number", not the "mail").

4. PART C (The Maximum):
   - Find the maximum value in the FIRST HALF of 'Data'
     (indices 0, 1, and 2 only).

5. OUTPUT:
   - Print the final sum of indices from Part B.
   - Print the maximum value found in Part C.
================================================================
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 7;
//     int Data[n];

//     int i = 0;
//     while(i < n){
//         cout << "Data[ " << i << " ]= ";
//         cin >> Data[i];
//         i++;
//     }

//     bool status[7];

//     for (int j = 0;j < n; j++){
//         if (Data[j] > 50){
//             status[j] = true;
//         }else{
//             status[j] = false;
//         }
//     }
//     int sum_of_false_index = 0;
//     for(int k = 0; k < n; k++){
//         if(status[k] == true){
//             continue;
//         }else{
//             sum_of_false_index += k;
//         }
//     }

//     int max_of_first_half = Data[0];
//     for(int l = 1; l < 3; l++){
//         if(Data[l] > max_of_first_half){
//             max_of_first_half = Data[l];
//         }
//     }

//     cout << "Sum of false index is " << sum_of_false_index << endl;
//     cout << "Maximum of first half is " << max_of_first_half << endl;

//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char zgjedhja;
//     cout << "Zgjidhni (A, B, ose C): ";
//     cin >> zgjedhja;

//     switch (zgjedhja)
//     {
//     case 'a':
//     case 'A':
//         for (int i = 0; i <= 100; i++)
//         {
//             if (i % 3 == 0)
//             {
//                 cout << i << " ";
//             }
//         }
//         break;

//     case 'b':
//     case 'B':
//     {
//         int j = 0;
//         while (j < 100)
//         {
//             cout << j << " ";
//             j++;
//         }
//         break;
//     }

//     case 'c':
//     case 'C':
//     {
//         int k = 10;
//         do
//         {
//             cout << k << " ";
//             k = k + 10;
//         } while (k <= 100);
//         break;
//     }

//     default:
//         cout << "Zgjedhje e pavlefshme!";
//         break;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int A[10] = {2, 15, 3, 9, 21, 8, 11, 4, 30, 7};
//     char zgjedhja;

//     cout << "Shtypni nje karakter (A, B, C): ";
//     cin >> zgjedhja;

//     switch (zgjedhja)
//     {
//     case 'a':
//     case 'A':
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             if (A[i] % 3 == 0)
//             {
//                 cout << A[i] << " ";
//             }
//         }
//         break;
//     }
//     case 'b':
//     case 'B':
//     {
//         int vlera_max = A[0];
//         for (int j = 1; j < 10; j++)
//         {
//             if (A[j] > vlera_max)
//             {
//                 vlera_max = A[j];
//             }
//         }
//         cout << "Vlera maksimale: " << vlera_max;
//         break;
//     }
//     case 'c':
//     case 'C':
//     {
//         int count = 0;
//         for (int k = 0; k < 10; k++)
//         {
//             if (A[k] > 10)
//             {
//                 count++;
//             }
//         }
//         cout << "Elemente me te medha se 10: " << count;
//         break;
//     }
//     default:
//     {
//         cout << "Zgjedhje e pavlefshme!";
//         break;
//     }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int n = 8;
//     int notat[n] = {6, 9, 4, 7, 8, 3, 10, 5};

//     int i = 0;
//     double shuma = 0;
//     while (i < n)
//     {
//         shuma += notat[i];
//         i++;
//     }

//     double mesatarja = shuma / n;
//     cout << "Mesatarja eshte: " << mesatarja << endl;

//     if (mesatarja >= 7)
//     {
//         cout << "Studenti ka nje mesatare te larte" << endl;
//         int j = 0;
//         while (j < n)
//         {
//             if (notat[j] > mesatarja)
//             {
//                 cout << notat[j] << " ";
//             }
//             j++;
//         }
//         cout << endl;
//     }
//     else if (mesatarja < 5)
//     {
//         cout << "Studenti ka mesatare te ulet" << endl;
//         int k = 0;
//         int numri_negativ = 0;
//         while (k < n)
//         {
//             if (notat[k] < 5)
//             {
//                 numri_negativ++;
//             }
//             k++;
//         }
//         cout << "Numri i notave negative: " << numri_negativ << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 7;
//     double numrat[n] = {1.1, -2.2, 3.3, -4.4, 5.5, -6.6, 7.7};

//     int i = 0;
//     while (i < n)
//     {
//         cout << "B[" << 100 + i << "] = " << numrat[i] << endl;
//         i++;
//     }
//     cout << endl;

//     int j = 0;
//     while(j < n)
//     {
//         if(numrat[j] < 0)
//         {
//             cout << "Vlera: " << (int)(numrat[j] * -3) << endl;
//             cout << "Index: " << (int)(j * -2) << endl << endl;
//         }
//         else if(j > 1)
//         {
//             cout << "Vlera: " << (int)numrat[j] << endl;
//             cout << "Index: " << (int)(j * -2) << endl << endl;
//         }
//         j++;
//     }

//     double shuma = 0;
//     int k = 0;
//     while(k < n)
//     {
//         shuma += numrat[k];
//         k++;
//     }

//     cout << "Shuma: " << shuma << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    int n = 8;
//    int A[n] = {1, 4, 7, 10, 3, 8, 9, 2};

//    for (int q = 0; q < 8; q++)
//    {
//       cout << "Vargu A[ " << q << " ] = " << A[q] << endl;
//    }

//    int count_odd = 0;
//    int sum_even = 0;

//    for (int i = 0; i < n; i++)
//    {
//       if (A[i] % 2 != 0)
//       {
//          count_odd++;
//       }
//       else
//       {
//          sum_even += A[i];
//       }
//    }

//    cout << "Numri i anetareve tek eshte " << count_odd << endl;
//    cout << "Shuma e numrave qift eshte " << sum_even << endl;
//    int B[8] = {5, 6, 4, 2, 7, 3, 8, 1};
//    int shuma_vargut = 0;

//    for (int k = 0; k < 8; k++)
//    {
//       cout << "Vargu B[ " << k << " ]= " << B[k] << endl;
//    }

//    for (int j = 0; j < 8; j++)
//    {
//       if (shuma_vargut < 14)
//       {
//          shuma_vargut += B[j];
//       }
//       else
//       {
//          break;
//       }
//    }
//    cout << "Shuma qe u arrit deri ne numrin 14 eshte " << shuma_vargut << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     const int n = 12;
//     char array[n] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'm', 'i', 'n', 'g'};

//     int numri_zanoreve = 0;
//     int shuma_indeksave_zanoreve = 0;
//     int shuma_indeksave_jo_zanoreve = 0;

//     for (int i = 0; i < n; i++) {
//         switch (array[i]) {
//             case 'a':
//             case 'e':
//             case 'i':
//             case 'o':
//             case 'u':
//             case 'y':
//                 numri_zanoreve++;
//                 shuma_indeksave_zanoreve += i;
//                 break;
//             default:
//                 shuma_indeksave_jo_zanoreve += i;
//                 break;
//         }
//     }

//     cout << "Numri i zanoreve: " << numri_zanoreve << endl;
//     cout << "Shuma e indekseve te zanoreve: " << shuma_indeksave_zanoreve << endl;
//     cout << "Shuma e indekseve te jo-zanoreve: " << shuma_indeksave_jo_zanoreve << endl;

//     if (shuma_indeksave_zanoreve > shuma_indeksave_jo_zanoreve) {
//         cout << "Me e madhe eshte shuma e indekseve te zanoreve." << endl;
//     } else if (shuma_indeksave_jo_zanoreve > shuma_indeksave_zanoreve) {
//         cout << "Me e madhe eshte shuma e indekseve te jo-zanoreve." << endl;
//     } else {
//         cout << "Shumat jane te barabarta." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    const int n = 12;
//    int numrat[n];
//    for (int i = 0; i < n; i++)
//    {
//       cout << "numrat[" << i << "] = ";
//       cin >> numrat[i];
//    }

//    int vlera_maksimale = numrat[0];
//    int numri_i_maksimumit = 0;

//    for (int i = 0; i < n; i++)
//    {
//       if (numrat[i] > vlera_maksimale)
//       {
//          vlera_maksimale = numrat[i];
//          numri_i_maksimumit = 1;
//       }
//       else if (numrat[i] == vlera_maksimale)
//       {
//          numri_i_maksimumit++;
//       }
//    }

//    cout << "\nOutput:" << endl;
//    cout << "Maksimumi: " << vlera_maksimale << endl;

//    int numra_1_shifror = 0;
//    for (int i = 0; i < n; i++)
//    {
//       if (numrat[i] > -10 && numrat[i] < 10)
//       {
//          numra_1_shifror++;
//       }
//    }
//    cout << "Sa numra jane nje-shifror: " << numra_1_shifror << endl;

//    cout << "Numrat qe jane te plotpjestueshem me 20 OSE me te vegjel se 99: ";
//    int numra_pjestohen_2_vegjel_99 = 0;
//    for (int i = 0; i < n; i++)
//    {
//       if (numrat[i] % 20 == 0 || numrat[i] < 99)
//       {
//          numra_pjestohen_2_vegjel_99++;
//          cout << numrat[i] << " ";
//       }
//    }
//    cout << endl;

//    cout << "Sa numra jane sa maksimumi: " << numri_i_maksimumit << endl;
//    cout << "Sa numra plotesojne kushtin (%20==0 ose <99): " << numra_pjestohen_2_vegjel_99 << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    const int n = 6;
//    double numrat[n];
//   int i = 0;

//   do{
//    cout << "numrat[ " << i << " ] = ";
//    cin >> numrat[i];
//    i++;
//   }while(i < n);

//    double minimumi = numrat[i];
//    double nje_shifror = 0;
//    i = 0;

//    do{
//       if(numrat[i] < minimumi){
//          minimumi = numrat[i];
//       }
//       if(numrat[i] > -10 && numrat[i] < 10){
//          nje_shifror++;
//       }
//    i++;
//    }while(i < n);

//    int sa_minimumi = 0;
//    i=0;

//    do{
//       if(numrat[i] == minimumi){
//          sa_minimumi++;
//       }
//       i++;
//    }while(i<n);

//    cout << "\n Output: " << endl;
//    cout <<"Minimumi: " << minimumi << endl;
//    cout << "Sa numra jane nje shifror: " << nje_shifror << endl;
//    cout <<"Sa numra jane sa minimumi: " << sa_minimumi << endl;

//    return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    char rez;
//    int piket = 0;
//    int ndeshjet = 1;
//    while (ndeshjet <= 5)
//    {
//       cout << "Rezultati per ndeshjen " << ndeshjet << "(F,H,B): ";
//       cin >> rez;
//       switch (rez)
//       {
//       case 'F':
//       case 'f':
//       {
//          piket += 3;
//          ndeshjet++;
//          break;
//       }

//       case 'h':
//       case 'H':
//       {
//          ndeshjet++;
//          piket += 0;
//          break;
//       }

//       case 'b':
//       case 'B':
//       {
//          ndeshjet++;
//          piket += 1;
//          break;
//       }
//       default:
//       {
//          cout << "Karakteri i dhene nuk eshte valid.Perserit hyrjen." << endl;
//          break;
//       }
//       }
//    }

//    double mesatarja = piket / 5.0;

//    cout << "\nTotal i pikeve: " << piket << endl;
//    cout << "Mesatarja e pikeve per ndeshje: " << mesatarja << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int x;
//    int zerocounter = 0;
//    int sum = 0;

//    while(zerocounter<3){
//       cout << "Jepni nje numer: "; cin >> x;

//       if(x == 0){
//          zerocounter++;
//       }

//       if(x > 9 && x < 100){
//          sum += x;
//       }
//    }

//    cout << "Programi u nderpre pasi qe keni shtypur 3 here numrin 0." << endl;
//    cout << "Shuma e numrave pozitiv dhe dyshifror eshte: " << sum << endl;

//    return 0;
// }

/* Detyra 3.

Kjo eshte zgjidhja per detyren 3 per te gjitha grupet.
*/
// #include <iostream>
// using namespace std;

// int main() {
//     double numri;
//     double numri_paraprak;

//     for (int i = 0; i < 15; i++) {
//         cout << "Shenoni nje numer: ";
//         cin >> numri;

//         if (i == 0) {
//             numri_paraprak = numri;
//             continue;
//         }

//         if (numri < numri_paraprak) {
//             cout << "Numri i shenuar " << numri
//                  << " eshte me i vogel se numri paraprak "
//                  << numri_paraprak << ".";
//             break;
//         }

//         numri_paraprak = numri;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//    int a, b;
//    cout << "Enter the value of a = ";
//    cin >> a;
//    cout << "Enter the value of b = ";
//    cin >> b;

//    int abs_a = (a >= 0 ? a : -a);
//    int abs_b = (b >= 0 ? b : -b);

//    cout << "The number with the larger absolute value is: ";
//    if (abs_a >= abs_b)
//       cout << a;
//    else
//       cout << b;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    double a, b;
//    char op;
//    cin >> a >> op >> b;

//    switch (op)
//    {
//    case '+':
//       cout << a + b;
//       break;
//    case '-':
//       cout << a - b;
//       break;
//    case '*':
//       cout << a * b;
//       break;
//    case '/':
//       cout << a / b;
//       break;
//    default:
//       cout << "Unknown operation";
//       break;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    double x,y,z;
//    cout << "x= "; cin >> x;
//    cout << "y= "; cin >> y;
//    cout << "z= "; cin >> z;

//    int largest = x;
//    int smallest = x;

//    if(y > largest) largest = y;
//    if(z > largest) largest = z;

//    if(y < smallest) smallest = y;
//    if(z < smallest) smallest = z;

//    cout << "Difference: " << largest - smallest << endl;

//    return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int x, y;
//    cout << "x = ";
//    cin >> x;
//    cout << "y = ";
//    cin >> y;

//    if (x > y)
//       cout << "x > y";
//    if (x < y)
//       cout << "x < y";
//    if (x == y)
//       cout << "x = y";

//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int a;
//    cout << "a = ";
//    cin >> a;
//    int c = 2 * a;
//    int b = 2 * (a + c);

//    cout << b/c << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int p,q,r;
//    cout << "p = "; cin >> p;
//    cout << "q = "; cin >> q;
//    r = (p+q) * 3;
//    cout << "r*(p+q)= " << r*(p+q) << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number, max;
//     cin >> number;
//     max = number;

//     while (number != 0)
//     {
//         cin >> number;
//         if (number > max)
//             max = number;
//     }

//     cout << "max is " << max << endl;
//     cout << "number " << number << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int n = 1;
//    do{
//       cout << n << endl;;
//       n += 1;
//    }while(n <= 10);

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int sum = 0;

//    for(int i = 0; i <= 9; i++){
//       sum += i;
//    }

//    cout << "sum= " << sum << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int n;
//    int currentNumber;
//    int sum = 0;

//    cout << "N = ";
//    cin >> n;

//    for (int i = 1; i <= n; i++)
//    {
//       cout << "The current number is: ";
//       cin >> currentNumber;

//       if(currentNumber % 2 != 0){
//          sum += currentNumber;
//       }
//    }
//    cout << "The sum of odd numbers : " << sum;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout << "How many numbers do you want to enter : ";
//    cin >> n;
//    int arr[n];
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//       cout << "Arr[ " << i << " ] = ";
//       cin >> arr[i];

//       sum += arr[i];
//    }
//    cout << "The sum is " << sum << endl;
//    double average;
//    average = (double)sum / n;
//    cout << "The average is " << average << endl;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] > average)
//       {
//          cout << "The number in the array that is higher than the average is " <<  arr[i] << endl;
//       }
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    int arr[7];
//    int count = 0;

//    for (int i = 0; i < 7; i++)
//    {
//       cout << "Enter temperature for day " << i + 1 << ": ";
//       cin >> arr[i];
//    }

//    int highest = arr[0];
//    int lowest = arr[0];

//    for (int i = 0; i < 7; i++)
//    {
//       if (arr[i] > highest)
//          highest = arr[i];

//       if (arr[i] < lowest)
//          lowest = arr[i];

//       if (arr[i] < 0)
//          count++;
//    }

//    cout << "\n--- Weather Analysis ---" << endl;
//    cout << "Highest temperature: " << highest << endl;
//    cout << "Lowest temperature: " << lowest << endl;
//    cout << "Days with negative temperatures: " << count << endl;

//    int specific;
//    cout << "\nEnter a specific temperature to search for: ";
//    cin >> specific;

//    int i;
//    for (i = 0; i < 7; i++)
//    {
//       if (arr[i] == specific)
//       {
//          cout << "Temperature " << specific << " found at index " << i << "." << endl;
//          break;
//       }
//    }

//    if (i == 7)
//    {
//       cout << "The temperature you're looking for doesn't exist." << endl;
//    }

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int inventari = 0;

// int shtoProdukte(int sasia)
// {
//    inventari += sasia;
//    return inventari;
// }

// int largoProdukte(int sasia)
// {
//    if (sasia > inventari)
//    {
//       inventari = inventari;
//    }
//    else
//       inventari -= sasia;
//    return inventari;
// }

// double vlersoInventarin(double cmimi)
// {
//    return inventari * cmimi;
// }

// double vlersoInventarin(double cmimi, double zbritja)
// {
//    double totali = 0;
//    double discount;
//    totali = inventari * cmimi;
//    discount = totali * (zbritja / 100.0);
//    return totali - discount;
// }
// int main()
// {

//    cout << "Produkte ne inventar: " << shtoProdukte(50) << endl;
//    cout << "Produkte pas largimit: " << largoProdukte(51) << endl;
//    cout << "Cmimi i inventarit eshte: " << vlersoInventarin(20) << endl;
//    cout << "Cmimi i inventarit pas zbritjes eshte: " << vlersoInventarin(20, 15) << "";
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int arr[2][2];

//    int sum = 0;

//    for (int i = 0; i < 2; i++)
//    {
//       for (int j = 0; j < 2; j++)
//       {
//          cout << "Give a number for position  " << "arr[ " << i << " ][ " << j << " ] = ";
//          cin >> arr[i][j];
//       }
//    }
//    for (int i = 0; i < 2; i++)
//    {
//       for (int j = 0; j < 2; j++)
//       {
//          if (i == j)
//          {
//             sum += arr[i][j];
//          }
//       }
//    }

//    cout << "The sum of numbers is " << sum << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int katrori(int nr)
// {
//    return nr * nr;
// }

// int main(){
//    int x;
//    cout << "Give a number: ";
//    cin >> x;

//    int rezultati = katrori(x);

//    cout << "the square is " << rezultati << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// double mesatarja(int x, int y){
//    double rezultati = (x + y) / 2.0 ;
//    return rezultati;
// }

// int main(){
//    double rezultati;

//    rezultati = mesatarja(40,4);

//    cout << "Mesatarja eshte " << rezultati;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int shumaERreshtit(int mat[3][3], int rreshti)
// {
//   int sum = 0;
//       for (int j = 0; j < 3; j++)
//       {
//          sum += mat[rreshti][j];
//       }

//    return sum;
// }

// int main()
// {
//    int myMatrix[3][3] = {
//        {1, 1, 1}, // Row 0 (Sum = 3)
//        {2, 2, 2}, // Row 1 (Sum = 6)
//        {5, 5, 5}  // Row 2 (Sum = 15)
//    };

//    int r;
//    cout << "Which row do you want to sum (0, 1, or 2)? ";
//    cin >> r;

//    int rezultati = shumaERreshtit(myMatrix, r);

//    cout << "The sum of row " << r << " is: " << rezultati << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x = 100;    // Variabli origjinal
//     int *p = &x;    // Pointeri 'p' merr adresën e 'x'

//     cout << "Vlera fillestare e x: " << x << endl;

//     // Tani përdorim pointerin për të shtuar 5
//     // *p do të thotë "shko te kutia ku është x"
//     *p = *p + 5;

//     cout << "Vlera e x pas ndryshimit me pointer: " << x << endl;
//     cout << "Vlera që nxjerrim direkt nga *p: " << *p << endl;
//     cout << "Adresa ku ndodhet x ne memorie: " << p << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void dyfisho(int *p)
// {
// *p = *p * 2;

// }
// int main()
// {

//    int nr;
//    cout << "Jepni nje vlere qe ta shumezojme me 2: ";
//    cin >> nr;

//    dyfisho(&nr);

//    cout << "Numri i dyfishuar eshte  " << nr << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// void kalkulo(int *x, int *y, int *shuma) // Ndryshova int ne void sepse nuk kthejm vlere me return
// {
//     // 1. Llogarisim shumen dhe e ruajm te adresa e 'shuma'
//     *shuma = *x + *y;

//     // 2. Rrisim vlerat origjinale per 1
//     // Perdorim kllapa sepse ylli ka rendesi tjeter nga ++
//     (*x)++;
//     (*y)++;
// }

// int main()
// {
//    int a, b, s = 0;

//    cout << "Jep numrin e pare: ";
//    cin >> a;
//    cout << "Jep numrin e dyte: ";
//    cin >> b;

//    // Thirrja eshte perfekte! Ke derguar adresat me &
//    kalkulo(&a, &b, &s);

//    cout << "Shuma e llogaritur brenda funksionit: " << s << endl;
//    cout << "Vlera e re e a-se (e rritur): " << a << endl;
//    cout << "Vlera e re e b-se (e rritur): " << b << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int gjejMaksimumin(int *p, int n)
// {
//    int max = *p;

//    for (int i = 0; i < n; i++){
//       if(*(p+i) > max){
//          max = *(p+i);
//       }
//    }
//    return max;
// }

// int main(){
//    int vargu[5] = {12, 45, 7, 92, 31};

//     // 2. Thirr funksionin.
//     // Kujdes: Emri i vargut 'vargu' dërgohet pa & sepse është vetë adresë!
//     int rezultati = gjejMaksimumin(vargu, 5);

//     cout << "Numri me i madh ne varg eshte: " << rezultati << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int a = 10;
//    int b = 20;
//    int sum = 0;

//    int *pa = &a;
//    int *pb = &b;
//    int *psum = &sum;

//    (*psum) = (*pa) + (*pb);

//    cout << "Shuma eshte " << sum;

//    return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//    float brinja_a, brinja_b, brinja_c;
//    cout << "Jepni gjatesine per 3 brinjet: ";
//    cin >> brinja_a >> brinja_b >> brinja_c;

//    float perimetri = brinja_a + brinja_b + brinja_c;
//    float s = perimetri / 2.0;
//    float siperfaqja = sqrt(s * (s - brinja_a) * (s - brinja_b) * (s - brinja_c));

//    cout << "Perimetri i trekendeshit eshte " << perimetri << endl;
//    cout << "Siperfaqja e trekendeshit eshte " << siperfaqja << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int a,b;
//    cout << "a= ";
//    cin >> a;
//    cout << "b= ";
//    cin >> b;

//    int abs_a = (a >= 0 ? a : -a);
//    int abs_b = (b >= 0 ? b : -b);

//    if(abs_a > abs_b) cout << "Numri me vlere absolute me te madhe eshte: " << a;
//    if(abs_b > abs_a) cout << "Numri me vlere absolute me te madhe eshte: " << b;

//    return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//    int a = 4, b = 6;
//    int c = a;
//    a++;
//    char k = 'a';
//    if ((2 * a < b + c) || (a == c))
//    {
//       k = 'c';
//    }
//    c += (b % a);
//    cout << setw(a) << setfill(k) << c;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//    int x;
//    int count = 0;
//    do
//    {
//       cout << "Jepni vlere: ";
//       cin >> x;
//       count++;

//    } while (x > 0);

//    cout << "Programi eshte ndalur sepse ke shenuar numer negativ" << endl;
//    cout << "Numri total qe jane shenuar eshte " << count << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    const int N = 3;
//    int mat[N][N];
//    for (int i = 0; i < N; i++)
//    {
//       for (int j = 0; j < N; j++)
//       {
//          if (i >= j)
//          {
//             mat[i][j] = i + 1;
//          }
//          else
//          {
//             mat[i][j] = j + 1;
//          }
//       }
//    }

//    for (int i = 0; i < N; i++)
//    {
//       for (int j = 0; j < N; j++)
//       {
//          cout << "mat[ " << i << " ][ " << j << " ] = " << mat[i][j] << endl;
//       }
//    }

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int kerko(int v[], int n){

//    for(int i = 0; i < n; i++){
//       if(v[i]> 0){
//          return v[i];
//       }
//    }

//    return -1;
// }
// int main(){
//    const int n = 4;
//    int v[n] = {-3,0,2,7};
//    cout << kerko(v,n);

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int a, b;
//    char op;

//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    cout << "Which operator do you want:  ";
//    cin >> op;

//    switch (op)
//    {
//    case '+':
//       cout << "a + b = " << a + b;
//       break;
//    case '-':
//       cout << "a - b = " << a - b;
//       break;
//    case '*':
//       cout << "a * b = " << a * b;
//       break;
//    case '/':
//       cout << "a / b = " << a / b;
//       break;
//    default:
//       cout << "Keni japur nje operator palidhje";
//       break;
//    }

//    return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// #define FILL 'x'

// int main()
// {
//    int a = 7, b = 3;
//    int x = 1 + (a % 4), y = b * 2;
//    int c = (a / 2 == b) ? (x) : (y);
//    int d = x * y;

//    cout << setw(c) << setfill(FILL) << d;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout << "Sa i gjate deshironi qe te jete vargu: ";
//    cin >> n;
//    int numraPozitiv = 0;
//    int numraNegativ = 0;
//    int v[n];
//    for (int i = 0; i < n; i++)
//    {
//       cout << "Jepni vlere per v[ " << i << " ] = ";
//       cin >> v[i];

//       if (v[i] > 0)
//       {
//          numraPozitiv++;
//       }
//       else if(v[i] < 0)
//       {
//          numraNegativ++;
//       }else if(v[i] == 0){
//          continue;
//       }
//    }

//    if (numraPozitiv > numraNegativ)
//    {
//       cout << "Ka me shume numra pozitiv sesa negativ";
//    }
//    else if(numraNegativ > numraPozitiv)
//    {
//       cout << "Ka me shume numra negativ sesa pozitiv";
//    }else{
//       cout << "Numri i tyre eshte i njejte";
//    }

//    return 0;
// }

// #include <iostream>
// using namespace std;
// int diferenca(int x, int y)
// {
//    int r = x - y;
//    int abs_r = (r >= 0 ? r : -r);

//        return abs_r;
// }

// #include <iostream>
// using namespace std;
// enum Fakulteti
// {
//    Ekonomik,
//    Juridik,
//    FIEK
// };

// double kriteri_burses(Fakulteti f)
// {
//    switch (f)
//    {
//    case Ekonomik:
//       return 9.0;
//       break;
//    case Juridik:
//       return 8.5;
//       break;
//    case FIEK:
//       return 8.0;
//       break;
//    default:
//       return 8.0;
//       break;
//    }
// }

// int main()
// {
//    Fakulteti degaIme = Juridik;

//    cout << "Pragu per FIEK eshte " << kriteri_burses(degaIme) << endl;

//    return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//    double x,y;
//    cout << "x = "; cin >> x;
//    cout << "y = "; cin >> y;

//    int r = x - y;

//    cout << setfill('*');
//    int hapesira = (r >= 0 ? 5 : 7);

//    cout << showpos << setw(hapesira) << r << endl;

//    return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int m;
//    int a[m][m];
//    cout << "Give the size of the matrice: ";
//    cin >> m;
//    for (int i = 0; i < m; i++)
//    {
//       for (int j = 0; j < m; j++)
//       {
//          if (i % 2 == 0 && j % 2 == 0)
//          {
//             a[i][j] = 1;
//             cout << "a[ " << i << " ][ " << j << " ] = " << a[i][j] << endl;

//          }
//          else if (i % 2 == 0 || j % 2 == 0)
//          {
//             a[i][j] = 2;
//             cout << "a[ " << i << " ][ " << j << " ] = " << a[i][j] << endl;
//          }
//          else if (i % 2 != 0 && j % 2 != 0)
//          {
//             a[i][j] = 3;
//             cout << "a[ " << i << " ][ " << j << " ] = " << a[i][j] << endl;
//          }
//       }
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;

// // a. Funksioni i pare: Numeron anetaret me te medhenj se nje numer 'k'
// int numerimi(int vargu[], int n, int k) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (vargu[i] > k) {
//             count++;
//         }
//     }
//     return count;
// }

// // b. Funksioni i mbingarkuar: Numeron anetaret mes dy vlerave 'a' dhe 'b'
// int numerimi(int vargu[], int n, int a, int b) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         // Kontrollojme nese vlera eshte mes a dhe b (perfshire a dhe b)
//         if (vargu[i] >= a && vargu[i] <= b) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int Shifrat[] = {5, 12, 8, 20, 3, 15, 7};
//     int madhesia = 7;

//     // Testimi i funksionit te pare (anetaret > 10) -> duhet te jene 12, 20, 15 (gjithsej 3)
//     cout << "Anetaret me te medhenj se 10: " << numerimi(Shifrat, madhesia, 10) << endl;

//     // Testimi i funksionit te dyte (anetaret mes 5 dhe 10) -> duhet te jene 5, 8, 7 (gjithsej 3)
//     cout << "Anetaret mes vlerave 5 dhe 10: " << numerimi(Shifrat, madhesia, 5, 10) << endl;

//     return 0;
// }

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main()
// {
//     int n = 4;
//     double v[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Jepni vleren per v [ " << i << " ] = ";
//         cin >> v[i];

//         if (v[i] < 0)
//         {
//             v[i] = v[i];
//         }
//     }
//     double sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += v[i];
//     }
//     double mesatarja = sum/n;
//     cout << setw(6) << setprecision(2) << setfill('#') << mesatarja << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int v[n][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(i == j || i + j == n-1){
//                 v[i][j] = 1;
//             }else {
//                 v[i][j] = 0;
//             }
//         }
//     }

//     for(int i = 0; i< n; i++){
//         for(int j= 0; j<n; j++){
//             cout << v[i][j] << " ";

//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>

// #define LENOVO 3
// #define HP 4
// #define DELL 7
// using namespace std;

// int main()
// {
//     char brendi;
//     cout << "Zgjedhni nje nga brendet l,L - Lenovo, h ose H - HP dhe d,D - Dell = ";
//     cin >> brendi;

//     switch (brendi)
//     {
//     case 'l':
//     case 'L':
//     {
//         cout << "Keni zgjedhur lenovo me sasi" << LENOVO << endl;
//         if (LENOVO <= 3)
//         {
//             cout << "Ne pritje per furnizim";
//         }
//         break;
//     }
//     case 'd':
//     case 'D':
//     {
//         cout << "Keni zgjedhur dell me sasi " << DELL << endl;
//         if(DELL <=3){
//             cout << "Ne pritje per furnizim";

//         }
//         break;
//     }
//     case 'h':
//     case 'H':
//     {
//         cout << "Keni zgjedhur HP me sasi " << HP << endl;
//         if(HP <= 3){
//             cout << "Ne pritje per furnizim";

//         }
//         break;
//     }
//     default:
//     {
//         cout << "Keni shtypur buton gabim rikthehuni perseri" << endl;
//         break;
//     }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;

//     cout << "x = "; cin >> x;
//     cout << "y = "; cin >> y;

//     if(x < y){
//         for(int i = x; i <= y; i++){
//             if(i % 2 == 0){
//                 cout << "i = " << i << endl;
//             }
//         }
//     }else{
//         for(int i = y; i <= x ; i++){
//             if(i % 2 == 0){
//                 cout << "i = " << i << endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int v[20];
//     int n5 = 0;

//     for(int i = 0; i <  20; i++){
//         cout << "v[ " << i << " ] = "; cin >> v[i];
//     }

//     for(int i = 0; i <20; i++){
//         if(v[i]%5 == 0){
//             n5++;
//         }
//     }

//    if(n5 > 0){
//     cout << "Gjitshej ka " << n5 << " numra qe pjestohen me 5" << endl;

//    }else{
//     cout << "Nuk ka numra qe plot pjestohen me 5 numri i tyre eshte " << n5 << endl;
//    }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 6;
//     int v[n][n];
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j< n; j++){
//             if(i%2 != 0){
//                 v[i][j] = i *2;

//             }else{
//                 v[i][j] = 0;
//             }
//              cout << v[i][j] << " ";

//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     const int m = 3, n = 3;
//     int A[m][n] = {
//         {3, 8, 12},
//         {9, 1, 18},
//         {7, 24, 10}};
//     int k = 0;
//     int B[m * n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (A[i][j] % 2 == 0 && A[i][j] > 0 && A[i][j] % 3 == 0)
//             {
//                 B[k] = A[i][j];
//                 k++;
//             }
//         }
//     }
//     cout << "B[ ";
//     for(int i = 0; i < k; i++){
//       cout << setw(3) << B[i];
//     }

//     cout << " ]" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int n = 10 ;
//    int v[n];

//    for(int i = 0; i < n; i++){
//       cout << "v[ " << i + 1 << " ] = ";
//       cin >> v[i];
//       if(v[i] < 0 || v[i] > 100){
//          cout << "Numri i dhene eshte jashte intervalit";
//          i--;
//       }
//    }
//    int n8 = 0;
//    for(int i = 0; i < n; i++){
//       if(v[i] >= 40 && v[i] <= 80 && v[i] % 8 == 0){
//          n8++;
//       }
//    }

//    cout << "Anetaret qe bejne pjese nga numri 40 deri 80 dhe qe jane te plotpjestueshem me 8 jane: " << n8 << '\n';

//    return 0;

// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//    int n = 7;
//    int a[n][n];

//    for(int i = 0; i < n; i++){
//       for(int j = 0; j <n; j++){
//          if(i == j){
//             a[i][j] = i;
//          }else if(i < j){
//             a[i][j] = -4 + i;
//          }else{
//             a[i][j] = j%3;
//          }
//       }
//    }

//    for(int i = 0; i < n; i++){
//       for(int j = 0; j < n; j++){
//          cout << setw(3) << a[i][j];
//       }
//       cout << endl;
//    }

//    return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//    const int m = 3, n = 3;
//    int a[m][n] = {
//       {3,8,15},
//       {9,12,18},
//       {7,24,11}
//    };
//    int k = 0;
//    int b[m*n];

//    for(int i = 0; i < n; i++){
//       for(int j = 0; j < n;j++){
//          if(a[i][j]%2 == 0 && a[i][j] > 10){
//             b[k] = a[i][j];
//             k++;
//          }
//       }

//    }
//    cout << "b = [ ";

//    for(int i = 0; i < k; i++){
//       cout << setw(3) << b[i];
//    }
//    cout << " ]" << endl;

//    return 0;

// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// struct Lojtari {
// string ID, Emri, Mbiemri;
// int Pike[10];
// //Funksionet
// void lexo(); //Leximi i të dhënave të Lojtarit
// void shtyp(); //Shtypja e të dhënave të Lojtarit
// double pMes(); //Pikët mesatare të Lojtarit
// };
// int main()
// {
// const int n = 20; //numri i lojtarëve
// Lojtari L[n];
// for (int i = 0; i < n; i++)
// L[i].lexo();
// for (int i = 0; i < n; i++)
// if (L[i].pMes() > 7.5)
// L[i].shtyp();
// cout << "\n\n";
// return 0;
// }
// //Regjistrimi i të dhënave të Lojtarit
// void Lojtari::lexo() {
// cout << "Jepni te dhenat per Garuesin:\n";
// cout << "-------------------------------------\n";
// cout << "ID : "; cin >> ID;
// cout << "Emri : "; cin >> Emri;
// cout << "Mbiemri : "; cin >> Mbiemri;
// cout << "Piket :\n";
// for (int i = 0; i < 10; i++) {
// cout << "Pike[" << i + 1 << "]=";
// cin >> Pike[i];
// }
// cout << "-------------------------------------\n";
// }
// //Shtypja e të dhënave të Lojtarit
// void Lojtari::shtyp()
// {
// cout << "\nTe dhenat per lojtarin:\n";
// cout << "-------------------------------------\n";
// cout << "ID : " << ID << "\n";
// cout << "Emri : " << Emri << "\n";
// cout << "Mbiemri : " << Mbiemri << "\n";
// cout << "Piket : ";
// for (int i = 0; i < 10; i++)
// cout << Pike[i] << " ";
// cout << "\nMesatarja : " << pMes() << "\n";
// cout << "-------------------------------------\n";
// }
// //Mesatarja e pikëve pMes()
// double Lojtari::pMes()
// {
// double s = 0;
// for (int i = 0; i < 10; i++)
// s = s + Pike[i];
// return s / 10;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//    const int n = 6;
//    int a[n][n];

//    for(int i = 0; i < n; i++){
//       for(int j = 0; j < n; j++){
//        if(i == j){
//          a[i][j] = i;
//        }else if(i > j){
//          a[i][j] = j*j;
//        }else if(i%2 == 0){
//          a[i][j] = 0;
//        }else{
//          a[i][j] = i*3;
//        }
//       }
//    }

//    for(int i = 0; i < n; i++){
//       for(int j = 0; j < n; j++){
//          cout << setw(3) << a[i][j];
//       }
//       cout << endl;
//    }

//    return 0;

// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// struct Laptop
// {
//    string ID, tipi;
//    double cmimi;
//    void lexo();
//    void shtyp();
//    double getCmimi();
// };

// int main()
// {
//    Laptop L1, L2;
//    L1.lexo();
//    L2.lexo();
//    if (L1.getCmimi() < L2.getCmimi())
//    {
//       cout << "Laptopi 1 eshte me i lire se laptopi 2;" << endl;
//       L1.shtyp();
//    }
//    else if (L1.getCmimi() > L2.getCmimi())
//    {
//       cout << "Laptopi 2 eshte me i lire se laptopi 1" << endl;
//       L2.shtyp();
//    }
//    else
//    {
//       cout << "Qmimet e tyre jane njesoj" << endl;
//    }
//    return 0;
// }

// void Laptop::lexo()
// {
//    cout << "ID :   ";
//    cin >> ID;
//    cout << "Tipi :  ";
//    cin >> tipi;
//    cout << "Cmimi :  ";
//    cin >> cmimi;
// }

// void Laptop::shtyp()
// {
//    cout << "ID : " << ID << ", tipi : " << tipi << " dhe cmimi : " << cmimi << endl;
// }
// double Laptop::getCmimi()
// {
//    return cmimi;
// }

// // Të shkruhet programi që e deklaron një varg v[] me 10 anëtarë (numra të plotë) dhe përmes unazës e
// mbushë vargun me vlera të lexuara nga tastiera. Pas mbushjes, e analizon vargun v[ ] dhe tregon se sa është
// numri i anëtarëve të vargut, të cilët plotpjesëtohen me 6.

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//    const int n = 10;
//    int v[n];
//    for(int i = 0; i < n; i++){
//       cout << "v[ " << i << " ] = ";cin >> v[i];
//    }
//    int n6 = 0;
//    for(int i = 0; i < n; i++){
//       if(v[i]%6 == 0){
//          n6++;
//       }
//    }

//    if(n6 > 0){
//       cout << "Numri i anetareve te vargut qe plotpjestohen me 6 eshte " << n6;
//    }else{
//       cout << "Nuk ka numra qe plotpjestohen me 6";
//    }

//    return 0;

// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//    int n = 6;
//    int v[n][n];

//    for(int i = 0; i <n; i++){
//       for(int j = 0; j <n; j++){
//          if(i%2 == 0 || j%2 == 1){
//             v[i][j] = 0;
//          }else{
//             v[i][j] = i*3;
//          }
//       }
//    }

//    for(int i = 0; i < n; i++){
//       for(int j = 0; j < n; j++){
//          cout << setw(3) << v[i][j];
//       }
//       cout << endl;
//    }

//    return 0;
// }

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct
    Studenti
{
   string ID, Emri, Mbiemri;
   int Notat[5];
   void lexo();
   void shtyp();
   double nMes();
};

int main()
{
   Studenti St[5];
   for (int i = 0; i < 5; i++)
   {
      St[i].lexo();
   }

   for (int i = 0; i < 5; i++)
   {
      if (St[i].nMes() >= 8)
      {
         St[i].shtyp();
      }
      cout << endl;
   }

   return 0;
}

void Studenti::lexo()
{
   cout << "Emri : ";
   cin >> Emri;
   cout << "Mbiemri : ";
   cin >> Mbiemri;
   cout << "Notat :\n";
   for (int i = 0; i < 5; i++)
   {
      cout << "Nota [ " << i + 1 << " ] = ";
      cin >> Notat[i];
      if (Notat[i] < 5 || Notat[i] > 10)
      {
         cout << "Gabim lejohen notat vetem nga 6 deri ne 10";
         i--;
      }
   }


   cout << "________________\n";
}


void Studenti::shtyp(){
   cout << "Emri : " << Emri << endl;
   cout << "Mbiemri : " << Mbiemri << endl;
   cout << "Notat : ";
   for(int i = 0; i < 5; i++){
      cout << "Nota [ " << i + 1 << " ] = " << Notat[i];
      
   }
   cout << "\nMesatarja : " << nMes() << endl;
}


double Studenti::nMes(){
   double s= 0;
   for(int i = 0; i <5; i++){
      s += Notat[i];

   }

   return s/5;
}
