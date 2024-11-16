public class finaldemo3 {
    public static void main(String a[]){
        // final int A;
        demo obj = new demo(11,21);

        System.out.println("Value  of No1 :"+obj.No1 );
        System.out.println("Value of No2 :"+obj.No2);

        obj.No1++;
        obj.No2++;      //obj.No2 =obj.No2 +1;
    }
}

class demo{
        public int No1;
        final public int No2;       // const int No2 = 21;
        public demo(int A, int B){
            No1 = A;
            No2 = B;
        }
}
