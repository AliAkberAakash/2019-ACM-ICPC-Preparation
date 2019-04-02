/*
* Date: 29/3/2019
* Author: Ali Akber Aakash
* Problem source: https://www.hackerrank.com/challenges/power-of-large-numbers/problem
* Short description: Find power of large Numbers
* Verdict: AC
* Email: ali852609@gmail.com
*/
import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;

public class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        int t;
        BigInteger mod1 = new BigInteger("1000000007");
        BigInteger mod2 = new BigInteger("1000000006");
        BigInteger a,b;
        Scanner in = new Scanner(System.in);

        t=in.nextInt();
        for(int i=0; i<t; i++)
        {
            a=in.nextBigInteger();
            a=a.mod(mod1);
            b=in.nextBigInteger();
            b=b.mod(mod2);
            System.out.println(a.modPow(b,mod1));
        }

        in.close();

    }
}
