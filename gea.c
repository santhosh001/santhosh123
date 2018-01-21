package square;
import java.util.*;
public class CostGuvi {
public static void main(String []args){
	Scanner s=new Scanner(System.in);
	System.out.println("Enter two Strings");
	String string1=s.nextLine();
	String string2=s.nextLine();
	s.close();
	String string3="";
	int cost=0;
	do{
		for(int i=0;i<string1.length();i++){
			if(string1.charAt(i)!=string2.charAt(i)){
				cost+=3;
				string3+=string2.charAt(i);
				cost+=4;
			}
			else if(string1.charAt(i)==string2.charAt(i)){
				string3+=string1.charAt(i);
				}
				}
		string1="";
		string1=string3;
	}while(string1.equals(string2));
	System.out.println(string1+" "+cost);
}
