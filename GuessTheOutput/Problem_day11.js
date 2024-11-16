// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


var a = 1;

function first() {
    var a = 2;
    setTimeout(function () {
        console.log(a);
        var a = 3;
        console.log(a);
    }, 0);
    console.log(a);
}

function second() {
    console.log(a);
}

first();
second();


//---------------------------------------------------------------



// Output

// undefined
// 2
// 1
// undefined
// 3



//----------------------------------------------------------------