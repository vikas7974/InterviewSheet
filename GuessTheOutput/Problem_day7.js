// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment

var a = 1;

function foo() {
    console.log(a);  
    var a = 2;
    setTimeout(function () {
        console.log(a);  
    }, 1000);
    console.log(a); 
}

foo();
console.log(a); 



//---------------------------------------------------------------


// Output


// undefined
// undefined
// 1
// undefined




//----------------------------------------------------------------

