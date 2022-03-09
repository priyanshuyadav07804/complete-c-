/*package whatever //do not write package name here */
// Format and print the double value such that it has :
// comma (or locale specific) delimiters
// a minimum width of 12 characters (put numbers in the front if the number is smaller)
// only 3 decimal points
// a sign indicator (+ or -)
// instead of spaces put zeros(0's) to the left if the number is smaller

import java.io.*;

class GFG {
	public static void main (String[] args) {
		
		//Double d = Double.parseDouble(args[0]);  //for command line argument
		//String s = new String("2000");
		//String s = new String("-250");
		String s = new String("0");
		Double d = Double.parseDouble(s);
		if(d>0){
		    System.out.printf("%+,012.3f%n",d); 
		}
		else if(d<0){
		    System.out.printf("%-,012.3f%n",d);
		}
		else{
		    System.out.printf("%,012.3f%n",d);
		}
	}
}
