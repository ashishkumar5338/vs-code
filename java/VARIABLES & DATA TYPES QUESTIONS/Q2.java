// Question 2: In a program, input the side of a square. You have to output the area of the
//   square.

import java.util.*;

public class Q2 {
    public static void main(String args[]){
        int side;
        Scanner sc=new Scanner(System.in);
        side=sc.nextInt();
        System.out.println("Area is = "+side*side);
    }
}