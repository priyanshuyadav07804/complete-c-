/*package whatever //do not write package name here */

import java.io.*;

class GFG {
	public static void main (String[] args) {
// 		System.out.println("GfG!");
        int[] arr= {1,3,6,9,5};
        int ig1=3;
        int ig2=9;
        int x1=0;
        int x2=0;
        int c=0;
        int c1=0;
        int sum=0;
        int c2=0;
        for(int i : arr){
            for(int j : arr){
                if(i==j){
                    c++;
                }
            }
        }
        if(c>arr.length){
            System.out.println("array has dublicate elements");
        }
        else{
            System.out.println("array doesn't has dublicate element");
        }
        for(int i=0;i<arr.length;i++){
            if(arr[i]==ig1){
                c1++;
                x1=i;
            }else if(arr[i]==ig2){
                c2++;
                x2=i;
            }
            sum+=arr[i];
        }
        int igsum=0;
        if(c1==c2){
            for(int h=x1;h<=x2;h++){
                igsum+=arr[h];
            }
        }
        System.out.println("sum of remaining element = "+(sum-igsum));
	}
}
