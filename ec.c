package Guvi;
import java.util.Scanner;
public class SubString {
	
	    public static int[][] inp;
	    public static int[][] tmp;
	    public static int max_row = 0, max_col = 0, max = 0;
	    
	    public static void computeDynamicMatrix(){
	        for(int i = 1;i < tmp.length;i++)
	            for(int j = 1;j < tmp[i].length;j++){
	                if(inp[i][j] != 0){
	                    tmp[i][j] = Math.min( Math.min(tmp[i][j-1], tmp[i-1][j]), tmp[i-1][j-1]) + 1;
	                    if(tmp[i][j] > max){
	                        max = tmp[i][j];
	                        max_row = i;
	                        max_col = j;
	                    }
	                }
	                else
	                    tmp[i][j] = 0;
	            }
	    }
	    
	    public static void main(String[] args) {
	        Scanner s = new Scanner(System.in);
	        
	        System.out.println("Enter number of rows and columns :");
	        inp = new int[s.nextInt()][s.nextInt()];
	        tmp = new int[inp.length][inp[0].length];
	        
	        System.out.println("Enter the matrix :");
	        for(int i = 0;i < inp.length;i++)
	            for(int j = 0;j < inp[0].length;j++){
	                inp[i][j] = s.nextInt();
	                if(i == 0 || j == 0){
	                    tmp[i][j] = inp[i][j];
	                }
	            }
	        
	        computeDynamicMatrix();
	        
	        System.out.println("The maximum square matrix with all 1's is from ("+ ( max_row - max + 1 ) +","+ ( max_col - max + 1 ) +") to ("+ max_row +","+ max_col +")");
	        for(int i = max_row - max + 1;i <= max_row;i++){
	            for(int j = max_col - max + 1;j <= max_col;j++){
	                System.out.print(inp[i][j]+" ");
	            }
	            System.out.println();
	        }
	    }
