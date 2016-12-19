import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	int n = 26;
	int h[] = new int[n];
	int maxHeight = -1;
	for(int h_i=0; h_i < n; h_i++){
	    h[h_i] = in.nextInt();
	}
	String word = in.next();
	for(int i = 0; i < word.length(); ++i){
	    maxHeight = Math.max(maxHeight, h[word.charAt(i)-'a']); // For each character c in word, we update maxHeight with max(maxHeight, <height of character>]) 
	}                                                           // word.charAt(i)-'a' maps each character to  positions 0 .. 25
	System.out.println(maxHeight*word.length());
    }
}
