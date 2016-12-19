import java.util.*;

public class Solution {
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	int x1 = in.nextInt();
	int v1 = in.nextInt();
	int x2 = in.nextInt();
	int v2 = in.nextInt();
	System.out.println(sameLocation(x1,x2,v1,v2) ? "YES" : "NO");
    }

    public static boolean sameLocation(int x1, int x2, int v1, int v2) {
	if(x1==x2) return true;                               // If already in the same position, return true
	if(v1==v2 && x1!=x2) return false;                    // Same speed, but different starting positions, return false
	int x = (x1*v2 - v1*x2)/(v2-v1);                      // Solution to final position: x1'(k) = x1 + v1*k;  x2'(k) = x2 + v2*k; find k0 such that x1'(k0) = x2'(k0) and find final position x = x1'(k0) = x2'(k0) 
	if(x < x1 || x < x2) return false;                    // Return false if it is not a proper solution (case where k is negative)
	if((x-x1)%v1 == 0 && (x-x2)%v2 == 0) return true;     // Return true if k is integer
	return false;                                         // Otherwise, return false
    }
}
