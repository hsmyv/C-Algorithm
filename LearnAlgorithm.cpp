#include <iostream>
#include <Windows.h>
#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

//// https://www.w3resource.com/cpp-exercises/basic-algorithm/index.php******************************** burdan hell ele

// Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum
/*
int main(){
    int num1, num2, total;

    cin >> num1;
    cin >> num2;


    if(num1 == num2){
        total = num1 + num2;
        cout << total * 3;

    }else{
        cout << num1 + num2 ;
    }
}*/

// Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
/*
int main(){
    int n;
    int abs_diff;

    cout << "Enter integer: ";

    cin >> n;

    abs_diff = abs(n - 51);

    if(n > 51)
    {
        cout << "Triple the absolute difference: " << abs_diff * 3 << endl;
    }else{
        cout << "Absolute difference: " << abs_diff << endl;
    }
}
*/
// Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30

/*int main(){
    int a,b,total;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    total = a + b;

    if(a == 30 || b == 30 || total == 30)
    {
        cout << "1";
    }else{
        cout << "0";
    }
}*/

// Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200. Go to the editor
/*
int main(){
    int a;


    cout << "Enter a: ";
    cin >> a;

    int abs_diff_100 = abs(100 - a);
    int abs_diff_200 = abs(200 - a);

    if(abs_diff_100 <= 10 || abs_diff_200 <= 10)
    {
        cout << "1";

    }else{
        cout << "0";
    }
}*/

// Write a C++ program to create a new string where 'if' is added to the front of a given string.If the string already begins with 'if', return the string unchanged.
/*
int main()
{
    string input;

    cout << "Enter value: ";
    cin >> input;

    if(input.substr(0, 2) == "if"){
        cout << input << endl;
    } else {
        cout << "if " << input << endl;
    }
}
*/

// Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive

/*
int main()
{
    string str;
    int pos;

    cout << "Enter value: ";
    cin >> str;
    cout << "Enter the position of the character to remove (0.." << str.length() - 1 << "): ";
    cin >> pos;

    if (pos >= 0 && pos <= str.length())
    {
        str.erase(pos, 1);
        cout << "Modified string: " << str << endl;
    }
    else
    {
        cout << "Invalid position!" << endl;
    }
}*/

// Write a C++ program to exchange the first and last characters in a given string and return the new string.
/*
string exchangeLastFirst(string s){
    if(s.length() <= 1){
        return s;
    }

    char first = s[0];         //get first character of the word
    char last  = s[s.length() - 1];             //get last character of the word

    s[0] = last;
    s[s.length() - 1] = first;
    return s;
}

int main(){
    string s;

    cout << "Please write something : ";

    cin >> s;

    string exchanged = exchangeLastFirst(s);

    cout << "Exchanged string: " << exchanged << endl;

}
*/

// Write a C++ program to create a new string which is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.

/*
string copyOfStirng(string s){
    if(s.length() < 2){
        return s;
    }

    string twoCH = s.substr(0,2);
    s = twoCH + twoCH + twoCH + twoCH;

    return s;

}
int main(){
    string str;
    cout << "Please, enter something: ";

    cin >> str;
    string copyString = copyOfStirng(str);

    if(str.length() < 2)
    {
        cout << "String is :" << copyString << endl;
    }else{
        cout << "4 Copies of string: " << copyString << endl;

    }

}*/

// Write a C++ program to create a new string with the last char added at the front and back of a given string of length 1 or more.

/*
int main(){
    string str;

    cout << "Please, write something else: " << endl;
    cin >> str;

    char lastCh = str[str.length() - 1];

    string lCh = lastCh + str + lastCh;
    cout << "String is: " << lCh << endl;


}*/

// Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.
/*
int main(){
    int num;

    cout << "Please write number: ";
    cin >> num;

    if(num % 3 == 0)
    {
        cout << "1";
    }else if(num % 7 == 0){
        cout << "1";
    }else{
        cout << "0";
    }
}*/

// Write a C++ program to create a new string taking the first 3 characters of a given string and return the string with the 3 characters added at both the front and back.
// If the given string length is less than 3, use whatever characters are there

/*
string front (string s){
    string first3Ch = s.substr(0, 3);

    if (s.length() < 3){
        first3Ch = s;
    }

        return first3Ch + s + first3Ch;

}

int main(){
    string str;

    cout << "Please write something: ";

    cin >> str;

    string displayString =  front(str);

    cout << "String is: " << displayString;
}
*/

// Write a C++ program to check if a given string starts with 'C#' or not
/*
int main(){
    string str;
    cout << "Please, write something: ";

    cin >> str;

    if (str.substr(0, 2) == "C#" || str.substr(0, 9) == "C++ Sharp")
    {
        cout << "1";
    }else{
        cout << "0";
    }
}
*/

// Write a C++ program to check if one given temperatures is less than 0 and the other is greater than 100
/*
int main(){

    int num, num2;

    cout << "Please, enter two temperatures: ";
    cin >> num;
    cin >> num2;

    if((num < 0 && num2 > 100) || (num > 100 && num2 < 0)){
        cout << "1";
    }else{
        cout << "0";
    }
}
*/

// Bura kimi tekrarladim*******************************************************************

/*

////Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive int main()

int main(){
    int num1,num2;

    cout << "Enter two number: ";
    cin >> num1;
    cin >> num2;

    if((num1 >= 100 && num1 <= 200) || (num2 >= 100 && num2 <= 200)){
        cout << "1";
    }else{
        cout << "0";
    }
}

*/

// Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise false.

/*
int main(){
    int num1, num2, num3;

    cout << "Enter three number: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if ((num1 >= 20 && num1 <= 50) || (num2 >= 20 && num2 <= 50) || (num3 >= 20 && num3 <= 50))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}
*/

// Write a C++ program to check if a string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.
/*
string remove_yt(string s)
{w
    if(s.substr(1,2) == "yt"){
        return s.substr(0,1) + s.substr(3);
    }else{
        return s;
    }
}
int main(){

    string str;
    cout << "Please, write something: ";
    cin >> str;
    string result = remove_yt(str);
    cout << "result: " << result << endl;

}*/

//// https://www.w3resource.com/cpp-exercises/basic-algorithm/index.php******************************** burdan hell ele

// Write a C++ program to check the largest number among three given integers.
/*
int main(){
    int num1,num2,num3;

    cout << "Please, enter 3 numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        cout << num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << num2;
    }else {
        cout << "The largest number is " << num3 << endl;
    }
}
*/

// Write a C++ program to check which number nearest to the value 100 among two given integers.Return 0 if the two numbers are equal.int
/*
int main(){

   int num1,num2;


   cout << "Please, enter 2 number: ";
   cin >> num1;
   cin >> num2;

   int checkNum1 = 100 - num1;
   int checkNum2 = 100 - num2;

   if(num1 == num2){
       cout << "0" << endl;
   }
   else if(checkNum1 < checkNum2)
   {
       cout << "Nearest to 100 is : " << num1 << endl;
   }else{
       cout << "Nearest to 100 is : " << num2 << endl;
   }
   */
/*
if (num1 == num2)
{
    cout << "0" << endl;
}
else if (abs(num1 - 100) < abs(num2 - 100))
{
    cout << num1 << " is nearest to 100" << endl;
}
else
{
    cout << num2 << " is nearest to 100" << endl;
}
}
*/

// Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.

/*
int main(){
    int num1, num2;

    cout << "Please, enter 2 numbers : ";
    cin >> num1;
    cin >> num2;

    if((num1 <= 40 && num1 >= 50) || (num1 <= 40 && num1 >= 50) &&  (num1 <= 40 && num1 >= 50) || (num1 <= 40 && num1 >= 50)){
        cout << "1";
    }else{
        cout << "0";
    }
}*/

// Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range.
/*
int main(){

    int num1, num2;

    cout << "Please, enter 2 numbers: ";

    cin >> num1;
    cin >> num2;

    if((num1 >= 20 && num1 <= 30) || (num2 >= 20 && num2 <= 30))
    {
        if(num2 > num1)
        {
            cout << "is large value is :" << num2;
        }else{
            cout << "is large value is :" << num1;
        }
    }else{
        cout << "0";
    }
}
*/

// Write a C++ program to check if a given string contains between 2 and 4 'z' character.
/*
int main(){
    string str;
    int count_z = 0;

    cout << "Please, write something : ";

    cin >> str;

    for(char c : str)
    {
        if(c == 'z'){
            count_z++;
        }
    }

    if(count_z >= 2 && count_z <= 4)
    {
        cout << "1";
    }else{
        cout << "0";
    }

}
*/

// Write a C++ program to check if two given non-negative integers have the same last digit.

/*
int count_digit(int number){

    int count = 0;
    while(number != 0)
    {
        number = number/10;
        count++;
    }

    return count;
}

int main(){
    int num1, num2;

    cout << "Please, write 2 numbers : ";
    cin >> num1;
    cin >> num2;

    int cntNum1Digit = count_digit(num1);
    int cntNum2Digit = count_digit(num2);

    if(cntNum1Digit == cntNum2Digit){
        cout << "0";
    }else{
        cout << "1";
    }

}
*/

// Write a C++ program to create a new string which is n (non-negative integer) copies of a given string.
/*
int main(){
    string str;
    int num;
    string new_str = "";

    cout << "Please, write something : ";
    cin >> str;
    cout << "Please, enter copies : ";
    cin >> num;

    for (size_t i = 0; i < num; i++)
    {
        new_str += str;
    }

    cout << num << "copies of " << str << " is : " << new_str << endl;

}*/

// Write a C++ program to create a new string which is n (non-negative integer) copies of the first 3 characters of a given string.
// If the length of the given string is less than 3 then return n copies of the string
/*
string copyOf3OfCh(string Ch, int numb)
{
    string new_str = "";
    for (size_t i = 0; i < numb; i++)
    {
        new_str += Ch;
    }
    return new_str;
}

int main()
{
    string str;
    int num;

    cout << "Please, write something: ";
    cin >> str;
    cout << "Please, enter copies : ";
    cin >> num;
    string first3Ch = str.substr(0, 3);

    if (str.length() < 3)
    {
        string displayNum = copyOf3OfCh(str, num);
        cout << displayNum;
    }
    else
    {
        string displayNum = copyOf3OfCh(first3Ch, num);
        cout << displayNum;
    }
}*/

// Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".

/*
int test(string str)
{
    int count_aa;
    for (int i = 0; str.length() - 1; i++)
    {
        if(str.substr(i, 2) == "aa")
        {
            count_aa++;
        }
    }
    return count_aa;

}

int main(){
    cout << test("bbaaccaag") << endl;
    cout << test("jjkiaasew") << endl;
    cout << test("JSaaakoiaa") << endl;
}*/

// Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a".
/*
int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int index = str.find("a");
    if(str[index + 1] == 'a'){
        cout << "1";
    }else{
        cout << "0";
    }


}*/

//. Write a C++ program to create a new string made of every other character starting with the first from a given string
/*
int main(){
    string str;
    string result;
    cout << "Enter a string: ";
    cin >> str;

    for (size_t i = 0; i < str.length(); i+= 2)
    {
        result += str[i];
    }

    cout << result << endl;

}*/

// Write a C++ program to create a string like "aababcabcd" from a given string "abcd".
/*
int main(){
    string str;
    string result;

    cout <<"Enter a string: ";
    cin >> str;

    for (size_t i = 0; i < str.length(); i++)
    {
        result += str.substr(0,i);
    }

    cout << result << endl;

}*/

// Write a C++ program to count a substring of length 2 appears in a given string and also as the last 2 characters of the string. Do not count the end substring
/*
int main(){
    int count = 0;
    string str;

    cout << "Enter string: ";
    cin >> str;

    for (size_t i = 0; i < str.length() - 2; i++)
    {
        string substr = str.substr(i,2);
        if (substr == str.substr(str.length() - 2, 2)){
            count++;
       }

    }
    cout << count << endl;
}
*/

// 31. Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere. Go to the editor
/*
int countSequence(int arr[], int size)
{
    int count = 0;
    for (size_t i = 0; i < size - 2; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 2 && arr[i + 2] == 3)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int input[100];
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (size_t i = 1; i <= size; i++)
    {
        cout << "Enter " << i << "element: " << endl;
        cin >> input[i];
    }

    int output = countSequence(input, size);

    cout << output << endl;
}*/

// 32. Write a C++ program to check a given array (length will be atleast 2)
// of integers and return true if there are two values 15, 15 next to each other
/*
 int checkValues1515(int arr[], int size){
     int count = 0;

     for (size_t i = 0; i < size; i++)
     {
         if (arr[i] == 15 && arr[i + 1] == 15)
         {
             count++;
         }
    }
        return count++;

}
int main(){
   int input[100];
   int size;

   cout << "Enter size of the array: ";
   cin >> size;

   cout <<"Enter elements of array: ";
   for (size_t i = 1; i <= size; i++)
   {
        cout <<"Enter " << i << " element: ";
        cin >> input[i];
   }

   int output = checkValues1515(input, size);

   if(output > 0 )
   {
       cout << "1" << endl;
   }else{
    cout << " 0 " << endl;
   }
}
*/

// 33. Create a new string from a given string where a specified character have been removed except starting and ending position of the given string.
/*
string removeSpecificCh(string s, string sCh)
{
    for (int i = s.length() - 2; i > 0; i--) // Bu funksiya ikinci sonuncu simvoldan başlayaraq (yəni, s.length() - 2) və ikinci simvolda (yəni >0) bitən for döngəsindən istifadə edərək orijinal sətirdə dövr edir. Bu dövrə verilmiş sətirin ilk və son simvollarının silinməsini istisna etmək üçün istifadə olunur.
    {
        if(s[i] == sCh[0]){
            s = s.erase(i,1);
        }
   }

   return s;


}

int main()
{
    string str;
    string spesificCh;

    cout << "Enter string: ";
    cin >> str;
    cout << "Enter spesific key to remove : ";
    cin >> spesificCh;

    string displayRmvdSpcKey = removeSpecificCh(str, spesificCh);
    cout << displayRmvdSpcKey << endl;
}*/

// //34. Write a C++ program to create a new string of the characters at indexes 0,1, 4,5, 8,9 ... from a given string. Go to the editor
/*string test(string str1)
{
   string result = "";
   for (int i = 0; i <str1.length(); i+=4)
   {
       int c = i + 2;
       int n = 0;
       n += c > str1.length() ? 1 : 2;
       result += str1.substr(i,n);
   }
   return result;
}
int main(){
   cout << test("Hasan") << endl;
   cout << test("musayev") << endl;

}
*/
// 35. Write a C++ program to count the number of 5's next to each other in an array of integers.Count the situation where the second 5 is actually a 6.
/*int test(int numbers[], int arr_length)
{
    int ctr = 0;
    for (int i = 0; i < arr_length; i++)
    {
        if ((numbers[i] == 5 && (numbers[i + 1] == 5)) || (numbers[i] == 5 && (numbers[i + 1] == 6))) ctr++;
    }
    return ctr;

}

int main()
{
    int arr_length;
    int nums1[] = {5,5,2, 5, 5,6};
    arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
}*/

// 36. Write a C++ program to check if a triple is present in an array of integers or not.
// If a value appears three times in a row in an array it is called a triple.
/*
bool  test(int nums[], int arr_length)
{
    int arra_len = arr_length - 1;
    cout << arra_len << endl;

    int n = 0;
    for (int i = 0; i < arra_len; i++)
    {
        n = nums[i];
        cout << "N : " << n << endl;
        cout << "nums + 1 :  " << nums[i+1] << endl;
        cout << "nums + 2 :  " << nums[i+2] << endl;
        if(n == nums[i+1] && n == nums[i+2]) return true;
    }
    return false;

}

int main()
{
    int arr_length;
    int nums1[] = {1,2,1,2};
    arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
}*/

// 37. Write a C++ program to compute the sum of the two given integers.If the sum is in the range 10..20 inclusive return 30.
/*int test(int num1, int num2)
{
    int result = num1 + num2;
    if(result >= 10 && result <= 20)
    {
        return 30;
    }else{
        return result;
    }
}

int main()
{
    int num1;
    int num2;
    cout << "Write first number :" << endl;
    cin >> num1;
    cout << "Write second number :" << endl;
    cin >> num2;

    cout << test(num1, num2) << endl;
}*/

// 38. Write a C++ program that accepts two integers and returns true if either one is 5 or their sum or difference is 5.
/*bool test(int num1, int num2)
{
    return num1 == 5 || num2 == 5 || num2 + num1 == 5 || abs(num1 - num2) == 5;
}

int main()
{
    cout << test(5,4) << endl;
    cout << test(4,3) << endl;
    cout << test(1,4) << endl;
}*/

// 39. Write a C++ program to test if a given non - negative number is a multiple of 13 or it is one more than a multiple of 13.

/*
 bool test(int n)
 {
    return n % 13 == 0 || n % 13 == 1;
 }


int main()
{
    cout << test(13) << endl;
    cout << test(14) << endl;
    cout << test(27) << endl;
    cout << test(41) << endl;
}*/

// 40. Write a C++ program to check if a given number that is not negative is a multiple of 3 or 7, but not both.
/*
bool test(int n)
{
    return n % 3 == 0 ^ n % 7 == 0;
}

int main()
{
    cout << test(3)  << endl;
    cout << test(7)  << endl;
    cout << test(21) << endl;
}
*/
// 41. Write a C++ program to check if a given number is within 2 of a multiple of 10.
/*
bool test(int n)
{
    return n % 10 <= 2 || n % 10 >= 8;
}

int main()
{
    cout << test(3) << endl;
    cout << test(7) << endl;
    cout << test(8) << endl;
    cout << test(21) << endl;
    return 0;
}
*/
// 42. Write a C++ program to compute the sum of the two given integers.
// Return 18 if one of the given integer values is in the range 10..20 inclusive.
/*
int test(int num1, int num2)
{
    int result = num1 + num2;

    return (num1 >= 10 && num2 <= 20 || num2 >= 10 && num2 <= 20 ? 18 : result);

}

int main()
{
    cout << test(3, 7) << endl;
    cout << test(10, 11) << endl;
    cout << test(10, 20) << endl;
    cout << test(21, 220) << endl;
}
*/

// 43. Write a C++ program to check whether a given string begins with "F" or ends with "B".
// If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B".
// If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string.
/*
string test(string str)
{
    if((str.substr(0,1) == "F") &&(str.substr(str.length()-1,1) == "B"))
    {
        return "FizzBuzz";
    }else if(str.substr(0,1) == "F")
    {
        return "Fizz";
    }else if(str.substr(str.length() - 1, 1) == "B")
    {
        return "Buzz";
    }else{
        return str;
    }
}
int main()
{
    cout << test("FB") << endl;
    cout << test("Fsafs") << endl;
    cout << test("AuzzB") << endl;
    cout << test("founder") << endl;
}*/

// 44. Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.
/*

bool test(int x, int y, int z)
{
    return x == y + z || y == x + z || z == x + y;
}

int main()
{
        cout << test(10, 20, 30) << endl;
        cout << test(4, 29, 30) << endl;
}*/

// 45. Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x, y, z.

/*
bool test(int x, int y, int z)
{
    return y > x && z > y;
}
int main()
{
    cout << test(1, 2, 3) << endl;
    cout << test(4, 5, 6) << endl;
    cout << test(-1, 1, 0) << endl;
}
*/

// 46. Write a C++ program to check if three given numbers are in strict increasing order.
// For example, 4, 7, 15, or 45, 56, 67, but not 4, 5, 8 or 6, 6, 8. However, if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7.
/*
bool test(int x, int y, int z, bool flag)
{
    return flag ? x <= y && y <= z : x < y && y < z;
}

int main()
{
    cout << test(1, 2, 3, false) << endl;
    cout << test(1, 2, 3, true) << endl;
    cout << test(10, 2, 30, false) << endl;
    cout << test(10, 10, 30, true) << endl;
}*/

// 47. Write a C++ program to check if two or more integers that are not negative have the same rightmost digit.
/*
bool test(int x, int y, int z)
{

    return x % 10 == y % 10 &&  x % 10 == z % 10 && y % 10 == z % 10;

}

int main()
{
    cout << test(11, 21, 31) << endl;
    cout << test(13, 33, 23) << endl;
    cout << test(11, 22, 33) << endl;
}*/

// 48. Write a C++ program to check three given integers and return true if one of them is 20 lower than one of the others.
/*
bool test(int x, int y, int z)
{
    return abs(x-y) >= 20 || abs(x-z) >= 20 || abs(y-z) >= 20;
}
int main()
{
    cout << test(11, 21, 31) << endl;
    cout << test(11, 22, 31) << endl;
    cout << test(10, 20, 15) << endl;
}*/

// 49. Write a C++ program to find the larger of two given integers.
// However if the two integers have the same remainder when divided by 7, then return the smaller integer. If the two integers are the same, return 0.
/*
int test(int x, int y)
{
    if( x == y)
    {
        return 0;
    }else if((x % 7 == y % 7 &&  x < y) || x > y)
    {
        return x;
    }else{
        return y;
    }
}

int main()
{
    cout << test(8, 21) << endl;
    cout << test(22, 11) << endl;
    cout << test(10, 10) << endl;
}
*/
// 50. Write a C++ program to check two given integers.Each integer is in the range 10..99.
// Return true if a digit appears in both numbers, such as the 3 in 13 and 33.
/*
bool test(int x, int y)
{
    return x / 10 == y / 10 || x / 10 == y % 10 || x % 10 == y / 10 || x % 10 == y % 10;
}

int main()
{
    cout << test(11, 21) << endl;
    cout << test(11, 20) << endl;
    cout << test(10, 10) << endl;
}*/

// 51. Write a C++ program to compute the sum of two given non - negative integers x and y
// as long as the sum has the same number of digits as x.If the sum has more digits than x, return x without y.
/*
int test(int x, int y)
{
    return to_string(x+y).length() > to_string(x).length() ? x : x + y;
}

int main()
{
    cout << test(4, 5) << endl;
    cout << test(7, 4) << endl;
    cout << test(10, 10) << endl;
}*/

// 52. Write a C++ program to compute the sum of three given integers. Return the third value if the two values are the same.
/*
int test(int x, int y, int z)
{
    if (x == y && y == z) return 0;
            if (x == y) return z;
            if (x == z) return y;
            if (y == z) return x;
            return x + y + z;
}

int main()
{
    cout << test(4, 5, 7) << endl;
    cout << test(7, 4, 12) << endl;
    cout << test(10, 10, 12) << endl;
    cout << test(1, 18, 18) << endl;
}
*/

// 53. Write a C++ program to compute the sum of the three integers.
// If one of the values is 13 then do not count it and its right towards the sum.

/*
int test(int x, int y, int z)
{
    if(x == 13) return  0;
    if(y == 13) return x;
    if(z == 13) return x + y;
    return x + y + z;
}

int main()
{
    cout << test(4, 5, 7) << endl;
    cout << test(7, 4, 12) << endl;
    cout << test(10, 13, 12) << endl;
    cout << test(13, 12, 18) << endl;
}*/

// 54. Write a C++ program to compute the sum of the three given integers.
// Except for 13 and 17, any value in the range 10..20 inclusive counts as 0.
/*
class Solution
{
    public :

int test(int x, int y, int z)
{
    return fix_num(x) + fix_num(y) + fix_num(z);

}

int fix_num(int n)
{
    return (n < 13 && n > 9) || (n > 17 && n < 21) ? 0 : n;
}

};
int main()
{
    Solution *solution = new Solution();
    cout << solution->test(4, 5, 7) << endl;
    cout << solution->test(7, 4, 12) << endl;
    cout << solution->test(10, 13, 12) << endl;
    cout << solution->test(17, 12, 18) << endl;
}*/

// 55. Write a C++ program to check two integers and return the value nearest to 13 without crossing over.Return 0 if both numbers go over.
/*
int test(int x, int y)
{
     if (x > 13 && y > 13) return 0;
     if (x <= 13 && y > 13) return x;
     if (y <= 13 && x > 13) return y;
=======

int test(int x, int y)
{
    if (x > 13 && y > 13) return 0;
    if (x <= 13 && y > 13) return x;
    if (y <= 13 && x > 13) return y;
    return x > y ? x : y;
}

int main()
{
    cout << test(4, 5) << endl;
<<<<<<< HEAD
    cout << test(7, 15) << endl;
    cout << test(10, 9) << endl;
    cout << test(17, 33) << endl;
}*/

// 56. Write a C++ program to check three given integers(small, medium and large)
// and return true if the difference between small and medium and the difference between medium and large is same.
/*
bool test(int x, int y, int z)
{
    if(x > y && x > z && y > z) return x - y == y - z;
    if(x > y && x > z && z > y) return x - y == z - y;
    if(y > x && y > z && x > z) return y - x == x - z;
    if(y > x && y > z && z > x) return y - z == z - x;
    if(z > x && z > y && x > y) return z - x == x - y;

    return  y - x == z - y;
}

int main()
{
    cout << test(4, 5, 6) << endl;
    cout << test(7, 12, 13) << endl;
    cout << test(-1, 0, 1) << endl;
}*/

// 57. Write a C++ program to create another string using two given strings s1, s2, the format of the new string will be s1s2s2s1.
/*
string test(string x, string y)
{
    string result = x + y + y + x;
    return result;
}

int main()
{
    cout << test("Hi", "Hello") << endl;
    cout << test("whats", "app") << endl;
}
*/

// 58. Write a C++ program to insert a given string into middle of the another given string of length 4
/*
string test(string x, string y)
{
    string beforeCh = x.substr(0,2);
    string lastCh = x.substr(2,4);

    return beforeCh + y + lastCh;
}

int main()
{
    cout << test("(())", "Hello") << endl;
}*/

// 59. Write a C++ program to create another string using three copies of the last two characters of a given string of length at least two.
/*
string test(string x)
{
   string last2ch =  x.substr(x.length() - 2);
   return last2ch + last2ch + last2ch;
}

int main()
{
   cout << test("Hello") << endl;
   cout << test("Hi") << endl;
}*/

// 60. Write a C++ program to create a new string using the first two characters of a given string.
// If the string length is less than 2, return the original string.
/*
string test(string x){
    return x.length() > 2 ? x.substr(0, 2) : x;
}

int main()
{
    cout << test("Hello") << endl;
    cout << test("Hi") << endl;
    cout << test("H") << endl;
    cout << test(" ") << endl;
}*/

// 61. Write a C++ program to create the string of the first half of a given string of even length.
/*
string test(string s)
{
    return s.substr(0, s.length() / 2);
}


int main()
{
    cout << test("hasan") << endl;
}*/

// 62. Write a C++ program to create a new string without the first and last characters of a given string of length at least two.
/*
string test(string s)
{
    return s.substr(1)
        .substr(0, s.length() - 2);
}

int main()
{
    cout << test("Hasan") << endl;
}*/

// 63. Write a C++ program to create a new string from two given strings, one of which is shorter and the other is larger.
// The format of the updated string will be long string + short string + long string.
/*
string test(string s1, string s2)
{

    return s1.length() < s2.length() ? s2 + s1 + s2 : s1 + s2 + s1;
}

int main()
{
    cout << test("Hasan", "Js") << endl;
}*/

// 64. Write a C++ program to combine two strings of length at least 1, after removing their first character.
/*
string test(string s1, string s2)
{
    return s1.substr(1) + s2.substr(1);
}

int main()
{
    cout << test("Hello", "Hi") << endl;
    cout << test("JS", "Python") << endl;
}

*/

// Find max and min given array and return sum the digit of value of max and min
/*\
int main(int argc, char const * argv[])
{
    int n;
    cout << "enter number: " endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curmin = arr[0];
    int curmax = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > curmax)
        {
            curmax = arr[i];
        }

        if(arr[i] < curmin)
        {
            curmin = arr[i];
        }
    }

    int difference = curmax - curmin;

    int s = 0;
    while(difference != 0)
    {
        s = s + difference % 10;
        difference = difference / 10;
    }
    cout << to_string(difference).length() << endl;
    cout <<  s << endl;
}
*/

// 65. Write a C++ program to move the first two characters to the end of a given string of length at least
/*
string test(string s1)
{
    return s1.erase(0, 2) + s1.substr(0,2);
}

int main()
{
    cout << test("Hello") << endl;
    cout << test("hasan") << endl;
}*/

// 66. Write a C++ program to create a new string without the first and last characters of a given string of any length.
/*
string test(string s)
{
    return s.length() < 2 ? " " : s.substr(1, s.length()-2);
}

int main()
{
    cout << test("Hello") << endl;
    cout << test("JS") << endl;
}*/

// task
/*
string test(string s1)
{
    char c;
    string word;
    word = s1;
    for (int i = 0; i < s1.size(); i++)
    {
        c = s1.at(i);
        if( c == '(')
        {
            word += ")";
        }
    }

    string result = word.substr(2, s1.length());
    return result;
}

int main()
{
    cout << test("((((") << endl;
}*/

// 67. Write a C++ program to create a string using the two middle characters of a given string of even length (at least 2).
/*
string test(string s)
{
    return s.substr(s.length() / 2 - 1, 2);
}

int main()
{
    cout << test("hasanhasan") << endl;
    cout << test("Hell") << endl;
    cout << test("JS") << endl;
}*/

// 68. Write a C++ program to create a new string using the first and last n characters from a given string of length at least n.
/*
string test(string s, int n)
{
    return s.substr(0, n) + s.substr(s.length() - n);

}

int main()
{
    cout << test("Hello", 1) << endl;
    cout << test("Python", 2) << endl;
    cout << test("on", 1) << endl;
    cout << test("o", 1) << endl;
}
*/
// 69. Write a C++ program to create a string of length 2 starting at the given index of a given string.
/*
string test(string s, int index)
{
    return index + 2 <= s.length() ? s.substr(index, 2) : s.substr(0,2);
}

int main()
{
     cout << test("Hello", 1) << endl;
    cout << test("Python", 1) << endl;
    cout << test("on", 1) << endl;
}
*/

// 70. Write a C++ program that takes at least 3 characters from the middle of a given string that would be used to create a string.
/*
string test(string s)
{
    return s.substr((s.length() - 1) / 2 - 1, 3);
}

int main()
{
    cout << test("Hello") << endl;
    cout << test("Python") << endl;
    cout << test("abc") << endl;
}
*/

// 71. Write a C++ program to create a new string of length 2, using the first two characters of a given string.
// If the given string length is less than 2 use '#' as missing characters.
/*
string test(string s)
{
    if(s.length() < 1)
    {
        s = s + "##";
    }else if(s.length() < 2)
    {
        s = s + "#";
    }else{
        s = s.substr(0,2);
    }
    return s;
}

int main()
{
    cout << test("Hello") << endl;
    cout << test("s") << endl;
    cout << test("") << endl;
}*/

// 72. Write a C++ program to create a string taking the first character from a string and the last character from another given string.
// If the length of any given string is 0, use '#' as its missing character.
/*
string test(string s1, string s2)
{
    if (s2.length() < 1)
    {
        return s1.substr(0, 1) + "#";
    }
    else
    {
        return s1.substr(0, 1) + s2.substr(s2.length() - 1);
    }
}

int main()
{
    cout << test("Hello", "Hi") << endl;
    cout << test("Python", "PHP") << endl;
    cout << test("JS", "JS") << endl;
    cout << test("Csharp", "") << endl;
}
*/

// 73. Write a C++ program to create a new string from a given string after swapping the last two characters.
/*
string test(string s1)
{

    if (s1.length() > 1)
    {
        return s1.substr(0, s1.length() - 2) + s1[s1.length() - 1] + s1[s1.length() - 2];
    }
    else
    {
        return s1;
    }

}

int main()
{
    cout << test("Hello") << endl;
    cout << test("Python") << endl;
    cout << test("PHP") << endl;
    cout << test("JS") << endl;
    cout << test("C") << endl;
}
*/

// 74. Write a C++ program to check if a given string begins with 'abc' or 'xyz'.
// If the string begins with 'abc' or 'xyz' return 'abc' or 'xyz' otherwise return the empty string.
/*
string test(string s1)
{
    if(s1.substr(0,3) == "abc")
    {
        return "abc";
    }
    else if (s1.substr(0, 3) == "xyz")
    {
        return "xyz";
    }else{
        return "";
    }
}

int main()
{
    cout << test("abc") << endl;
    cout << test("abcdef") << endl;
    cout << test("C") << endl;
    cout << test("xyz") << endl;
    cout << test("xyzsder") << endl;
}*/

// 75. Write a C++ program to check whether the first two characters and the last two characters of a given string are the same.
/*
bool test(string s1)
{
    return s1.substr(0,2) == s1.substr(s1.length() - 2);
}

int main()
{
    cout << test("abab") << endl;
    cout << test("abcdef") << endl;
    cout << test("xyzsderxy") << endl;
}*/

// 76. Write a C++ program to add two given strings.
// If the given strings have different lengths, remove the characters from the longer string.
/*
string test(string s1, string s2)
{
    if(s1.length() < s2.length())
    {
        return s1 + s2.substr(s2.length() - s1.length());
    }else if( s1.length() > s2.length())
    {
        return s2 + s1.substr(s1.length() - s2.length());
    }
    else
    {
        return s1 + s2;
    }
}

int main()
{
    cout << test("abcdx", "abc") << endl;
    cout << test("Python", "Python") << endl;
    cout << test("JS", "Python") << endl;
}*/

// 77. Write a C++ program to create a new string using 3 copies of the first 2 characters of a given string.
// If the length of the given string is less than 2 use the whole string.
/*
string test(string s1)
{
    if(s1.length() < 2)
    {
        return s1 + s1 +s1;
    }else{
        string ch2 = s1.substr(0, 2);
        return ch2 + ch2 + ch2;
    }
}

int main()
{
    cout << test("abc") << endl;
    cout << test("Python") << endl;
    cout << test("J") << endl;
}*/

// 78. Write a C++ program to create a new string from a string.
// Return the given string without the first two characters if the two characters at the beginning and end are the same.
// Otherwise, return the original string.
/*
string test(string s1)
{
    if(s1.substr(0,2) == s1.substr(s1.length() - 2))
    {
        return s1.erase(0,2);
    }else{
        return s1;
    }
}

int main()
{
    cout << test("abcab") << endl;
    cout << test("Python") << endl;
    cout << test("abcabab") << endl;
}*/

// 79. Write a C++ program to create a string from a given string without the first and last character.
// This is possible if the first or last characters are 'a' otherwise return the original given string.
/*
string test(string s)
{
    if (s.substr(s.length() - 1) == "a")
    {
        s =  s.erase(s.length()- 1);
    }
     if (s.substr(0, 1) == "a")
    {
        s = s.erase(0,1);
    }

    return s;
}

int main()
{
    cout << test("abcab") << endl;
    cout << test("python") << endl;
    cout << test("rbcda") << endl;
    cout << test("abcda") << endl;
    cout << test("jython") << endl;
}*/

// 80. Write a C++ program to create a new string from a given string.
// If the first or first two characters are 'a', return the string without those 'a' characters, otherwise return the original string.
/*
string test(string s)
{
    if(s.substr(0,1) == "a")
    {
        //s = s.erase(0,1);
        s = s.substr(1);
        if(s.substr(0,2) == "a")
        {
           // s = s.erase(0,2);
            s = s.substr(2);
        }
    }

    return s;
}


int main()
{
    cout << test("abcab") << endl;
    cout << test("python") << endl;
    cout << test("aacda") << endl;
    cout << test("jython") << endl;
}
*/

// 81. Write a C++ program to check a given array of integers of length 1 or more and
// return true if 10 appears as either first or last element in the given array.
/*
bool test(int nums[], int arr_length)
{
    return nums[0] == 10 || nums[arr_length - 1] == 10;
}

int main()
{
    int arr_length;
    int nums1[] = {10, 20, 40, 50};
    arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {5, 20, 40, 10};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {10, 20, 40, 10};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {12, 24, 35, 55};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
}*/

// 82. Write a C++ program to check a given array of integers of length 1 or more.
// The program will return true if the first element and the last element are equal in the given array.
/*
bool test(int nums[], int arr_length)
{
    return arr_length > 0 && nums[0] == nums[arr_length - 1];
}

int main()
{
    int arr_length;
    int nums1[] = {10, 20, 40, 50};
    arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {10, 20, 40, 10};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums4[] = {12, 24, 35, 55};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
}
*/

// 83. Write a C++ program to check two given arrays of integers of length 1 or more.
// This will return true if they have the same first element or if they have the same last element.
/*
bool test(int nums[], int arr_length, int nums2[], int arr_length2)
{
    return  nums[0] == nums2[0] || nums[arr_length - 1] == nums2[arr_length2 - 1];
}

int main()
{
    int arr_length1, arr_length2;
    int nums11[] = {10, 20, 40, 50};
    int nums12[] = {10, 20, 40, 50};
    arr_length1 = sizeof(nums11) / sizeof(nums11[0]);
    arr_length2 = sizeof(nums12) / sizeof(nums12[0]);
    cout << test(nums11, arr_length1, nums12, arr_length2) << endl;
    int nums21[] = {10, 20, 40, 50};
    int nums22[] = {10, 20, 40, 5};
    arr_length1 = sizeof(nums21) / sizeof(nums21[0]);
    arr_length2 = sizeof(nums22) / sizeof(nums22[0]);
    cout << test(nums11, arr_length1, nums12, arr_length2) << endl;
    int nums31[] = {10, 20, 40, 50};
    int nums32[] = {1, 20, 40, 5};
    arr_length1 = sizeof(nums31) / sizeof(nums21[0]);
    arr_length2 = sizeof(nums32) / sizeof(nums22[0]);
    cout << test(nums31, arr_length1, nums32, arr_length2) << endl;
}*/

// 84. Write a C++ program to compute the sum of the elements of an array of integers.
/*
int test(int a1[])
{
    return a1[0] + a1[1] + a1[2] + a1[3] + a1[4];
}

int main()
{
    int nums[] = {10, 20, 30, 40, 50};
    cout << test(nums) << endl;
    int nums1[] = {10, 20, -30, -40, 50};
    cout << test(nums1) << endl;
}*/

// 85. Write a C++ program to rotate the elements of a given array of integers (length 4 ) in the left direction and return the changed array.
/*
int *test(int nums[])
{
    static int r_array[] = { nums[1], nums[2], nums[3], nums[0]};
    return r_array;
}

int main()
{
    int *p;
    int nums[] = {10, 20, 30, 40};

    int arr_length = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << nums[i] << " ";
    }

    p = test(nums);

    cout << "\nRotated array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }
}*/

// 86. Write a C++ program to reverse a given array of integers of length 5.
/*
int *test(int nums[])
{
    static int r_array[] = {nums[4], nums[3], nums[2], nums[1],nums[0]};
    return r_array;
}

int main()
{
    int *p;
    int nums[] = {10, 20, 30, 40, 50};

    int arr_length = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << nums[i] << " ";
    }

    p = test(nums);

    cout << "\nRotated array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }
}
*/

// 87. Write a C++ program to create an array containing the middle elements from the two given arrays of integers, each of length 5.
/*
int *test(int nums1[], int nums2[])
{

    static int max_array[] = {nums1[2], nums2[2]};
    return max_array;
}

int main()
{
    // a pointer to an int.
    int *p;
    int nums1[] = {0, 10, 20, 30, 40};
    int nums2[] = {0, -10, -20, -30, -40};

    p = test(nums1, nums2);

    cout << "\nNew array: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << *(p + i) << " ";
    }
}
*/

// 88. Write a C++ program to create an array taking the first and last elements of a given array of integers and length 1 or more.

/*
int *test(int nums[], int arr_length)
{
    static int r_array[] = {nums[0], nums[arr_length - 1]};
    return r_array;
}

int main()
{
    int *p;
    int nums[] = {10, 20, -30, -40, 30};

    int arr_length = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << nums[i] << " ";
    }

    p = test(nums, arr_length);
    arr_length = sizeof(p) / sizeof(p[0]);
    cout << "\nNew array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }
}*/

// 89. Write a C++ program to determine whether a given array of integers of length 2 contains 15 or 20.
/*
bool test(int nums[])
{
    return nums[0] == 15 || nums[1] == 15 || nums[0] == 20 || nums[1] == 20;
}

int main()
{
    int nums1[] = {12, 20};
    int nums2[] = {14, 15};
    int nums3[] = {11, 21};
    cout << test(nums1) << endl;
    cout << test(nums2) << endl;
    cout << test(nums3) << endl;
}*/

// 90. Write a C++ program to check if an array of integers with length 2 does not contain 15 or 20.
/*
bool test(int nums[])
{
    return nums[0] != 15 && nums[1] != 15 && nums[0] != 20 && nums[1] != 20;
}

int main()
{
    int nums1[] = {12, 20};
    int nums2[] = {14, 15};
    int nums3[] = {11, 21};
    cout << test(nums1) << endl;
    cout << test(nums2) << endl;
    cout << test(nums3) << endl;
    return 0;
}

*/

// 91. Write a C++ program to check a given array of integers and return true if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2.

/*
bool test(int nums[], int arr_length)
{
    return arr_length == 2 && ((nums[0] == 10 && nums[1] == 10) || (nums[0] == 20 && nums[1] == 20));
}

int main()
{
    int nums1[] = {12, 20};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {20, 20};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {10, 10};
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {10};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
}*/

// 92. Write a C++ program to check a given array of integers, length 3 and create an array.
// If there is a 5 in the given array immediately followed by a 7 then set 7 to 1.
/*
int *test(int nums[], int arra_length)
{
    for (int i = 0; i < arra_length - 1; i++)
    {
        if(nums[i] == 5 && nums[i + 1] == 7)
        {
            nums[i + 1] = 1;
        }
    }
    return nums;
}

int main()
{
    int *p;
    int nums1[] = {1, 5, 7};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);

    p = test(nums1, arr_length);

    cout << "\nNew array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }

    int *p2;
    int nums2[] = {1, 5, 3, 7};
    int arr_length2 = sizeof(nums2) / sizeof(nums2[0]);

    p2 = test(nums2, arr_length2);

    cout << "\nNew array: " << endl;
    for (int i = 0; i < arr_length2; i++)
    {
        cout << *(p2 + i) << " ";
    }
}
*/

// 93. Write a C++ program to compute the sum of the two given arrays of integers,
// length 3 and find the array that has the largest sum.
/*
int *test(int nums1[], int nums2[])
{
    return nums1[0] + nums1[1] + nums1[2] >= nums2[0] + nums2[1] + nums2[2] ? nums1 : nums2;
}

int main()
{
    int *p;
    int nums1[] = {1, 5, 7};
    int nums2[] = {1, 5, 3};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    p = test(nums1, nums2);
    cout << "\nNew array: " << endl;
    for (int i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }
    return 0;
}*/

// 94. Write a C++ program to create an array taking two middle elements from a given array of integers of length even.
/*static int *test(int nums1[], int arra_length)
{
    static int r_array[] = {nums1[arra_length / 2 -1 ], nums1[arra_length / 2]};
    return r_array;
}

int main()
{
    int *p, i;
    int nums1[] = {1, 5, 7, 9, 11, 13};
    cout << "Original array:" << endl;
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    for (i = 0; i < arr_length; i++)
    {
        cout << nums1[i] << " ";
    }
    p = test(nums1, arr_length);
    cout << "\nNew array: " << endl;
    arr_length = sizeof(p) / sizeof(p[0]);
    for (i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }
}*/

// 95. Write a C++ program to create an array by swapping the first
// and last elements of a given array of integers with a length of at least 1.
/*
static int *test(int nums[], int arra_length)
{
    int first = nums[0];
    nums[0] = nums[arra_length - 1];
    nums[arra_length - 1] = first;
    return nums;
}

int main()
{
    int *p, i;
    int nums1[] = {1, 5, 7, 9, 11, 13};
    cout << "Original array:" << endl;
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    for (i = 0; i < arr_length; i++)
    {
        cout << nums1[i] << " ";
    }
    p = test(nums1, arr_length);
    cout << "\nNew array (after swapping the first and last elements of the said array): " << endl;
    for (i = 0; i < arr_length; i++)
    {
        cout << *(p + i) << " ";
    }
}

*/

// 96. Write a C++ program to create an array length 3 from a given array (length at least 3) using the elements from the middle of the array.
/*
static int *test(int nums[], int arra_length)
{
    static int r_array[] = {nums[arra_length / 2  - 1 ], nums[arra_length /2], nums[arra_length / 2 + 1]};
    return r_array;

}

int main()
{
    int *result, i;
    int nums[] = {1, 5, 7, 9, 11, 13};
    int arr_length = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array:" << endl;

    for (i = 0; i < arr_length; i++)
        cout << nums[i] << " ";

    result = test(nums, arr_length);
    cout << "\nNew array:" << endl;
    arr_length = sizeof(result) / sizeof(result[0]);
    for (i = 0; i <= arr_length; i++)
    {
        cout << *(result + i) << " ";
    }
}*/

// 97. Write a C++ program to find the largest value from the first, last, and middle elements of a given array of integers of odd length (at least 1).
/*
int test(int nums[], int arr_length)
{
    int first, max_elem, middle_elem, last_elem;
    first = nums[0];
    middle_elem = nums[arr_length / 2];
    last_elem = nums[arr_length - 1];
    max_elem = first;

    if(middle_elem > max_elem) {
        max_elem = middle_elem;
    }
    if(last_elem > max_elem) {
        max_elem = last_elem;
    }

    return max_elem;

}

int main()
{
    int nums1[] = {1};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 2, 9};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {1, 2, 9, 3, 3};
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {1, 2, 3, 4, 5, 6, 7};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
    int nums5[] = {1, 2, 2, 3, 7, 8, 9, 10, 6, 5, 4};
    arr_length = sizeof(nums5) / sizeof(nums5[0]);
    cout << test(nums5, arr_length) << endl;
}
*/

// 98. Write a C++ program to count the even number of elements in a given array of integers.
/*int test(int nums[], int arra_length)
{
    int evens = 0;
    for (int i = 0; i < arra_length; i++)
    {
        if(nums[i] % 2 == 0)
        {
            evens += 1;
        }
    }

    return evens;

}

int main()
{
    int nums1[] = {1, 5, 7, 9, 10, 12};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {0, 2, 4, 6, 8, 10};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
}*/

// 99. Write a C++ program to compute the difference between the largest
// and smallest values in a given array of integers and length one or more.
/*
int test(int nums[], int arra_length)
{
    int max = nums[0];
    int min = nums[0];

    for (int i = 0; i < arra_length; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }

        if(nums[i] < min)
        {
            min = nums[i];
        }
    }

    int diff = max - min;
    return diff;


}

int main()
{
    int nums1[] = {1, 5, 7, 9, 10, 12};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {0, 2, 4, 6, 8, 10};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
}

*/

// 100. Write a C++ program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integers.
/*
int test(int nums[], int arr_length)
{
    int total = 0;
    for (int i = 0; i < arr_length; i++)
    {
        if (nums[i] != 17) total += nums[i];
    }
    return total;

}

int main()
{
    int nums1[] = {1, 5, 7, 9, 10, 17};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Sum of values in the array of integers except the number 17:" << endl;
    cout << test(nums1, arr_length) << endl;
}

*/

///*****************************************************************************************
// 101. Write a C++ program to compute the sum of the numbers in a given array
// except the ones starting with 5 followed by at least one 6. Return 0 if the given array has no integers.
/*
static int test(int nums[], int arr_length)
{
    int total = 0;
    int inSection = 0;
    int flag = 0;
    for (int i = 0; i < arr_length; i++)
    {
        inSection = 0;
        if (nums[i] == 5)
        {
            inSection = 0;
            flag = 1;
        }
        if (inSection = 0 && nums[i] == 6)
        {
            if (flag == 1)
            {
                total = total - 5;
                inSection = 1;
            }
            flag  = 0;
        }

        if(inSection == 0)
        {
            total += nums[i];
        }
    }
    return total;
}

int main()
{
    int nums1[] = {1, 5, 5, 10, 5, 17};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Sum of the numbers of the said array except those numbers starting with 5 followed by atleast one 6: " << endl;
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 5, 6, 9, 10, 17};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Sum of the numbers of the said array except those numbers starting with 5 followed by atleast one 6: " << endl;
    cout << test(nums2, arr_length) << endl;
}
*/

// 102. Write a C++ program to check if a given array of integers contains 5 next to a 5 somewhere.
/*
static bool test(int nums[], int arra_length)
{
    for (int i = 0; i < arra_length - 1; i++)
    {
       if(nums[i] == 5 && nums[i] == nums[i + 1]) return true; 
    }
    return false;
    
}
int main()
{

 int nums1[] = { 1, 5, 6, 9, 10, 17 };
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = { 1, 5, 5, 9, 10, 17 };
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = { 1, 5, 5, 9, 10, 17, 5, 5 };
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
}
*/


//103. Write a C++ program to check whether a given array of integers contains 5's and 7's.
/*
static bool test(int nums[], int arr_length) {
    for (int i = 0; i < arr_length; i++)
    {
        if(nums[i] == 5 || nums[i] == 7 )
        {
            return true;
        }
    }
    return false;

}

int main()
{
      int nums1[] = { 1, 5, 6, 9, 10, 17 };
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = { 1, 4, 7, 9, 10, 17 };
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = { 1, 1, 2, 9, 10, 17 };
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
  return 0; 
}

*/


//104. Write a C++ program that checks if the sum of all 5' in the array is exactly 15.
/*
static bool test(int nums[], int arr_length)
{
    int total;
    for(int i = 0; i < arr_length; i++)
    {
        if(nums[i] == 5)
        {
            total += 5;
        }
    }
    return sum == 15;
}


int main()
{
      int nums1[] = {1, 5, 6, 9, 10, 17};
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = {1, 5, 5, 5, 10, 17};
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = { 1, 1, 5, 5, 5, 5 };
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
}
*/

//105. Write a C++ program to check if the number of 3's is greater than the number of 5's.
/*
static bool test(int nums[], int arra_length)
{
   
        return (nums[3] > nums[4]);
    
}

int main()
{
        int nums1[] = {1, 5, 6, 9, 3, 3};
        int arr_length = sizeof(nums1) / sizeof(nums1[0]);
        cout << test(nums1, arr_length) << endl;
        int nums2[] = {1, 5, 5, 5, 10, 17};
        arr_length = sizeof(nums2) / sizeof(nums2[0]);
        cout << test(nums2, arr_length) << endl;
        int nums3[] = {1, 3, 3, 5, 5, 5};
        arr_length = sizeof(nums3) / sizeof(nums3[0]);
        cout << test(nums3, arr_length) << endl;
}*/

// 106. Write a C++ program to check if a given array of integers contains a 3 or a 5.
/*
static bool test(int nums1[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        if(nums1[i] == 5 || nums1[i] == 3) return true;
      
    }
    return false;
    
}

int main()
{
    int nums1[] = {5, 5, 5, 5, 5};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {3, 3, 3, 3};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 3, 3, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {1, 6, 8, 10};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
}*/

//107. Write a C++ program to check if a given array of integers contains no 3 or 5.
/*
static bool test(int nums[], int arr_length)
{
    bool three  = false;
    bool five = false;

    for (int i = 0; i < arr_length; i++)
    {
        if(nums[i] == 3) {three = true;}
        if(nums[i] == 5) {five = true;}
        if (three && five) return false;

    }
    return true;
    
}

int main()
{
    int nums1[] = {5, 5, 5, 5, 5};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl; 
    int nums2[] = {3, 3, 3, 3};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 3, 3, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {1, 6, 8, 10};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
}
*/

// 108. Write a C++ program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both.

/*
static bool test(int nums[], int arr_length)
{
    for (int i = 0; i < arr_length ; i++) if((nums[i] == 3 && nums[i + 1] == 3) || (nums[i] == 5 && nums[i + 1] == 5)) return true;   
    return false;
}

int main()
{
    int nums1[] = {5, 5, 5, 5, 5};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 2, 3, 4};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 3, 5, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {1, 5, 5, 7, 8, 10};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
    return 0;
}
*/

// 109. Write a C++ program to check a given array of integers. Then, return true if the given array contains two 5's next to each other,
// or two 5's separated by one element.
/*
static bool test(int nums[], int arr_length)
{
    for (int i = 0; i < arr_length - 1; i++)
    {
        if(nums[i] == 5 && nums[i + 1] == 5) return true;
        if (i + 2 < arr_length && nums[i] == 5 && nums[i + 2] == 5) return true;
    }
    return false;
}

int main()
{
    int nums1[] = {5, 5, 1, 5, 5};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 2, 3, 4};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 3, 5, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {1, 5, 5, 7, 8, 10};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
    return 0;
}
*/

//110. Write a C++ program to check a given array of integers and return true if there is a 3 with a 5 somewhere later in the given array.
/*
static bool test(int nums[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        if(nums[i] == 3 && nums[i + 1] == 5) return true;
    }
    return false;
    
}

int main()
{
    int nums1[] = {3, 5, 1, 3, 7};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 2, 3, 4};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 3, 5, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {2, 5, 5, 7, 8, 10};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
    return 0;
}

*/

// 111. Write a C++ program to check a given array of integers. 
//The program will return true if the given array contains either 2 even or 2 odd values all next to each other.
/*
static bool test(int nums[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        if(nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) return true;
        if(nums[i] % 2 == 1 && nums[i + 1] % 2 == 1) return true;
    }
    return false;
}
int main()
{
    int nums1[] = {3, 5, 1, 3, 7};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {1, 2, 3, 4};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 3, 5, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {2, 4, 5, 6};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
    return 0;
}
*/

//112. Write a C++ program to check a given array of integers. 
//The program will return true if the value 5 appears 5 times and there are no 5 next to each other.
/*/
static bool test(int nums[], int arr_length)
{
    int count;
    for(int i = 0; i < arr_length; i++)
    {
        if(nums[i] == 5)
        {
            count++;
            // Check if the next element is also 5
            if (i < arr_length - 1 && nums[i + 1] == 5)
            {
                return false; 
            }
        }
    }
    return count == 5; // Return true if there are exactly five 5s, otherwise false
}
int main() 
 {  
  int nums1[] = {3, 5, 1, 5, 3, 5, 7, 5, 1, 5};
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = {3, 5, 5, 5, 5, 5, 5};
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = {3, 5, 2, 5, 4, 5, 7,  5, 8,  5};
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
  int nums4[] = {2, 4, 5, 5, 5, 5};
  arr_length = sizeof(nums4) / sizeof(nums4[0]);
  cout << test(nums4, arr_length) << endl;
  return 0;    
}

*/

// 113. Write a C++ program to check a given array of integers and return true if every 5 that appears in the given array is next to another 5.
/*
static bool test(int nums[], int arr_length)
{
    bool flag = true;
    for (int i = 0; i < arr_length; i++)
    {
        if(nums[i] == 5)
        {
            if((i> 0 && nums[i - 1] == 5) || (i < arr_length - 1 && nums[i + 1] == 5)) flag = true;
            else if(i == arr_length - 1) flag = false;
            else return false;
            
        }
    }
    return flag;

}

int main()
{
    int nums1[] = {3, 5, 5, 3, 7};
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length) << endl;
    int nums2[] = {3, 5, 5, 4, 1, 5, 7};
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length) << endl;
    int nums3[] = {3, 5, 5, 5, 5, 5};
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length) << endl;
    int nums4[] = {2, 4, 5, 5, 6, 7, 5};
    arr_length = sizeof(nums4) / sizeof(nums4[0]);
    cout << test(nums4, arr_length) << endl;
    return 0;
}
*/


//****
// 114. Write a C++ program to check a given array of integers. The program will return true if the specified number of the same elements appears at the start and end of the given array.

/*
static bool test(int nums[], int arr_length, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != nums[arr_length - n + i])
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    int nums1[] = {3, 7, 5, 5, 3, 7};
    int n = 2;
    int arr_length = sizeof(nums1) / sizeof(nums1[0]);
    cout << test(nums1, arr_length, n) << endl;
    int nums2[] = {3, 7, 5, 5, 3, 7};
    n = 3;
    arr_length = sizeof(nums2) / sizeof(nums2[0]);
    cout << test(nums2, arr_length, n) << endl;
    int nums3[] = {3, 7, 5, 5, 3, 7, 5};
    n = 3;
    arr_length = sizeof(nums3) / sizeof(nums3[0]);
    cout << test(nums3, arr_length, n) << endl;
    return 0;
}*/

//******
// 115. Write a C++ program to check a given array of integers and return true if the array contains three increasing adjacent numbers.


// static bool test(int nums[], int arr_length)
// {
//     for (int i = 0; i <= arr_length - 3; i++)
//     {
//         if(nums[i] == nums[i + 1] - 1 && nums[i] == nums[i + 2] - 2)
//         {
//             return true;
//         }
//     }
//     return false;
    
// }

// int main()
// {
//     int nums1[] = {1, 2, 3, 5, 3, 7};
//     int arr_length = sizeof(nums1) / sizeof(nums1[0]);
//     cout << test(nums1, arr_length) << endl;
//     int nums2[] = {3, 7, 5, 5, 3, 7};
//     arr_length = sizeof(nums2) / sizeof(nums2[0]);
//     cout << test(nums2, arr_length) << endl;
//     int nums3[] = {3, 7, 5, 5, 6, 7, 5};
//     arr_length = sizeof(nums3) / sizeof(nums3[0]);
//     cout << test(nums3, arr_length) << endl;
//     return 0;
// }




// fill 7*7 array in a spesific pattern
const int N = 7;

int matrix[N][N] = {0};

int corner = 0;

bool directions[4] = {true, false, false, false}; // left -> down -> right -> up

void printMatrix(){
    for (int i = 0 ; i < N; ++i){
        for (int j = 0; j < N; ++j){
            cout << matrix[i][j] << " ";
            }
        cout << endl;
    }
}

void next(int direction) {
    for (int i = 0; i < 4; ++i) {
        directions[i] = (i == direction - 1);
    }
}


int main(){
    int row = 0;
    int col = N - 1;
    int corner = 0;

    for (int step = N * N; step > 0; --step){
        if(directions[0]){
            matrix[row][col--] = step;

            if( col == corner){
                // directions[0] = false;
                // directions[1] = true;
                next(2);
            }
        }else if(directions[1]){
            matrix[row++][col] = step;
            
            if(row == (N - 1) - corner){
                // directions[1] = false;
                // directions[2] = true;
                next(3);

            }

        }else if(directions[2]){
             matrix[row][col++] = step;

             if(col == (N - 1) - corner){
                // directions[2] = false;
                // directions[3] = true;    
                next(4);
        
            }

        }else if(directions[3]){
            matrix[row--][col] = step;

            if(row == corner){
                row++;
                col--;
                corner++;

                // directions[3] = false;
                // directions[0] = true;   
                next(1);


            }

        }
        //   cout << row << " - " << col << endl;

     }
        printMatrix();
}