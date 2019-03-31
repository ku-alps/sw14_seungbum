import java.util.ArrayList;
import java.util.Scanner;

public class testMain {

	
	
	public static int recur(int index, ArrayList<Integer>coinvar,int total ,int coinnum) {
		
		int coins=(total/coinvar.get(index));
		total-=coinvar.get(index)*coins;
		
		if(index==0) 
			return coins; 
			
		return coins+recur(index-1,coinvar,total,coinnum);
		
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	ArrayList<Integer> coinvar = new ArrayList<Integer>();
	Scanner scan = new Scanner(System.in);
	
	int coins = scan.nextInt();
	int total = scan.nextInt();

	int coinnum = 0;
	
	for( int i = 0 ; i<coins;i++) 
		coinvar.add(scan.nextInt());	
	
	coinnum =recur(coinvar.size()-1,coinvar,total,coinnum);
	
	System.out.println("´äÀº "+coinnum+" ");
	}

	
}
