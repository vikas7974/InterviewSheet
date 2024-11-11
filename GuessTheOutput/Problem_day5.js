// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function Animal() {
    this.name = 'Animal';
}

Animal.prototype.speak = function () {
    console.log(this.name + ' speaks');
};

function Dog() {
    this.name = 'Dog';
}

Dog.prototype = new Animal();

var myDog = new Dog();
myDog.speak();


//---------------------------------------------------------------


// Output

// Dog speaks



//----------------------------------------------------------------

