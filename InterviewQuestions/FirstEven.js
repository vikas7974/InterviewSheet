//Question
//Find the First Even Number in an Array


//---------------------------------------------------------


//              My Solution


let arr = [1, 2, 3, 4, 5, 6, 7, 8];

function firstEven(arr) {
    return arr.findIndex((element) => {
        return element % 2 == 0
    })
}

console.log(firstEven(arr));