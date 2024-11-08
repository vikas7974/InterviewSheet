// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function outer() {
    let count = 0;

    function inner() {
        console.log(count);
        count++;
    }

    return inner;
}

const fn = outer();

fn();  
fn();  
fn();  

setTimeout(fn, 1000); 


//---------------------------------------------------------------


// Output

// 0
// 1
// 2
// 3


//----------------------------------------------------------------