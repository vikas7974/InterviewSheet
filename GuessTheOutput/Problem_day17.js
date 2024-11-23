// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function foo() {
    for (var i = 0; i < 3; i++) {
        setTimeout(function () {
            console.log(i);
        }, 100);
    }

    for (let j = 0; j < 3; j++) {
        setTimeout(function () {
            console.log(j);
        }, 100);
    }
}

foo();



//---------------------------------------------------------------


// Output

// 3
// 3
// 3
// 0
// 1
// 2



//----------------------------------------------------------------