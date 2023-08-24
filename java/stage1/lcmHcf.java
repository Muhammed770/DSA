public class lcmHcf {
    // Recursive function to find the GCD/HCF of two numbers
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        int num1 = 48;
        int num2 = 18;

        int result = gcd(num1, num2);
        int lcm = num1*num2/ result;
        System.out.println("GCD of " + num1 + " and " + num2 + " is: " + result);
    }
}
