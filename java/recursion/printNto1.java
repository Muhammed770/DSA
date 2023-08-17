import java.util.Scanner;
import java.util.Arrays;

public class printNto1 {
    public static void main(String[] args) { 
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int[] result = printNos(n);
            sc.close();
            System.out.println("result = [");
            for(int i=0;i<result.length;++i){
                if(i>0){
                    System.out.print(",");
                }else {
                    System.out.print(result[i]);
                }
            }
            System.out.println("]");

    }
   public static int[] printNos(int x) {
        int[] arr = new int[0];
        int[] result = compute(x, arr);
        return (int[])result;
    }

    public static int[] compute(int x,int[] arr) {
        if(x<=0){
            return new int[0];
        }else {
            
            int[] newArray = Arrays.copyOf(arr,arr.length + 1);
            newArray[arr.length] = x;
            int[] result = compute(x-1, newArray);
            return (int[]) result;
            
        }
    }
}
