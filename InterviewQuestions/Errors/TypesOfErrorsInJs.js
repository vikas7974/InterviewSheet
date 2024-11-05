//Types of Errors in JavaScript


// Type 1 :

//  Syntax Errors: Errors in the syntax of the code, such as missing brackets,
// incorrect keywords, or illegal re-declarations. These errors prevent the code 
//from running. 


// Example

let a = 10;
let a = 20; // SyntaxError: Identifier 'a' has already been declared



//---------------------------------------------------------------------


// Type 2:

//Reference Errors: Occur when trying to access a variable that is not defined
// within the accessible scope.

// Example

console.log(x); // ReferenceError: x is not defined


//------------------------------------------------------------------------


// Type 3:

// Type Errors: Occur when an operation is performed on an incompatible type,
// such as calling a non - function as a function or modifying a const value.

// Example 

const x = 10;
x = 20; // TypeError: Assignment to constant variable.


//---------------------------------------------------------------------------

// Type 4:

//Range Errors: Occur when trying to use a number outside the allowable range,
//  such as exceeding the maximum stack size in recursion.


// Example 

function recurse() {
    return recurse();
}
recurse(); // RangeError: Maximum call stack size exceeded


//---------------------------------------------------------------------------


// Type 5: 

// Eval Errors: Specific to eval() function issues. eval allows for dynamic code
//  execution, but this error is rare as eval() usage is generally discouraged.