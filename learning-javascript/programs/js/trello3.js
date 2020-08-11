let mytodo = {
    day: 'Monday',
    meetings: 0,
    meetdone: 0,
    addmeeting: function()
    {
        console.log(this.day);
    }
}

let mytodo2 = {
    day: 'Tuesday',
    meetings: 0,
    meetdone: 0,
    addmeeting: function(num)
    {
        this.meetings=this.meetings + num;
    },
    printmeetings : function(){
        console.log(this.meetings);
        console.log(this.day);
    }
}


mytodo.addmeeting();
mytodo2.addmeeting(4);
mytodo2.printmeetings();




