package project_euler;

import java.math.BigInteger;

public class bai48 {
    
    public static void main(String[] args) {
        BigInteger sum = BigInteger.ZERO ; //sum=0
        for(int i=1;i<=1000;i++)
            sum = sum.add(BigInteger.valueOf(i).pow(i)); //sum+=i^i
        BigInteger result = sum.mod(BigInteger.TEN.pow(10));//chia dư cho 10^10 để lấy 10 chữ số cuối
        System.out.println(result);
    }
       
}
