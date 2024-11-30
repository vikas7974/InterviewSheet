// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function outer() {
    let count = 0;

    function inner() {
        this.count++;
        console.log(this.count);
    }

    return inner;
}

const obj1 = { count: 5 };
const obj2 = { count: 10 };

const fn1 = outer.call(obj1);
const fn2 = outer.call(obj2);

fn1();
fn2();
fn1();
fn2();



//---------------------------------------------------------------


// Output

// 6
// 11
// 7
// 12


//----------------------------------------------------------------