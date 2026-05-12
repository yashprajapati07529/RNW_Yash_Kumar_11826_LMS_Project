
//1.Create a program to calculate the sum of two numbers.

let num1 = 10;
let num2 = 5;

console.log(`Sum ${num1} and ${num2}:- `, num1 + num2);

//2.Create a program to calculate the difference between two numbers.

let num3 = 30;
let num4 = 10;

console.log(`difference ${num3} and ${num4}:- `, num3 - num4);

//3.Develop a function to calculate the product of two numbers.

function Numbers(product1, product2) {
    return product1 * product2;
}

let a = 4;
let b = 5;

console.log(`Product ${a} and ${b}:-`, Numbers(a, b));

//4.Write a program to divide two numbers and handle division by zero using conditional statements.

let dividend = 20;
let divisor = 10;

if (divisor === 0) {
    console.log("Error: Division by zero is not allowed.");
} else {
    console.log("Result:", dividend / divisor);
}

//5.Create a program to calculate the square and cube of a number.

let n = 4;
console.log(`Square ${n}:- `, n * n);
console.log(`Cube ${n}:- `, n * n * n);

//6.Develop a program to calculate the area of a rectangle.

let length = 10;
let width = 5;
let areaRectangle = length * width;
console.log(`Area of Rectangle ${length} and ${width}:-`, areaRectangle);

//7.Create a program to calculate the area of a circle.

const PI = 3.14;
let radius = 7;
let areaCircle = PI * radius * radius;
console.log("Area of Circle:", areaCircle.toFixed(2));

//8.Write a program to convert Celsius to Fahrenheit.

let celsius = 37;
let fahrenheit = (celsius * 9 / 5) + 32;
console.log(celsius + "°C is equal to " + fahrenheit + "°F");

//9.Develop a program to calculate Simple Interest using the formula:  SI = (P × R × T) / 100

let P = 10, R = 5000, T = 3;
let SI = (P * R * T) / 100;
console.log("Simple Interest:", SI);

//10.Write a program to check whether a number is even or odd.

let number = 8;
if (number % 2 === 0) {
    console.log(number + " is Even");
} else {
    console.log(number + " is Odd");
}

//11.Create a program to check whether a number is positive, negative, or zero.

let val = 0;
if (val > 0) {
    console.log("Positive");
} else if (val < 0) {
    console.log("Negative");
} else {
    console.log("Zero");
}

//12.Develop a program to find the largest of two numbers using if-else.

let x = 25;
let y = 40;

if (x > y) {
    console.log(x + " is the largest.");
} else {
    console.log(y + " is the largest.");
}


//13.Create a program to find the largest of three numbers using conditional statements.

let j = 50, k = 25, l = 15;

if (j >= k && j >= l) {
    console.log("The largest number is: " + j);
} else if (k >= j && k >= l) {
    console.log("The largest number is: " + k);
} else {
    console.log("The largest number is: " + l);
}

//14.Write a program to check whether a person is eligible for voting (age ≥ 18)

let age = 20;

if (age >= 18) {
    console.log("Eligible for voting.");
} else {
    console.log("Not eligible for voting.");
}


// 15.Develop a program to calculate grade based on marks:
// 90 + → A
// 75–89 → B
// 50–74 → C
// Below 50 → Fail

let marks = 82;

if (marks >= 90) {
    console.log("Grade: A");
} else if (marks >= 75) {
    console.log("Grade: B");
} else if (marks >= 50) {
    console.log("Grade: C");
} else {
    console.log("Grade: Fail");
}


//16.Write a program to check whether a given year is a leap year.

let year = 2024;

if ((year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0)) {
    console.log(year + " is a leap year.");
} else {
    console.log(year + " is not a leap year.");
}

//17.Create a program to check whether a number is divisible by both 5 and 11.

let num = 55;

if (num % 5 === 0 && num % 11 === 0) {
    console.log("The number is divisible by both 5 and 11.");
} else {
    console.log("The number is not divisible by both.");
}


//18.Develop a simple calculator using switch statement to perform addition, subtraction, multiplication, and division.

let num5 = 10;
let num6 = 5;
let operator = '-';

switch (operator) {
    case '+': console.log("Result: " + (num5 + num6)); break;
    case '-': console.log("Result: " + (num5 - num6)); break;
    case '*': console.log("Result: " + (num5 * num6)); break;
    case '/': console.log("Result: " + (num5 / num6)); break;
    default: console.log("Invalid operator.");
}

// 19.Write a program to calculate BMI and display the health category (Underweight, Normal, Overweight, Obese).

let weight = 70;
let height = 1.75;
let bmi = weight / (height * height);

console.log("BMI: " + bmi.toFixed(2));

if (bmi < 18.5) {
    console.log("Category: Underweight");
} else if (bmi < 25) {
    console.log("Category: Normal");
} else if (bmi < 30) {
    console.log("Category: Overweight");
} else {
    console.log("Category: Obese");
}

// 20.Create a program to calculate electricity bill based on units consumed:
// First 100 units → ₹5 per unit
// Next 100 units → ₹7 per unit
// Above 200 units → ₹10 per unit


let units = 250;
let bill = 0;

if (units <= 100) {
    bill = units * 5;
} else if (units <= 200) {
    bill = (100 * 5) + (units - 100) * 7;
} else {
    bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
}

console.log("Total Bill: ₹" + bill);







