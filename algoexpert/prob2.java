import java.util.*;

class Program {
  public static boolean isValidSubsequence(
    List<Integer> array, List<Integer> sequence
  ) {
    int check =0;
    int count =0;
    for(int i=0; i<sequence.size(); ++i) {
      for(int j=count;j<array.size(); ++j) {
        ++count;
        if(sequence.get(i) == array.get(j)) {
          System.out.println(sequence.get(i)+" "+array.get(j)+" j : "+j);
          ++check;
          break;
        }
      }
    }
    System.out.print("check : "+check + "sequence size: "+ sequence.size());
    if(check == sequence.size()) {
      return true;
    } else 
     return false;
  }
}
