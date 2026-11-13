import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int empId = sc.nextInt();
        String empName = sc.next();
        double salary = sc.nextDouble();
        int experience = sc.nextInt();

        Employee emp = new Employee(empId, empName, salary, experience);
        Employee emp2 = computeDesignation(emp);

        System.out.print(emp2.getEmpName()+ " :" + emp2.getDesignation());
    }

    //static methods
    static Employee computeDesignation(Employee emp) {
        int e  = emp.getExperience();
        if (e >= 10) {
            emp.setDesignation("Project Manager");
        } else if (e > 7 && e <= 9) {
            emp.setDesignation("Project Lead");
        } else if(e > 5 && e <= 7) {
            emp.setDesignation("Senior Software Engineer");
        } else if (e > 1 && e <= 5) {
            emp.setDesignation("Software Engineer");
        } else if (e >= 0 && e <= 1) {
            emp.setDesignation("Trainee");
        } 
        return emp;
    } 
}

class Employee {
    private int empId;
    private String empName;
    private double salary;
    private int experience;
    private String designation;

    Employee(int e, String n, double s, int ex) {
        this.empId = e;
        this.empName = n;
        this.salary = s;
        this.experience = ex;
    }

    //getter for all 
    public int getEmpId() {
        return this.empId;
    }

    public String getEmpName() {
        return this.empName;
    }

    public double getSalary() {
        return this.salary;
    }

    public int getExperience() {
        return this.experience;
    }

    public String getDesignation() {
        return this.designation;
    }

    //setter for designation

    public void setDesignation(String d) {
        this.designation = d;
    }
}