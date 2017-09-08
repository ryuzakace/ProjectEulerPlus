/*
What do you get when you cross an answer with a pen?
An F.
*/

import java.util.*;
import java.math.BigInteger;
public class Problem015 
{
	public static void main(String[] args) 
	{
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		long a [][]=new long [2][t];
		for(int i=0;i<t;i++)
		{
			a[0][i]=sc.nextLong();
			a[1][i]=sc.nextLong();
		}
		for(int i=0;i<t;i++)
		{
			long num=a[0][i];
			long r=a[1][i];
			num+=r;
			BigInteger mod=new BigInteger("1000000007");
			System.out.println((factorial(num).divide(factorial(r).multiply(factorial(num-r)))).remainder(mod));        
		}
	}
	public static BigInteger factorial( long fn )
	{
		BigInteger num = BigInteger.ONE;
		for (long i = 1; i <= fn; i ++) 
		{
			num = num.multiply(BigInteger.valueOf(i));          
		}
		return num;
	}
}
