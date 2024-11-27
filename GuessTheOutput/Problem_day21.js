// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function A() {
    this.x = 1;
    setTimeout(function () {
        this.x++;
        console.log(this.x);
    }, 1000);
}

const obj = new A();



//---------------------------------------------------------------


// Output

// NaN



//----------------------------------------------------------------