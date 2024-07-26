import java.util.Scanner;  
import java.math.BigInteger; 

public class Main{ 
	static BigInteger fib(int n){ 
		BigInteger a = BigInteger.valueOf(0); 
		BigInteger b = BigInteger.valueOf(1); 
		BigInteger c = BigInteger.valueOf(1); 
		for (int j=2 ; j<=n ; j++) 
		{ 
			c = a.add(b); 
			a = b; 
			b = c; 
		} 

		return (b); 
	} 
	public static void main(String[] args){ 
		int n;
		Scanner leitor = new Scanner(System.in);
		while(leitor.hasNext()){
			n = leitor.nextInt();
			System.out.println(fib(n)); 
		}
		leitor.close();
	} 
}