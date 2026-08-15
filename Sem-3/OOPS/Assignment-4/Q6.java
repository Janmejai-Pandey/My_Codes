import java.util.ArrayList;

class Student {
    int rollNo;
    String name;

    Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }

    void displayStudent() {
        System.out.println("Roll No: " + rollNo + ", Name: " + name);
    }
}

class College {
    String collegeName;
    ArrayList<Student> students;

    College(String collegeName) {
        this.collegeName = collegeName;
        students = new ArrayList<>();
    }

    void addStudent(Student student) {
        students.add(student);
    }

    void displayCollegeDetails() {
        System.out.println("-- College Details --");
        System.out.println("College Name: " + collegeName);

        System.out.println("Enrolled Students:");

        for (Student student : students) {
            student.displayStudent();
        }
    }
}

public class Q6 {
    public static void main(String[] args) {

        Student s1 = new Student(199, "Jai");
        Student s2 = new Student(183, "Kritik");
        Student s3 = new Student(213, "Avi");

        College college = new College("JIIT");

        college.addStudent(s1);
        college.addStudent(s2);
        college.addStudent(s3);

        college.displayCollegeDetails();

        System.out.println("\nJanmejai Pandey - 2501030199 - B4");
    }
}