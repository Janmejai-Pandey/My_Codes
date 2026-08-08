class Temperature {
    double celsius;

    double toFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }

    double toKelvin() {
        return celsius + 273.15;
    }
}

public class TemperatureConversion {
    public static void main(String[] args) {

        Temperature temp = new Temperature();
        temp.celsius = -40;

        System.out.println("-- Temperature Conversion --");
        System.out.println("Temperature in Celsius: " + temp.celsius + " °C");
        System.out.println("Temperature in Fahrenheit: " + temp.toFahrenheit() + " °F");
        System.out.println("Temperature in Kelvin: " + temp.toKelvin() + " K");
    }
}