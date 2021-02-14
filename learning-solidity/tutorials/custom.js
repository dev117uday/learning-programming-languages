// Right click on the script name and hit "Run" to execute
async function func () {
    try {
   
        if (typeof web3 !== 'undefined'){ 
            web3 = new Web3(web3.currentProvider); 
        } else{
            web3 = new Web3(new Web3.providers.HttpProvider("https://remix.ethereum.org")); 
        } 
          
        // Set the 1st account for transactions 
        web3.eth.defaultAccount = web3.eth.accounts[0]; 
        
        let abi = JSON.parse(await remix.call('fileManager', 'getFile', 'browser/scripts/abi.json'));
        let address = '0xd9145CCE52D386f254917e481eB44e9943F39138';
        
        // Set the ABI 
        var yourContract = new web3.eth.Contract(abi,address); 
        
        yourContract.methods.getOwner().call({from: web3.eth.defaultAccount}, function(error, result) {
            console.log(result);
        });
    } catch (e) {
        console.log("error ",e.message)
    }
}

func()
