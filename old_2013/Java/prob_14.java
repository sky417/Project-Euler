
public class prob_14 {

	private final static int NUM = 1000000;
	
	private static int numSeq(long in) {
		
		//if (in == 1) return 1; 
		
//		else if (in%2 == 0) {
//			// even
//			return 1 + numSeq(in/2);
//		}
//		else {
//			// odd
//			return 1 + numSeq(3*in + 1);
//		}
		int res = 0;
		
//		System.out.println("checking " + in);
		
		while (in != 1) {
			
			if (in%2 == 0) 
				in /= 2;
			else in = in*3 +1;
			
			res++;
		}
		
		return res;
	}
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		@SuppressWarnings("unused")
		int max = 0, maxindex;
		
		for (int i=NUM; i>0; i--) {
			if (max < numSeq(i)) {
				maxindex = i;
				max = numSeq(i);
				System.out.println("new max: " + i + ", " + numSeq(i));
			}
		}
		
		System.out.println("result: " + max);
		
	}

}
