import java.util.*;

public class Solution {

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	int s = in.nextInt();
	int t = in.nextInt();
	int a = in.nextInt();
	int b = in.nextInt();
	int m = in.nextInt();
	int n = in.nextInt();
	int apples = 0;
	for(int apple_i=0; apple_i < m; apple_i++){
	    int p = in.nextInt();
	    if(p+a >= s && p+a <= t) apples++;
	}
	System.out.println(apples);
	int oranges = 0;
	for(int orange_i=0; orange_i < n; orange_i++){
	    int p = in.nextInt();
	    if(b+p >= s && p+b <= t) oranges++;
	}
	System.out.println(oranges);
    }
}
