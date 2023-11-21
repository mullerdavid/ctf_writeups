pragma solidity ^0.5.5;

contract EnterTheDragon {
    
    struct transtruct {
        address transactor;
        int256 yesno;
    }

    mapping(address => transtruct) public transactors;

    function () external payable  {
        require(msg.value > 100000000000000000);
        transactors[msg.sender].yesno = 1;
    }


    function withdraw() public {
        require(transactors[msg.sender].yesno == 1);
        msg.sender.call.value(10000000000000000)("");
        transactors[msg.sender].yesno = 0;
    }
    
}
