import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class algori1 {


public class Fashion {

	int num;
	String type;
	
	public Fashion(String type) {
		this.num=1;
		this.type=type;
		
	}
	
	
}
	
	public int sort(ArrayList<Fashion> wardrobe) {
		
		int x=1;
		Scanner scan = new Scanner(System.in);
		int outfitnum = scan.nextInt();
		ArrayList<Fashion>var = new ArrayList<Fashion>();
		scan.next();
		String type1 = scan.next();
		var.add(new Fashion(type1));
		System.out.println("1" + var.size());
		for( int i = 1 ; i< outfitnum ; i++) {
			String item = scan.next();
			String type = scan.next();
			boolean check = false;
			
			for(int j = 0 ; j<var.size();j++) {
			
				if(var.get(j).type.equals(type)) {	
					check =true;
					var.get(j).num++;
					break;
				}	
			}
			if(check==false) 
				var.add(new Fashion(type));
		}

		System.out.println(var.size()+"var size");
		for(int i = 0 ; i<var.size();i++) {
		
			x=x*(var.get(i).num+1);
	}
		x=x-1;
	
		return x;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	Scanner scan = new Scanner(System.in);
	ArrayList<Fashion> wardrobe = new ArrayList<Fashion>();
	algori1 x = new algori1();
	int casenum = scan.nextInt();
	
	for(int i = 0 ; i< casenum ;i++)
		x.sort(wardrobe);
	

	}	
	
	}
	
	

