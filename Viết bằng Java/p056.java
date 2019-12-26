package project_euler;

import java.math.BigInteger;

public class bai56 {
    
    public static void main(String[] args) {
        int result=0;
        for(int a=1;a<100;a++)
            for(int b=1;b<100;b++)
            {
                BigInteger n = BigInteger.valueOf(a).pow(b); //tính a^b
                String s = n.toString(); //chuyển về chuỗi
                int sum=0;
                for(int i=0;i<s.length();i++) //cộng từng chữ số
                    sum+= s.charAt(i)-'0';
                result = Integer.max(sum,result); //lấy tổng max
            }
        System.out.println(result);
    }
    
}
