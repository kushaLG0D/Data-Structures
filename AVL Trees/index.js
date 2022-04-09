console.log("Email")
const regex =/[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*@(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?/gi;
const text=`boleh di kirim ke email saya ekoprasetyo.crb@outlook.com tks...
boleh minta kirim ke db.maulana@gmail.com. 
dee.wien@yahoo.com. .
deninainggolan@yahoo.co.id Senior Quantity Surveyor
Fajar.rohita@hotmail.com, terimakasih bu Cindy Hartanto
firmansyah1404@gmail.com saya mau dong bu cindy
fransiscajw@gmail.com 
Hi Cindy ...pls share the Salary guide to donny_tri_wardono@yahoo.co.id thank a`;

let result="";
if(text.match(regex)){
    result=text.match(regex);
}
else{
    console.log(`no match`);
}
let email=document.getElementById('email');
result.forEach(element => {
    // content+=`<li>${element}<\li>`
    // email.innerHTML=content;
    console.log(element);
});
