import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.HashMap;

public class Solution {
    private static HashMap<Long, Long> memo = new HashMap<>();
    
    static {
        memo.put(1L, 1L);
    }

    public static List<Long> factorialNumbers(Long n) {
        List<Long> result = new ArrayList<>();
        for (Long i = 1L; i <= n; ++i) {
            Long factorial = fact(i);
            if (factorial <= n) {
                result.add(factorial);
            } else {
                break;
            }
        }
        return result;
    }

    public static Long fact(Long n) {
        if (memo.containsKey(n)) {
            return memo.get(n);
        } else {
            Long factorial = n * fact(n - 1);
            memo.put(n, factorial);
            return factorial;
        }
    }

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        Long n = sc.nextLong();
        List<Long> result = factorialNumbers(n);

        for (Long num : result) {
            System.out.print(num + " ");
        }
        sc.close();
    }
}
