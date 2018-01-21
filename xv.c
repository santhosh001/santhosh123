package pro.set6;

import java.util.ArrayList;
import java.util.Scanner;

public class P55 {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		char c;
		int t=1;
		ArrayList<Integer> ar=new ArrayList<Integer>();
		do{
			System.out.println("Test case "+t);
			t++;
			System.out.println("Enter the number of elephants of : ");
			int n=in.nextInt();
			int[] weight=new int[n];
			System.out.println("Enter Max weight of spider web supports: ");
			int m=in.nextInt();
			System.out.println("Enter the elephants weights: ");
			for(int i=0;i<weight.length;i++){
				weight[i]=in.nextInt();
			}
			int total=0;
			int count=0;
			for(int i=0;i<weight.length;i++){
				total+=weight[i];
				if(total<=m){
					count++;
				}else{
					break;
				}
			}
			ar.add(count);
			System.out.println("If you wnat to add more test cases press 'y' else press 'n' :");
			c=in.next().charAt(0);
		}while(c=='y'||c=='Y');
		System.out.println("Output of test cases: ");
		for(int a:ar){
			System.out.println(a);
		}
		in.close();

	}
