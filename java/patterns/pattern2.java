import java.util.Scanner;

public class pattern2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // System.out.println("enter a number");
        // int n = sc.nextInt();
        int n =5;
        int mid = n /2;
        for(int i=0; i< n/2+1; i++){
            for(int k=0; k< mid-i;k++ ){
                System.out.print("  ");
            }
            for(int j=1;j<=i*2+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}




//     * 
//   * * * 
// * * * * * 