class Student {
    int rollNo;
    String name;

    Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }
}

class Marks extends Student {
    int marks1, marks2, marks3;

    Marks(int rollNo, String name, int marks1, int marks2, int marks3) {
        super(rollNo, name);
        this.marks1 = marks1;
        this.marks2 = marks2;
        this.marks3 = marks3;
    }
}

class Result extends Marks {

    Result(int rollNo, String name, int marks1, int marks2, int marks3) {
        super(rollNo, name, marks1, marks2, marks3);
    }

    int calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    double calculatePercentage() {
        return calculateTotal() / 3.0;
    }

    String calculateGrade() {
        double percentage = calculatePercentage();

        if (percentage >= 90)
            return "A+";
        else if (percentage >= 80)
            return "A";
        else if (percentage >= 70)
            return "B";
        else if (percentage >= 60)
            return "C";
        else if (percentage >= 50)
            return "D";
        else
            return "F";
    }

    void displayResult() {
        System.out.println("-- STUDENT RESULT --");
        System.out.println("Roll Number: " + rollNo);
        System.out.println("Name: " + name);
        System.out.println("Subject 1: " + marks1);
        System.out.println("Subject 2: " + marks2);
        System.out.println("Subject 3: " + marks3);
        System.out.println("Total Marks: " + calculateTotal());
        System.out.println("Percentage: " + calculatePercentage() + "%");
        System.out.println("Grade: " + calculateGrade());
    }
}

public class StudentResult {
    public static void main(String[] args) {

        Result student = new Result(199, "Jai", 85, 91, 88);
        student.displayResult();
    }
}