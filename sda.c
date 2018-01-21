package Guvi;
import java.util.Arrays;
import java.util.Scanner;

public class Dictionary {
	  private String strFind2;
	{
	        int n;
	        String temp;
	        Scanner s = new Scanner(System.in);
	        System.out.print("Enter number of names you want to enter:");
	        n = s.nextInt();
	        String names[] = new String[n];
	        Scanner s1 = new Scanner(System.in);
	        System.out.println("Enter all the names:");
	        for(int i = 0; i < n; i++)
	        {
	            names[i] = s1.nextLine();
	        }
	        for (int i = 0; i < n; i++) 
	        {
	            for (int j = i + 1; j < n; j++) 
	            {
	                if (names[i].compareTo(names[j])>0) 
	                {
	                    temp = names[i];
	                    names[i] = names[j];
	                    names[j] = temp;
	                }
	            }
	        }
	        System.out.print("Names in Sorted Order:");
	        for (int i = 0; i < n - 1; i++) 
	        {
	            System.out.print(names[i] + ",");
	        }
	        System.out.print(names[n - 1]);
	    
	     for (int i = 0; i < n; i++) 
	        {
	            for (int j = i + 1; j < n; j++) 
	            {
	       boolean contains = false;
		String strFind1 = null;
		if(contains)
		{
	                        System.out.println("String array contains String " + strFind1);
	                }
		else
	                {
	                        System.out.println("String array does not contain String " + strFind1);
	                }
	        
	               
	                contains = Arrays.asList(names[i]).contains(names[j]);
	                System.out.println("Does String array contain " + strFind1 + "? " + contains);
	               
	                contains = Arrays.asList(names[i]).contains(names[j]);
	                System.out.println("Does String array contain " + strFind2 + "? " + contains);    
	            }
	        }
	
