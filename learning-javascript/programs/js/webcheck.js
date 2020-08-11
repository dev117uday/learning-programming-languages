let useremail = 'lco12@';
let password = '1234' ;

function emailchecker(email)
{
    if (!useremail.includes('@'))
    {
        console.log('incorrect email');
    }
    else
    {
        console.log('congrats');
    }
}

emailchecker(useremail);