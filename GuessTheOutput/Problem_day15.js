// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function createCounter() {
    let count = 0;

    return function () {
        return count++;
    };
}

const counter1 = createCounter();
const counter2 = createCounter();

console.log(counter1());  
console.log(counter1()); 
console.log(counter2());  
console.log(counter2());  
console.log(counter1());  



//---------------------------------------------------------------


// Output


// 0
// 1
// 0
// 1
// 2



//----------------------------------------------------------------