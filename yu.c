import java.util.Scanner;

public class maxnumcount {
    public static void main(String[] args) {
        int i,max=0,c=0;
        int[] a=new int[10];
        Scanner obj=new Scanner(System.in);
        for(i=0;i<10;i++)
              a[i]=obj.nextInt();
        for(i=0;i<10;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        System.out.println("max num in array is:"+max);
        for(i=0;i<10;i++)
        {
            if(a[i]==max)
        c++;
                }
        System.out.println("count is:"+c);
    }
