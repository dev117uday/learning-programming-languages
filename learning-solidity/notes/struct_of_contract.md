# Structure of a Contract

### State Variables

State variables are variables whose values are permanently stored in contract storage.
```sol
// SPDX-License-Identifier: GPL-3.0
pragma solidity >=0.4.0 <0.9.0;

contract SimpleStorage {
    // State Variable
    uint storedData; 
}
```

- read more about types : [here](https://docs.soliditylang.org/en/v0.8.1/types.html#types)
- read more about getters and visibility : [here](https://docs.soliditylang.org/en/v0.8.1/contracts.html#visibility-and-getters)


### Functions
Functions are the executable units of code. Functions are usually defined inside a contract, but they can also be defined outside of contracts.
```sol
// SPDX-License-Identifier: GPL-3.0
pragma solidity >0.7.0 <0.9.0;

contract SimpleAuction {
    // Function
    function bid() public payable { 
        
    }
}

// Helper function defined outside of a contract
function helper(uint x) pure returns (uint) {
    return x * 2;
}
```

### Function Modifiers
Function modifiers can be used to amend the semantics of functions in a declarative way
Overloading, that is, having the same modifier name with different parameters, is not possible.
Like functions, modifiers can be overridden.

```sol
// SPDX-License-Identifier: GPL-3.0
pragma solidity >=0.4.22 <0.9.0;

contract Purchase {
    address public seller;

    // Modifier
    modifier onlySeller() {
        require(
            msg.sender == seller,
            "Only seller can call this."
        );
        _;
    }

    function abort() public view onlySeller { // Modifier usage
        // ...
    }
}
```