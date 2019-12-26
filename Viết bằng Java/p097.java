package project_euler;

import java.math.BigInteger;

public class bai97 {
    
    public static void main(String[] args)
    {
        BigInteger result = BigInteger.valueOf(2).pow(7830457); //rs=2^7830457 
        result = result.multiply(BigInteger.valueOf(28433)); //rs=28433*2^7830457
        result = result.add(BigInteger.ONE); //rs=28433*2^7830457+1
        result = result.mod(BigInteger.TEN.pow(10)); //lấy dư 10 số cuối
        System.out.println(result);
    }
    
}
