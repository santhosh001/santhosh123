import java.io.IOException;
import java.util.Scanner;

public class gridclr 
{
	public static void main(String[] args)throws IOException
	{
		
		char grid[][]=new char[100][100];
	}
		void getsize()
		{
		System.out.println("Enter the M * N of the grid");
		Scanner s=new Scanner(System.in);
		int m = s.nextInt();
		int n = s.nextInt();
		s.close();
		}
		void color()
		{
			int m = 0;
			for(int i=0;i<m;i++)
			{
				int n = 0;
				for(int j=0;j<n;j++)
				{
					String[][] grid = null;
					if(j%2==0)
					{
						grid[i][j]="black";
					}
					else
					{
						grid[i][j]="white";
					}
				
			}
			}
		}
		public  void main1(String args[])
		{
			this.getsize();
			this.color();
		    char[][] grid = null;
			char gr[][]=grid;
			for(char[] g:gr)
			{
			System.out.println(g);
			}
		}
