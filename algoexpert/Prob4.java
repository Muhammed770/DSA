import java.util.*;

class Prob4 {
  public String tournamentWinner(
    ArrayList<ArrayList<String>> competitions, ArrayList<Integer> results
  ) {
    HashMap <String,Integer> hmap = new HashMap<>();
    for(int i=0;i<results.size();++i) {
      if(results.get(i) == 1) {
        if(hmap.get(competitions.get(i).get(0)) == null) {
          hmap.put(competitions.get(i).get(0),3);
        } else {
          hmap.put(competitions.get(i).get(0), hmap.get(competitions.get(i).get(0)) + 3);
        }
      }else if(results.get(i) == 0) {
        if(hmap.get(competitions.get(i).get(1)) == null) {
          hmap.put(competitions.get(i).get(1),3);
        } else {
          hmap.put(competitions.get(i).get(1), hmap.get(competitions.get(i).get(1)) + 3);
        }
      }
    }
    String winner="";
    Integer maxScore=0;
    for(Map.Entry <String,Integer> entry : hmap.entrySet()) {
      if(entry.getValue()>maxScore) {
        maxScore = entry.getValue();
        winner = entry.getKey();
      }
    }

    
    return winner;
  }
}

