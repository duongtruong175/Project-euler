package project_euler;

import java.math.BigInteger;

public class bai53 {
    
    static BigInteger giaiThua(int n)
    {
        BigInteger rs = new BigInteger("1");//rs=1
        for(int i=2;i<=n;i++)
            rs = rs.multiply(BigInteger.valueOf(i)); //rs=rs*i
        return rs;
    }
    public static void main(String[] args) {
        int count=0;
        for(int n=1;n<=100;n++)
            for(int i=0;i<=n;i++)
            {
                BigInteger temp = giaiThua(n).divide(giaiThua(i).multiply(giaiThua(n-i)));
                if(temp.toString().length()>6) //rs>1000000
                    count++;
            }
        System.out.println(count);
    }
    
}