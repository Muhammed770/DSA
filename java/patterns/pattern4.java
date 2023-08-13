import java.util.Scanner;

public class pattern3{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // System.out.println("enter a number");
        // int n = sc.nextInt();
        int n =4;
        int mid = n -1;
        for(int i=0; i< n; i++){
            for(int k=0; k< mid-i;k++ ){
                System.out.print(" ");
            }
            for(int j=0;j<=i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}




//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 