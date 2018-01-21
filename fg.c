
package PRO;
import java.util.*;
public class Binary {
public static void main(String[] args) {
	Scanner s=new Scanner(System.in);
	int n=s.nextInt();
	int count=0;
	int i=1;
	do{
		count=0;
		String str1="";
		String str=Integer.toBinaryString(i);
		i++;
		int m=Math.abs(str.length()-n);
		for(int j=0;j<m;j++){
			str1=str1+"0";
		}
		str1=str1+str;
		System.out.println(str1);
		for(int k=0;k<n;k++){
			char ch=str1.charAt(k);
			if(ch=='1'){
				count++;
			}
		}
		
		System.out.println(count);
	}while(count!=n);
	}

