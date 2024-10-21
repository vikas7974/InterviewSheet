// Question:
// Given an array of numbers, write a function that returns a new array with duplicate elements removed.


// -----------------------------------------------------------

//                 My solution


const arr = [1, 1, 2, 3, 4, 4, 2, 5, 1, 1];
const result = [];
arr.forEach((element) => {
    if (!result.includes(element)) {
        result.push(element);
    }
})
console.log(result);


// -----------------------------------------------------------

//              Chat Gpt generated


function removeDuplicates(arr) {
    return arr.filter((value, index, self) => self.indexOf(value) === index);
}

let nums = [1, 2, 2, 3, 4, 4, 5];
console.log(removeDuplicates(nums)); // Output: [1, 2, 3, 4, 5]
