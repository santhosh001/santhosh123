import java.util.*;
public class pro28 {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("ENTER THE SIZE OF LIST");
		int n=in.nextInt();
		ArrayList<Integer> al=new ArrayList<Integer>();
		System.out.println("ENTER THE LIST VALUES");
		for(int i=0;i<n;i++)
		{
			al.add(in.nextInt());
		}
		Collections.sort(al);
		System.out.println(al);

	}

