import java.util.HashMap;
import java.util.Map;

public class HashMapExample{
    public static void main(String[] args){
        Map<String , Integer> scores= new HashMap<>();
        scores.put("muhammed",100);
        scores.put("taslim",35);
        scores.put("shiyas",45);
        scores.put("azmi",55);
        scores.put("zain",75);
        System.out.println("scores : " + scores); 
    }
}