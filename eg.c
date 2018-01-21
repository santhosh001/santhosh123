
package PRO;
import java.util.*;
public class coin {
public static void main(String[] args) {
Scanner s=new Scanner(System.in);
System.out.println("Enter the  of coin");
int[] array=new int[3];
for(int i=0;i<array.length;i++){
	array[i]=s.nextInt();
}
System.out.println("Enter the sum value");
int sumcoin=s.nextInt();
//using 1 and 2 coin
System.out.println(sumcoin);
int coinsum1=0;
int coinsum2=0;
int coinsum3=0;
int onecoin=1;
int twocoin=2;
int count=0;
int countone=0;
int temp1=0;
int temp2=0;
int temp3=0;
int a=0,b=0;
int coinname0=0;
int coinname1=0;
int num1=0,num2=0;
for(int i=0;i<sumcoin;i++){
	temp1=temp1+array[0];
	temp2=temp2+array[1];
	temp3=temp3=array[2];
	coinsum1=temp1+temp2;
	coinsum2=temp2+temp3;
	coinsum3=temp1+temp3;
	if(sumcoin==coinsum1){
		coinname0=array[0];
		coinname1=array[1];
		a=array[0];
		b=array[1];
		num1=temp1;
		num2=temp2;
		break;
	}
	if(sumcoin==coinsum2){
		coinname0=array[1];
		coinname1=array[2];
		a=array[1];
		b=array[2];
		num1=temp2;
		num2=temp3;
		break;
	}
	if(sumcoin==coinsum2){
		coinname0=array[0];
		coinname1=array[2];
		a=array[0];
		b=array[2];
		num1=temp1;
		num2=temp3;
		break;
	}
}
System.out.println("The coin name is"+coinname0+" "+coinname1);

System.out.println("The coin count is"+((num1/a)+(num2/b)));
}
