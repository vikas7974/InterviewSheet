// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


console.log('Start');
setTimeout(() => console.log('Timeout'), 0);
async function asyncFunc() {
    console.log('Async start');
    await Promise.resolve();
    console.log('Async end');
}
asyncFunc();
console.log('End');


//---------------------------------------------------------------


// Output

// Start
// Async start
// End
// Async end
// Timeout



//----------------------------------------------------------------