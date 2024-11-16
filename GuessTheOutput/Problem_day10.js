// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment



console.log('Start');

setTimeout(function () {
    console.log('First Timeout');
}, 0);

Promise.resolve().then(function () {
    console.log('Promise 1');
}).then(function () {
    console.log('Promise 2');
});

setTimeout(function () {
    console.log('Second Timeout');
}, 0);

console.log('End');






//---------------------------------------------------------------


// Output


// Start
// End
// Promise 1
// Promise 2
// First Timeout
// Second Timeout



//----------------------------------------------------------------


