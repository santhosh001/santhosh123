import java.util.*;
public class threedigit
{
static int[] separate(String a)
{
int n[]=new int[a.length()];
for(int i=0;i<a.length();i++)
{
n[i]=a.charAt(i)-48;
}
return n;
}
public static void main(String args[])
{
Scanner scan=new Scanner(System.in);
String a=scan.nextLine();
int n=scan.nextInt();
int a1[]=separate(a);
Arrays.sort(a1);
int re=a1.length-n;
int sum=0;
for(int i=0;i<re;i++)
{
sum=sum*10+a1[i];
}
System.out.print(sum);
}
