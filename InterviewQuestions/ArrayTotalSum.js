// Question2
// Write a function to calculate the sum of all numbers in an array



//----------------------------------------------------------------



//                   My Solution

// Here we have to reduce the array into a single value so we have cracked that reduce functiom will work
const arr = [1, 1, 2, 3, 2, 3];
function totalSum(arr) {
    return arr.reduce((acc, element) => {
        return acc + element;
    }, 0)
}
console.log(totalSum(arr));



//----------------------------------------------------------------


//                  Chat Gpt generated

function sumArray(arr) {
    return arr.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
}

let nums = [1, 2, 3, 4];
console.log(sumArray(nums)); // Output: 10
