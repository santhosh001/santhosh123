import java.io.*;
import java.util.*;
public class MinimunCuts {
public static void main(String args[])throws IOException
{
	int testCase,i,m,n,cuts;
	String input;
	
	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	List<String>list=new ArrayList<String>();
	System.out.println("Enter the number of test cases");
	testCase=Integer.parseInt(br.readLine());
	for(i=0;i<testCase;i++)
	{
	 	input=br.readLine();
	 	list.add(input);
	}
	for(String s:list)
	{
		m=Character.getNumericValue(s.charAt(0))-1;
		n=Character.getNumericValue(s.charAt(2))-1;
		cuts=m+n;
		System.out.println(cuts);
	}
}
