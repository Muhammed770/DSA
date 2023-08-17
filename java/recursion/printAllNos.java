import java.util.Arrays;

public class printAllNos {
    public static int[] printNos(int x) {
        if(x<=0){
            return new int[0];
        }else {
            int[] result = printNos(x-1);
            int[] newArray = Arrays.copyOf(result,result.length+1);
            newArray[result.length] = x;
            return newArray;
        }
    }

    public static void main(String[] args){
        int x=10;
        int[] result = printNos(x);
        System.out.println(Arrays.toString(result));
    }
    
}