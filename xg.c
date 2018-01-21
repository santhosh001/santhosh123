public class Step {
	public static int steps(int [] a)
	{
		int step=a[0];
		int max=a[0];
		int jump=1;
		if(a[0]<=1)
		{
			return 0;
		}
		for(int i=0;i<a.length;i++)
		{
			if(a[i]>a[i+1])
			{
				jump++;
			}else if(a[i+1]<a[i])
			{
				jump--;
			}
			
		}
		
		return jump;
		
	}

	public static void main(String[] args) {
		Step s=new Step();
		int b[]={2,3,4,5};
		s.steps(b);


	}

