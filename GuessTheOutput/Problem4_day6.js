// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment



var a = 5;

{
    var a = 10;
    function inner() {
        console.log(a);  
        let a = 15;
    }
    inner(); 
    console.log(a);  
}

console.log(a);  






//---------------------------------------------------------------


// Output


// ReferenceError
// 10
// 5



//----------------------------------------------------------------


