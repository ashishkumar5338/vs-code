// Question 3: Enter cost of 3 items from the user (using float data type) - a pencil, a pen and
//   an eraser. You have to output the total cost of the items back to the user as their bill.

import java.util.*;

public class Q3{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        float pencil=sc.nextFloat();
        float pen=sc.nextFloat();
        float eraser=sc.nextFloat();

        float total=pencil+pen+eraser;
        System.out.println("Total is = "+total);
        
        float gst=total + total*(float)(0.18);
        System.out.println("Total(with GST) is = "+gst);
    }
}