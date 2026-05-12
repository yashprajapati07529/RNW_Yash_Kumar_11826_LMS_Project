
// 1.Create a program to reverse a given number using a loop.

let num = 12345;
let reversed = 0;
while (num > 0) {
    let digit = num % 10;
    reversed = reversed * 10 + digit;
    num = Math.floor(num / 10);
}
console.log("Reversed Number:", reversed);

// 2.Develop a program to check whether a number is a palindrome.

let n = 121;
let original = n;
let rev = 0;
while (n > 0) {
    rev = rev * 10 + (n % 10);
    n = Math.floor(n / 10);
}
if (original === rev) console.log(original + " is a Palindrome");
else console.log(original + " is not a Palindrome");

// 3.Write a program to print the Fibonacci series up to n terms using a loop.

let terms = 10;
let a = 0, b = 1, nextTerm;
console.log("Fibonacci Series:");
for (let i = 1; i <= terms; i++) {
    console.log(a);
    nextTerm = a + b;
    a = b;
    b = nextTerm;
}

// 4.Create a program to find the factorial of a number using a loop

let number = 5;
let fact = 1;
for (let i = 1; i <= number; i++) {
    fact *= i;
}
console.log("Factorial of " + number + " is: " + fact);


// 5.Develop a program to check whether a number is a prime number.

let p = 7;
let isPrime = true;
if (p < 2) isPrime = false;
for (let i = 2; i <= Math.sqrt(p); i++) {
    if (p % i === 0) {
        isPrime = false;
        break;
    }
}
console.log(p + (isPrime ? " is Prime" : " is not Prime"));

// 6.Write a program to count the total number of digits in a given number.

let dNum = 987654;
let count = 0;
let temp = dNum;
while (temp > 0) {
    temp = Math.floor(temp / 10);
    count++;
}
console.log("Total digits in " + dNum + ": " + count);



// 7.Create a program to calculate the sum of digits of a number.

let sNum = 456;
let sum = 0;
while (sNum > 0) {
    sum += sNum % 10;
    sNum = Math.floor(sNum / 10);
}
console.log("Sum of digits:", sum);


// 8.Develop a program to check whether a number is an Armstrong number.

let armNum = 153;
let tempArm = armNum;
let armSum = 0;
while (tempArm > 0) {
    let d = tempArm % 10;
    armSum += d * d * d;
    tempArm = Math.floor(tempArm / 10);
}
if (armSum === armNum) console.log(armNum + " is an Armstrong number");
else console.log(armNum + " is not an Armstrong number");


// 9.Write a program to calculate the power of a number using a loop.

let base = 2;
let exponent = 5;
let result = 1;
for (let i = 1; i <= exponent; i++) {
    result *= base;
}
console.log(base + " to the power " + exponent + " is: " + result);



// 10. Create a program to print the following number pattern:
// 1
// 12
// 123
// 1234
// 12345

let rows = 5;
for (let i = 1; i <= rows; i++) {
    let str = "";
    for (let j = 1; j <= i; j++) {
        str += j;
    }
    console.log(str);
}

