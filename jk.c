package beginner;

import java.util.Scanner;

public class Tower {
	public void solve(int n,String start,String auxillary,String end)
	{
		if(n==1)
		{
			System.out.println(start+"->"+end);
			
		}
		else
		{
			solve(n-1,start,end,auxillary);
			System.out.println(start+"->"+end);
			solve(n-1,auxillary,start,end);
			
			
		}
	}
	public static void main(String[] args) {
		Tower ts=new Tower();
		System.out.println("enter number of discs");
		Scanner sc=new Scanner(System.in);
		int discs=sc.nextInt();
		ts.solve(discs,"a","b","c");
	}

