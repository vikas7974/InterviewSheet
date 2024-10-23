//              Example


// In below Code processUserInput is a higher-order function because it takes another
//  function (greet) as an argument.



function greet(name) {
    return `Greetings from Vikas to, ${name}!`;
}

function processUserInput(callback) {
    const name = "Akash";
    console.log(callback(name)); 
}

processUserInput(greet); 




//--------------------------------------------------------------------