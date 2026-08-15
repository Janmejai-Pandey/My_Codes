class Engine {
    String engineNumber;
    String engineType;

    Engine(String engineNumber, String engineType) {
        this.engineNumber = engineNumber;
        this.engineType = engineType;
    }

    void displayEngine() {
        System.out.println("Engine Number: " + engineNumber);
        System.out.println("Engine Type: " + engineType);
    }
}

class Car {
    String carModel;
    Engine engine;

    Car(String carModel, String engineNumber, String engineType) {
        this.carModel = carModel;
        engine = new Engine(engineNumber, engineType);
    }

    void displayCar() {
        System.out.println("-- Car Details --");
        System.out.println("Car Model: " + carModel);
        System.out.println("Engine Details:");
        engine.displayEngine();
    }
}

public class Q4 {
    public static void main(String[] args) {

        Car car = new Car("Toyota Fortuner", "ENG12345", "Diesel");
        car.displayCar();

        System.out.println("\nJanmejai Pandey - 2501030199 - B4");
    }
}