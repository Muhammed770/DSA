import java.util.Scanner;

public class pattern5{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number");
        int n = sc.nextInt();
        // int n =4;
        // int mid = n -1;
        pattern22(n);
    }

    public static void pattern22(int n){
        for(int i=0; i<2*n -1; i++){
            for(int j=0;j<2*n -1;++j){
                int top = i;
                int left = j;
                int bottom = (2*n-2 ) - i;
                int right = (2*n -2 ) - j;
                System.out.print(n - getMin(getMin(top,bottom),getMin(left,right)));
            }
            System.out.println();
        }
    }

    public static int getMin(int a, int b){
       int min = Math.min(a,b);
       return min;
    }
}


// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
