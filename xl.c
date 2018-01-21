import java.util.Scanner;

public class Square {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);int[] a=new int[8];
        System.out.println("enter 4 points as (x,y) coordinates");
        for(int i=0;i<8;i++)
            a[i]=sc.nextInt();
        if(a[0]==a[2]&&a[4]==a[6]&&a[1]==a[7]&&a[3]==a[5])
                    System.out.println("this coodinates can make square");
        else
            System.out.println("not an square points");
    }
