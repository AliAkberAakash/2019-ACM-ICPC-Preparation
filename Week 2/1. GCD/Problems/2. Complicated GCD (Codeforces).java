/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here

		BigInteger x,y,z;
		Scanner in = new Scanner(System.in);

		x=in.nextBigInteger();
		y=in.nextBigInteger();
		z=x;

		for(BigInteger i = x; i.compareTo(y)!=1; i=i.add(new BigInteger("1")))
			z=z.gcd(i);

		System.out.println(z);

		in.close();
	}
}
