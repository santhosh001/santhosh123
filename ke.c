# Trival
import java.util.*;
import java.io.*;

public class Trival{

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int n1=s.nextInt();
		int a[][]=new int[n][n1];
		int b[][]=new int[n][n1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n1;j++)
			{
				a[i][j]=s.nextInt();	
				b[i][j]=a[i][j];
			}	
		}
		System.out.println("original code:");
		for(int i=0;i<n;i++)
		{
		for(int j=0;j<n1;j++)
 		{
     		System.out.print(a[i][j]+" ");
		}
			System.out.println("\n");
    	}
		System.out.println("Ascending order :");
		
for(int i=0;i<n;i++)
{
	for(int j=0;j<n1;j++)
	{
		for(int k=(j+1);k<n1;k++)
		{
			if(a[i][j]>a[i][k])
			{
				int temp=a[i][j];
				a[i][j]=a[i][k];
				a[i][k]=temp;
			}}}}
for(int i=0;i<n;i++)
{
for(int j=0;j<n1;j++)
	{
		System.out.print(a[i][j]+" ");
}
	System.out.println("\n");
}
System.out.println("decending order :");
for(int j=0;j<n1;j++)
{
	for(int i=0;i<n;i++)
	{
		for(int k=i+1;k<n;k++)
		{
			if(b[i][j]>b[k][j])
			{
				int temp=b[i][j];
				b[i][j]=b[k][j];
				b[k][j]=temp;
			}
		}
	}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n1;j++)
	{
		System.out.print(b[i][j]+" ");
}
	System.out.println("\n");
}
	}

