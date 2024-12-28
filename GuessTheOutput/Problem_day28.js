// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function A() {
    this.value = 42;
}

A.prototype.getValue = function () {
    return this.value;
};

const a = new A();

A.prototype.getValue = () => {
    return this.value + 1;
};

Object.defineProperty(a, "value", {
    get() {
        return 10;
    },
    configurable: true,
});

console.log(a.getValue());








//---------------------------------------------------------------


// Output

// NaN





//----------------------------------------------------------------