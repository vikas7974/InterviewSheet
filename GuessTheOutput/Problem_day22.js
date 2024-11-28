// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function test() {
    var x = 10;

    setTimeout(function () {
        console.log(x);
    }, 0);

    x = 20;

    Promise.resolve().then(function () {
        console.log(x);
    });

    x = 30;
}

test();



//---------------------------------------------------------------


// Output

// 30
// 20



//----------------------------------------------------------------