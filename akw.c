 import java.util.Arrays;
import java.util.Scanner;
    public class ArraySorting
    {
        public static void main(String args[])
        {
        	Scanner sc=new Scanner(System.in);
        	String st=sc.nextLine();
        	String[] res=st.split(",");
        	int[] num=new int[res.length];
        	for(int i=0;i<res.length;i++)
        	{
        		num[i]=Integer.parseInt(res[i]);
        	}
        	Arrays.sort(num);
        	for(int l=0;l<num.length;l++)
        	{
        		System.out.println(num[num.length-1-l]);
        	}
        }
