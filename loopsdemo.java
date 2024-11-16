class loopsdemo{
    public static void main(String A[]){
        int i =0;
        System.out.println("Output by using For loops");
        for(i =1; i<5; i++){
            System.out.println(i);
        }
        i =1;
        System.out.println("Output by using while loops");
        while(i<=5){
            System.out.println(i);
            i++;
        }
        System.out.println("output in do while ");
        i =1;
        do{
            System.out.println(i);
            i++;
        }while(i<=5);
    }
}