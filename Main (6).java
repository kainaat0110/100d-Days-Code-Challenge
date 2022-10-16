/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
	public static void main(String[] args) {
	    boolean b;
	    b = false;
	    System.out.println("b is " +b);
	    b = true ;
		System.out.println("b is now " +b);
		if(b){
		    System.out.println("This is executed");
		}
		b = false;
		if(b){
		    System.out.println("This is Printed?");
		} 
		System.out.println("9 < 10 " +(9<10));
	}
}
