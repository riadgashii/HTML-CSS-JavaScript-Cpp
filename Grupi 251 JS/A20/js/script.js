// Krijo një strukturë klasash për të përfaqësuar kafshët në një fermë duke përdorur konceptin e polimorfizmit. Polimorfizmi të lejon të krijosh objekte të tipeve të ndryshme që ndajnë të njëjtën metodë, por me sjellje të ndryshme.

// Krijo një klasë të quajtur Animal që përmban: 
// Një metodë speak() që do të mbivendoset nga kafshët specifike (që shfaq zërin që bën kafsha).
// Krijo disa klasa që trashëgojnë nga Animal: 
// Cow (Lopë) që implementon metodën speak() për të shfaqur se lopa bën "Muuu". 
// Sheep (Dele) që implementon metodën speak() për të shfaqur se delja bën "Bee". 
// Duck (Rosë) që implementon metodën speak() për të shfaqur se rosa bën "Kuak-Kuak". 
// Krijo një funksion të quajtur makeAnimalsSpeak() që pranon një listë me kafshë dhe thirr metodën speak() për secilën prej tyre. Kjo tregon polimorfizmin, pasi metoda speak() ka sjellje të ndryshme për secilën kafshë. 
// Krijo disa objekte kafshësh si lopë, dele dhe rosa. Bëj që të gjitha kafshët të "flasin" duke përdorur polimorfizmin.

class Animal {
    speak() {

    }
}
class Cow extends Animal {
    speak(){
        console.log("muuuu");
    }
}
class Sheep extends Animal{
    speak(){
        console.log("beee");
    }

}

class Duck extends Animal{
    speak(){
        console.log("kuak kuak");
    }
}

animals = [new Cow(), new Sheep(), new Duck()];
function makeAnimalsSpeak(animals) {
    animals.forEach(animal => animal.speak());
}
makeAnimalsSpeak(animals);