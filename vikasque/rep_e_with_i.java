// input string from user and create new string result such that "e" is
// replaced with "i"
//Ex-
// original="eabcdef"
// result="iabcdif"

// original = "xyz"
// result = "xyz"
import java.util.*;
public class rep_e_with_i{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter original String : ");
        String original=sc.next();
        String result = "";
        for(int i=0;i<original.length();i++){
            if(original.charAt(i ) == 'e'){
                result += 'i';
            }
            else{
                result += original.charAt(i);
            }
        }
        System.out.println("original = "+original);
        System.out.println("result = "+result);
    }
}
