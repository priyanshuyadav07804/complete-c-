//program to extract Username from E-Mails;

import java.util.Scanner;
public class Username{
    public static void main(String [] args){
        System.out.print("Enter your E-mail : ");
        Scanner sc= new Scanner(System.in);
        String email=sc.next();
        String userName= "";
        for(int i=0;i<email.length();i++){
            if(email.charAt(i)=='@'){
                break;
            }
            else{
                userName += email.charAt(i);
            }
        }
        System.out.println("Username : "+userName);
    }
}
