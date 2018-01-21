package Guvi;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeMap;
public class TellePhone {
		HashMap<Character,Integer> hash=new HashMap<>();
		TreeMap<String,Integer> hash2=new TreeMap<>();
		public TellePhone()
	  {
			hash.put('A',2);
			hash.put('B',2);
			hash.put('C',2);
			hash.put('D',3);
			hash.put('E',3);
			hash.put('F',3);
			hash.put('G',4);
			hash.put('H',4);
			hash.put('I',4);
			hash.put('J',5);
			hash.put('K',5);
			hash.put('L',5);
			hash.put('M',6);
			hash.put('N',6);
			hash.put('O',6);
			hash.put('P',7);
			hash.put('R',7);
			hash.put('S',7);
			hash.put('T',8);
			hash.put('U',8);
			hash.put('V',8);
			hash.put('W',9);
			hash.put('X',9);
			hash.put('Y',9);
			
		}
	        public void TellephoneEx(String[] str)
	        {
	        	
	        	for(int i=0;i<str.length;i++)
	          {
	        		String str2="";
	        		for(int j=0;j<str[i].length();j++)
	            {
	        			
	        			char c=str[i].charAt(j);
	        			if(str2.length()==3)
	        				str2+='-';
	        			if(Character.isAlphabetic(c))
	             {
	        				int f=hash.get((Character)c);
	        				str2+=f;
	        			}
	        			else if(Character.isDigit(c))
	        				str2+=c;
	        			
	        		}
	        		System.out.println(str2);
	        		if(!hash2.containsKey(str2))
	        		    hash2.put(str2, 1);
	        		else if(hash2.containsKey(str2))
	        			hash2.put(str2,hash2.get(str2)+1);
	        	}
	        	Set set=hash2.keySet();
	        	Iterator it=set.iterator();
	        	while(it.hasNext()){
	        		String key=(String) it.next();
	        		if(hash2.get(key)>1)
	        			System.out.println(key+"  "+hash2.get(key));	        		
	        	}	        	
	        }
		public static void main(String[] args) {
			Scanner scr=new Scanner(System.in);
			System.out.println("Enter the Number of numbers");
			int n=scr.nextInt();

			String[] str = new String[n];
			for(int i=0;i<n;i++){
			
				str[i]=scr.next();
				
			}
			
			TellePhone tele=new TellePhone();
			System.out.println(str[0].length());
			tele.TellephoneEx(str);

		}

