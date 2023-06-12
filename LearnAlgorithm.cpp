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
//of integers and return true if there are two values 15, 15 next to each other
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
//35. Write a C++ program to count the number of 5's next to each other in an array of integers.Count the situation where the second 5 is actually a 6.
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
//If a value appears three times in a row in an array it is called a triple.
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

//37. Write a C++ program to compute the sum of the two given integers.If the sum is in the range 10..20 inclusive return 30.
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

//39. Write a C++ program to test if a given non - negative number is a multiple of 13 or it is one more than a multiple of 13.
 
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


//40. Write a C++ program to check if a given number that is not negative is a multiple of 3 or 7, but not both.
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
//41. Write a C++ program to check if a given number is within 2 of a multiple of 10.
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
//42. Write a C++ program to compute the sum of the two given integers.
//Return 18 if one of the given integer values is in the range 10..20 inclusive.
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
//If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". 
//If the string starts with "F" and ends with "B" return "FizzBuzz". In other cases return the original string.
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

//44. Write a C++ program to check if it is possible to add two integers to get the third integer from three given integers.
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

//45. Write a C++ program to check if y is greater than x, and z is greater than y from three given integers x, y, z.

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

//46. Write a C++ program to check if three given numbers are in strict increasing order.
//For example, 4, 7, 15, or 45, 56, 67, but not 4, 5, 8 or 6, 6, 8. However, if a fourth parameter is true, equality is allowed, such as 6, 6, 8 or 7, 7, 7.
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
//50. Write a C++ program to check two given integers.Each integer is in the range 10..99. 
//Return true if a digit appears in both numbers, such as the 3 in 13 and 33.
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

//51. Write a C++ program to compute the sum of two given non - negative integers x and y 
//as long as the sum has the same number of digits as x.If the sum has more digits than x, return x without y.
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

//53. Write a C++ program to compute the sum of the three integers.
//If one of the values is 13 then do not count it and its right towards the sum.

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
//Except for 13 and 17, any value in the range 10..20 inclusive counts as 0.
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

//55. Write a C++ program to check two integers and return the value nearest to 13 without crossing over.Return 0 if both numbers go over.
<<<<<<< HEAD
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
>>>>>>> f2b75f65b2f2eda6925ecc744f2abee3ca3a1d38
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

//56. Write a C++ program to check three given integers(small, medium and large) 
//and return true if the difference between small and medium and the difference between medium and large is same.
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

//57. Write a C++ program to create another string using two given strings s1, s2, the format of the new string will be s1s2s2s1.
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
