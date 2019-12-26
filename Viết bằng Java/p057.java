package project_euler;

import java.math.BigInteger;

public class bai57 {
    
    public static void main(String[] args) {
        int count=0;
        BigInteger ts = BigInteger.valueOf(3);
        BigInteger ms = BigInteger.valueOf(2);
        for(int i=2;i<=1000;i++)
        {
            ts = ts.add(ms.multiply(BigInteger.valueOf(2))); //ts=ts+ms*2
            ms = ts.subtract(ms); //ms=ts-ms
            if(ts.toString().length() > ms.toString().length())//số chữ số tử > mẫu
                count++;
        }
        System.out.println(count);
    }
    
}
