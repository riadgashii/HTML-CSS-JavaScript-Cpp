// let paga = Number(prompt("Shkruje pagen e punetorit"));

// let pagaERe;

// if( paga >= 150 && paga <= 300){
//     pagaERe = paga + paga * 0.5;
// }else if( paga >= 300 && paga <= 500){
//     pagaERe = paga + paga * 0.2;
// }else if( paga >= 500 && paga <= 800 ){
//     pagaERe = paga + paga * 0.1;
// }else if(paga >= 800 && paga <= 100){
//     pagaERe = paga + paga * 0.05;
// }else if( paga > 1000){
//     pagaERe = paga;
// }

// alert("Paga e re eshte: " + pagaERe + " euro")




// let numri = Number(prompt("Vendosni numrin:"));
// if (numri % 2 == 0){
//     alert("Numri eshte qift");
// }else alert("Numri eshte tek");



// let vlera = prompt("Shkruaj nje vlere");

// if(isNan(vlera)){
//     alert("Kjo vlere nuk eshte numer ");
// }else{
//     alert("Kjo vlere eshte numer");
// };

// let muji = Number(prompt("Sheno numrin e muajit:"))

// if(muji === 12 || muji === 1 || muji === 2 ){
//     alert("Eshte stina e dimrit");
// }else if(muji === 3 || muji === 4 || muji === 5){
//     alert("Eshte stina e pranveres");
// }else if(muji === 6 || muji === 7 || muji === 8){
//     alert("Eshte stina e veres");
// }else if(muji === 9 || muji === 10 || muji === 11){
//     alert("Eshte stina e vjeshtes")
// }else if( muji > 12 || muji < 1){
//     alert("Keni shkruar muajin gabim");
// }

function shuma(a,b){
    return a + b;
}

function eshteMeiMadh(numri,vlera){
    return numri > vlera;
}
function sheja(numri){
    if(numri > 0){
        return "Numri eshte pozitiv";
    }else if(numri < 0){
        return "Numri eshte negativ";
    }else {
        return "Numri eshte 0";
    }
}

let num1 = Number(prompt("Shkruaje numrin e pare:"));
let num2 = Number(prompt("Shkruaje numrin e dyte:"));

let rezultati = shuma(num1,num2);
