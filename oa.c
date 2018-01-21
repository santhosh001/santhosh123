# Divide
import java.util.*;
public class Divide {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of arrray");
		Integer a=sc.nextInt();
		System.out.println("Enter the elements in array");
		int[] n=new int[a];
		int sum1=0,sum2=0,limit;
		for(int l=0;l<a;l++)
			n[l]=sc.nextInt();
		if(a%2!=0)
		limit=(a/2)+1;
		else
		limit=a/2;
		for(int i=0;i<limit;i++)
			sum1=sum1+n[i];
		for(int j=limit;j<a;j++)
			sum2=sum2+n[j];
		int avg=a-limit;
		int ans1=sum1/limit;
		int ans2=sum2/avg;
		if(ans1==ans2){
			System.out.print("[");
		for(int k=0;k<limit;k++){
			System.out.print(n[k]);
			if((k+1)!=limit)
				System.out.print(",");
		}
		System.out.print("],[");
		for(int m=limit;m<a;m++){
			System.out.print(n[m]);
			if((m+1)!=a)
				System.out.print(",");
		}
		System.out.print("]");
		}
		else
			System.out.println("Not Possible");
	}

