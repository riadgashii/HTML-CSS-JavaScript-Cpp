// let kuleta = 400;
// if (kuleta > 500) {
//     console.log("ti mundesh me ble ps5");

// } else {
//     console.log("perndryshe nuk ke mundsi ta blesh")
// }




// let pergjigja = prompt("a jeni gati? (po/jo)");

// if (pergjigja === "po") {
//     alert("useri  eshte gati");

// } else {
//     alert("useri nuk eshte gati")
// }


// nese deshiron me shumse se 3kg ti ofrohet zbritje 10%

// let cmimi = 10;
// let kilogrami = prompt("sa kg molla deshironi");
// let total = kilogrami * cmimi;
// if(kilogrami > 3){
//     total = total * 0.90;

// }else{
//     total = total * 0.50;
// }
// console.log("qmimi total eshte:", + total)


// let popullsia = 34;
// if(popullsia > 33){
//     console.log("popullsia eshte mbi mesatare")
// }else{
//     console.log("poppullsia eshte nen mesatare")
// }



// number = 3;
// if(number > 0){
//     if(number % 2 == 0){
//         console.log("Numri eshte qift")
//     }else{
//         console.log("Numri eshte tek")
//     }
// }else{
//     console.log("Numri qe eshte shtypur eshte me i vogel se 0")
// }


// let  age = prompt("How old are you");


// let accessAllowed = age >= 18 ? true:false;
// alert(accessAllowed)


// let numri = prompt("Shkruaje nje numer")
// if(numri > 90 && numri < 110){
//     console.log("Bingo");

// }else{
//     console.log("Miss");
// }




let nota1 = Number(prompt("Shkruaje noten e pare"));
let nota2 = Number(prompt("Shkruaje noten e dyte"));
let nota3 = Number(prompt("Shkruaje noten e trete"));

let mesatarja = (nota1 + nota2 + nota3) / 3;

if(mesatarja >= 4.5){
    console.log("Keni sukses te shkelqyshem");
}else if(mesatarja > 3.5 && mesatarja <= 4.5){
    console.log("Keni sukses shume te mire");
}else if (mesatarja > 2.5 && mesatarja < 3.5){
    console.log("Keni sukses te mire");
}else if(mesatarja > 2 && mesatarja < 2.5){
    console.log("Keni sukses te mjaftueshem");
}else if(mesatarja == 1){
    console.log("Keni sukses te dobet");
}else{
    console.log("Mesatarja ka vlere te gabuar")
}
