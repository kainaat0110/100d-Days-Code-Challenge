/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
	    int x,y;
	    x=10;
	    y = 20;
	    if(x<y){
	        System.out.println("x < y\n");
	    }
	    x = x * 2;
	    if(x==y){
	        System.out.println("X is equal to Y!\n");
	    }
	    x = x * 2;
	    if(x==y){
	        System.out.println("X is equal to Y!\n");
	    }
		else{
		    System.out.println("X is not equal to Y!\n");
		}
	}
}
