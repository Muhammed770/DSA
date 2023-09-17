import java.util.*;

public class Bst {
  public static int findClosestValueInBst(BST tree, int target) {

    int absDiff = Integer.MAX_VALUE;
    int closestValue = 0;
    while(tree !=null) {
      int currentDiff = Math.abs(tree.value - target);
      if(currentDiff<absDiff) {
        absDiff = currentDiff;
        closestValue = tree.value;
      }
      if(tree.value > target) {
        tree = tree.left;
      } else if(tree.value < target) {
        tree = tree.right;
      } else if (tree.value == target) {
        return tree.value;
      }
    }
    return closestValue;
  }

  static class BST {
    public int value;
    public BST left;
    public BST right;

    public BST(int value) {
      this.value = value;
    }
  }
}
