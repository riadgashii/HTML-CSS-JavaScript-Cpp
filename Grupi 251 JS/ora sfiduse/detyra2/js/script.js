function Vehicle(type){
    this.type = type;
}
Vehicle.prototype.printType = function(){
    console.log(`Vehicle type: ${this.type}`);
};

function Car (type, brand){
    Vehicle.call(this, type);
    this.brand = brand;
}

Car.prototype = 
Object.create(Vehicle.prototype);
Car.prototype.constructor = Car;

Car.prototype.printBrand = 
function(){
    console.log(`Car brand: ${this.brand}`);
};

const myCar = new Car('Sedan', 'Toyota');

myCar.printType();
myCar.printBrand();