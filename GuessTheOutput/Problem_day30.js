// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment

function Parent() { }
Parent.prototype.sayHi = function () {
    return "Hi";
};
const child = new Parent();
Parent.prototype.sayHi = function () {
    return "Hello";
};
console.log(child.sayHi());




//---------------------------------------------------------------


// Output


// Hello





//----------------------------------------------------------------