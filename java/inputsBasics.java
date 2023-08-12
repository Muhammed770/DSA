import java.util.Scanner;

public class inputsBasics{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = input.nextLine();
        // int age = 21;
        double height = 1.6;
        char grade = 'A';
        System.out.println("Enter your birth year:");
        int year = input.nextInt();
        int age = calcAge(year);
        System.out.println("My name is " + name + " I am " + age + " years old." + "height is " + height + " grade is " + grade + ".");
        // String name = "Muhammed";
        int count = 1;
        while(count <= 10){
            System.out.println("Loading ... "+ count);
            count++;
        }
        if(age > 18){
            System.out.println("eligible to get driving license on LMV");
        } else if (age > 16){
            System.out.println("eligible to get licence for 2 wheeler < 100 cc");
        } else {
            System.out.println("Kid, you are not eligible to get driving license.");
        }
        for(int i=0;i< 10 ; i++){
            System.out.println("iteration on "+ i);
        }

    }

    public static int calcAge(int year){
        int age = 2023 - year;
        System.out.println("Your age is " + age);
        return age;
    }
}