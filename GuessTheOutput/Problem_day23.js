// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function test() {
    var x = 10;

    setTimeout(function () {
        console.log(x);
    }, 0);

    Promise.resolve().then(function () {
        console.log(x); 
    });

    x = 20;

    setTimeout(function () {
        console.log(x);
    }, 0);

    async function asyncFunc() {
        console.log(x);
    }

    asyncFunc();

    x = 30;

    setTimeout(function () {
        console.log(x); 
    }, 0);
}

test();



//---------------------------------------------------------------


// Output

// 20
// 20
// 30
// 30
// 30



//----------------------------------------------------------------