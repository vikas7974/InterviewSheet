// Guess The Output of the below js code

//----------------------------------------------------------------

// Code fragment


function a() {
    var x = 1;

    function b() {
        var y = 2;

        function c() {
            var z = 3;

            setTimeout(function () {
                console.log(x, y, z);
            }, 0);
        }

        c();
    }

    b();
}







//---------------------------------------------------------------


// Output

//




//----------------------------------------------------------------