// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


const obj = {
    a: 1,
    b: function () {
        console.log(this.a);
    },
    c: () => {
        console.log(this.a);
    },
};

obj.b();
obj.c();

const externalB = obj.b;
externalB();

const externalC = obj.c;
externalC();




//---------------------------------------------------------------


// Output

// 1
// undefined
// undefined
// undefined



//----------------------------------------------------------------