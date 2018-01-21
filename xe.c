package Guvi;

import java.io.*;
import java.util.*;




public class HourglassProblem{

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter no of row");
        int row=in.nextInt();
        System.out.println("Enter no of Columns");
        int column=in.nextInt();
       int newVal=0;
       int max=-(Integer.MAX_VALUE);
        int arr[][] = new int[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                arr[i][j] = in.nextInt();
            }
        }
        for(int i=0;i<row-2;i++){
        	for(int j=0;j<column-2;j++){
        		newVal=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        		if(max>newVal)
        			newVal=max;
        	}
        }
        System.out.println(newVal);
    }
}
