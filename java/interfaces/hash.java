import java.util.Set;
import java.util.HashSet;
public class hash{
    public static void main(String[] args){
        Set<Integer> numbers = new HashSet<>();
        numbers.add(5);
        numbers.add(10);
        numbers.add(5);
        System.out.println("numbers : " + numbers); 
    }
}