public class WrapperClass {
    public static void main (String a[]){
        int No1  = 0;
        Integer No2 =0;
        System.out.println(No1);
        System.out.println(No2);

        int X= No2;                 //Auto Un-Boxing
        System.out.println(X);      //Auto Boxing

        int Y = No1;
        System.out.println(Y);
    }
}
/*
    Premitive Data type         Wrapper class

1       boolean                 Boolean
2       byte                    Byte
3       char                    Character
4       short                   Short
5       int                     Integeer
6       float                   Float
7       double                  Double
8       long                    Long


*/ 