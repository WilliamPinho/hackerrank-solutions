import java.util.*;

public class Solution {

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	long a = in.nextLong();
	long b = in.nextLong();
	long c = in.nextLong();
	long d = in.nextLong();
	long e = in.nextLong();
	long min = Math.min(a,Math.min(b,Math.min(c,Math.min(d,e))));
	long max = Math.max(a,Math.max(b,Math.max(c,Math.max(d,e))));
	System.out.println((a+b+c+d+e-max) + " " + (a+b+c+d+e-min));
    }
}
