
// 1. Write a simple JavaScript program to print expected Output using following array.

// Red,Green,White,Black
const myColor = ["Red", "Green", "White", "Black"];
let joinedString = myColor.join(" , ");
document.getElementById("displayArea").innerHTML = joinedString;

// Red+Green+White+Black

const colour = ["Red", "Green", "White", "Black"];
let joinedString1 = colour.join(" + ");
document.getElementById("displayArea1").innerHTML = joinedString1;

// Red,Green,White

const mobile = ["Samsung", "Iphone", "Vivo", "Oppo"];
let joinedString2 = mobile.slice(0, 3).join(',');
document.getElementById("displayArea2").innerHTML = joinedString2;

// Red

const bikes = ["Pulsar", "Splendor", "KTM", "Kawasaki"];
let joinedString3 = bikes.slice(0, 1);
document.getElementById("displayArea3").innerHTML = joinedString3;

// Green,White

const car = ["Rolls Royes", "Bugati", "BMW", "Forturner"];
let joinedString4 = car.slice(1, 3);
document.getElementById("displayArea4").innerHTML = joinedString4;

// Red,Green,White,Black,orange 

const color1 = ["White", "Black", "Red", "Yellow"];
let joinedString5 = color1.push("Blue");
document.getElementById("displayArea5").innerHTML = joinedString5 = color1;

// 2.Write a JavaScript program to get sum of all array element using for loop and foreach loop.

const nums = [10, 20, 30, 40];

let sumFor = 0;
for (let i = 0; i < nums.length; i++) {
    sumFor += nums[i];
}

let sumEach = 0;
nums.forEach(num => sumEach += num);
let sum1 = (sumFor, sumEach);

const outputElement = document.getElementById("display-result").innerHTML = "Sum of array:- " + sum1;

// 3.Write a JavaScript program to print a maximum and minimum value of given array.(using function and logic)

function findMinMax(arr) {
    let max = arr[0];
    let min = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    return { max, min };
}

const values = [23, 10, 5, 66, 1];
let value = findMinMax(values);
document.getElementById("min-max").innerHTML = "Maximum value:- " + value.max + "<br>" + "Minimum value:- " + value.min;



//4.Write a JavaScript program for convert all array element in ASCII value. 

const charArray = ['A', 'B', 'C', 'a', 'b', 'c', '@', '1'];

const asciiArray = charArray.map(char => char.charCodeAt(0));

document.getElementById("original").innerHTML = charArray.join(", ");

document.getElementById("result").innerHTML = asciiArray.join(", ");


// 5.Write a JavaScript program for remove negative values using the filter array function.
// numbers = [-23,-20,-17, -12, -5, 0, 1, 5, 12, 19, 20];

const numbers = [-23, -20, -17, -12, -5, 0, 1, 5, 12, 19, 20];

const positiveNumbers = numbers.filter(num => num >= 0);

document.getElementById("original1").innerHTML = numbers.join(", ");
document.getElementById("result1").innerHTML = positiveNumbers.join(", ");

// 6. Write a JavaScript program using array map() method and return the square of array element.
//  arr = [2, 5, 6, 3, 8, 9];

const arr = [2, 5, 6, 3, 8, 9];

const squaredArr = arr.map(num => num * num);

document.getElementById("beforesquare").innerHTML = arr.join(", ")
document.getElementById("aftersquare").innerHTML = squaredArr.join(", ");


// 7.Write a JavaScript program for sort array in ascending descending.
// numbers = [23,20,17, 12,5, 0, 1, 5, 12, 19, 20];


const numbers1 = [23, 20, 17, 12, 5, 0, 1, 5, 12, 19, 20];


const ascOrder = [...numbers1].sort((a, b) => a - b);
const descOrder = [...numbers1].sort((a, b) => b - a);

document.getElementById("displayAsc").innerHTML = ascOrder.join(", ");
document.getElementById("displayDesc").innerHTML = descOrder.join(", ");

// 8. Write a JavaScript program which filters out any string which is less than 8 characters. 
// words = ['Python', 'Javascript', 'Go', 'Java', 'PHP', 'Ruby'];

const words = ['Python', 'Javascript', 'Go', 'Typescript', 'PHP', 'Ruby'];

const longWords = words.filter(word => word.length >= 8);

document.getElementById("long").innerHTML = longWords.join(", ");




