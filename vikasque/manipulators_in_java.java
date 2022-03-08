/*package whatever //do not write package name here */

import java.io.*;

class GFG {
	public static void main (String[] args) {
// 		System.out.println("GfG!");
		System.out.printf("%6d%n",2435);    //  2435//
		System.out.printf("%06d%n",2435);   //002435//
// 		System.out.printf("%*6d%n",2435);   //error
        System.out.printf("%+6d%n",2435);   // +2435//
        System.out.printf("%+06d%n",2435);  //+02435//
        System.out.printf("%,6d%n",2435);   // 2,435//
        System.out.printf("%,06d%n",2435);  //02,435//
        System.out.printf("%+,6d%n",2435);  //+2,435//
        System.out.printf("%-,6d%n",2435);  //2,435 //
        System.out.printf("%+,06d%n",2435); //+02,435//
        System.out.printf("%,06d%n",243);   //000243//
        System.out.printf("%,6d%n",243);    //   243//
        System.out.printf("%+6d%n",243);    //  +243//
        System.out.printf("%+06d%n",243);   //+00243//
        System.out.printf("%3d%n",2435);    //2435//
        
	}
}
