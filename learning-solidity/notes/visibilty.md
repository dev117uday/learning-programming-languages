# Getters() and Visibility

Solidity knows two kinds of function calls: internal ones that do not create an actual EVM call (also called a “message call”) and external ones that do. Because of that, there are four types of visibility for functions and state variables.

Functions have to be specified as being `external`, `public`, `internal` or `private`. For state variables, `external` is not possible.

`external`

External functions are part of the contract interface, which means they can be called from other contracts and via transactions. An external function `f` cannot be called internally (i.e. `f()` does not work, but `this.f()` works). External functions are sometimes more efficient when they receive large arrays of data, because the data is not copied from calldata to memory.
They can be called only from outside the contract

`public`

Public functions are part of the contract interface and can be either called internally or via messages. For public state variables, an automatic getter function (see below) is generated.


`internal`

**Those functions and state variables can only be accessed internally (i.e. from within the current contract or contracts deriving from it)**, without using `this`.


`private`

**Private functions and state variables are only visible for the contract they are defined in and not in derived contracts.**

`pure`

Solidity also contains pure functions, which means you're not even accessing any data in the app. 

`view`

It's only viewing the data but not modifying it: