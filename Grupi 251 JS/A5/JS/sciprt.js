// var dita = 2

// switch(dita){
//     case 1:
//         console.log("E hene");
//         break;

//     case 2:
//         console.log("E marte");
//         break;

//     default:
//         console.log("Dite tjeter")
// }

// let dita = "E premte";
// switch (dita) {
//     case "E hene":
//     case "E marte":
//     case "E merkure":
//     case "e Enjte":
//     case "E premte":
//         alert("Dite pune");
//         break;
//     case "E shtune":
//     case "E Diel":
//         alert("Dite Vikendi")
//         break;
// }



// let numri1 = Number(prompt("Shkruaje numrin e pare"));
// let numri2 = Number(prompt("Shkruaje numrin e dyte"));

// let operatori = prompt("Zgjedhe nje operator si ne vijim: +,-,/,*")
// let rezultati;

// switch(operatori){
//     case "+":
//         rezultati = numri1 + numri2;
//         break;
//     case "-":
//         rezultati = numri1 - numri2;
//         break;
//     case "/":
//         rezultati = numri1 / numri2;
//         break;
//     case "*":
//         rezultati = numri1 * numri2;
//         break;
//     default:
//         alert("operator i pavlefshem");

// }

// alert("Rezultati eshte:" + rezultati);



let piket = prompt("Shkruaji piket ne matematike");

switch (true) {
    case (piket < 50):
        alert("Ti ke marre noten 1");
        break;
    case (piket <= 60):
        alert("Ti ke noten 2");
        break;
    case (piket <= 70):
        alert("Ti ke noten 3");
        break;
    case (piket <= 80):
        alert("Ti ke noten 4");
        break;
    case (piket <= 100):
        alert("Ti ke noten 5");
        break;

    default:
        alert("Piket nuk jane te vlefshme");
        break;




}