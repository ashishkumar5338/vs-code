// Question 1 : In a program, input 3 numbers : A, B and C. You have to output the average of
//   these 3 numbers.

import java.util.*;

public class Q1 {
    public static void main(String args[]){
        int a,b,c;
        Scanner sc=new Scanner (System.in);
        a=sc.nextInt();
        c=sc.nextInt();
        b=sc.nextInt();
        System.out.println("a + b + c = " + (a+b+c)/3);
    }
}