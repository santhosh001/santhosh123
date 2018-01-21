package pro;
import java.util.*;
public class pro17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner scan=new Scanner(System.in);
int n=scan.nextInt();
int d=n;
int value=scan.nextInt();
int p=1;int seed=1;int rem=0;
while(n>0){
	rem=n%10;
	p*=rem;
	n=n/10;
	}
System.out.println(p);
 seed=d*p;
System.out.println(seed);
if(seed==value){
	System.out.println("seed");
}else{
	System.out.println("not seed");
}
	}

