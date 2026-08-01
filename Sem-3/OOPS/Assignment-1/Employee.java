public class Employee {
    long empID;
    String name;
    double basic;
    char grade;
    double tax;
    double bonus;
    double gross;

    Employee(long empID, String name, double basic, char grade) {
        this.empID = empID;
        this.name = name;
        this.basic = basic;
        this.grade = grade;
        tax = 0;
    }

    void calcSlab() {
        if (basic < 300000) {
            tax = 0;
        }
        else if(basic < 700000) { 
            tax = 10 * basic;
        }
        else if(basic < 1000000) {
            tax = 20 * basic;
        }
        else {
            tax = 30 * basic;
        }
    }

    void calcBonus() {
        if(grade == 'A') {
            bonus = 0.15 * basic;
        }
        else if(grade == 'B') {
            bonus = .10 * bonus;
        }
        else {
            bonus = 0.05 * bonus;
        }
    }

    void calcSalary(){
        gross = bonus + basic;
        System.out.print("Salary before tax: " + gross);
        gross = gross - tax;
        System.out.print("Salary after tax: " + gross);
    }

    public static void main(String[] args) {
        Employee e1 = new Employee(101, "Janmejai", 100000, 'A');
    }
}
