// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function outer() {
    let counter = 0;

    function increment() {
        counter++;
        console.log(counter);
    }

    function start() {
        let innerCounter = 0;

        setInterval(function () {
            increment();
            innerCounter++;
            if (innerCounter === 5) {
                clearInterval(this);
            }
        }, 1000);
    }

    start();
}

outer();



//---------------------------------------------------------------


// Output


// 1
// 2
// 3
// 4
// 5



//----------------------------------------------------------------