// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


const obj = {
    name: 'Alice',
    age: 30,
    greet: function () {
        console.log(this.name);

        setTimeout(function () {
            console.log(this.name);
        }, 1000);

        setTimeout(() => {
            console.log(this.name);
        }, 2000);

        setTimeout(function () {
            this.sayHello();
        }, 3000);
    },
    sayHello: function () {
        console.log('Hello from ' + this.name);
    }
};

const boundGreet = obj.greet.bind({ name: 'Bob' });
boundGreet();



//---------------------------------------------------------------


// Output

// Bob       
// undefined  
// Bob        
// TypeError: this.sayHello is not a function 


//----------------------------------------------------------------

