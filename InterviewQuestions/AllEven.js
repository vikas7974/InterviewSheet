//Question
// Check if All Elements are Even



//------------------------------------------------------------------

//             My Solution No.1



const arr1 = [2, 4, 6]
arr1.find((ele) => {
    return ele % 2 != 0;
}) ? console.log("Odd contain") : console.log("All Even")




//------------------------------------------------------------------

//             My Solution No.2

const arr = [1, 2, 4, 6]
function checkAllEven(arr) {
    const check = arr.filter((element) => {
        return element % 2 != 0
    })
    return check;
}

const result = checkAllEven(arr)
if (result.length == 0) {
    console.log("odd");
}
else {
    console.log("even");
}



//------------------------------------------------------------------

//             Chat Gpt generated


function areAllEven(arr) {
    return arr.every(num => num % 2 === 0);
}

let nums = [2, 4, 6, 8];
console.log(areAllEven(nums)); // Output: true
