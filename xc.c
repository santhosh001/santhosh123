package guvi;
import java.util.*;
public class VogonsProblem {
	public static void main(String [] args) {
		Scanner s = new Scanner(System.in);
		System.out.println( "Enter the size of the array elements : " );
		int size = s.nextInt();
		System.out.println( "Enter the array Elements : " );
		int array[][] = new int[size][size];
		for( int i = 0 ; i < size ; i++ ) {
			for( int j = 0 ; j <size ; j++ ) {
				array[i][j] = s.nextInt();
			}
		}
		System.out.println( "Output : " + ( array[0][0] + array[0][size-1] + array[size-1][0] + array[size-1][size-1] ) );
		s.close();
	}
