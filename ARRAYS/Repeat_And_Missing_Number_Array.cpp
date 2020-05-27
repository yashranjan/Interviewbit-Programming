public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public ArrayList<Integer> repeatedNumber(final List<Integer> A) {
        ArrayList<Integer> arr=new ArrayList<>(2);
        long c=0,k=0,n=A.size();
        for(int i=0;i<A.size();i++){
            long l=A.get(i);
            c+=(long)i+1-l;
            k+=(long)(i+1)*(long)(i+1)-(l*l);
        }
        int missing=(int)((c*c+k)/(2*c));
        int repeating=(missing-(int)c);
        arr.add(repeating);
        arr.add(missing);
        return arr;
    }
}
