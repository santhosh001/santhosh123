package practice;



import java.util.Scanner;

public class Lcmilestone1 {

	      public static void main(String args[]) {  
	           Scanner sc = new Scanner(System.in);  
	           System.out.println("Enter the String:-");  
	           String str = sc.nextLine();  
	           System.out.println("Enter the length");  
	           int c = sc.nextInt();  
	           int g=str.length();
	          sc.close();
	           System.out.println(""+str.substring(g-c, g) );  
	           System.out.println(""+str.substring(0, c) );  
	      }  
