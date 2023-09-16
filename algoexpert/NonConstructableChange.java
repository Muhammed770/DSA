import java.util.*;

class NonConstructibleChange {
  public int nonConstructibleChange(int[] coins) {
    // TreeSet<Integer> treeSet = new TreeSet<>();
    Arrays.sort(coins);
    int minChange=0;
    for(int coin : coins) {
      if(coin>minChange+1) {
        return minChange+1;
      } else {
        minChange+=coin;
      }
    }
    //
    return minChange+1;
  }
}
