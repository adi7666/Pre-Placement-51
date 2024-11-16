import java.util.*; 
class Collection {
    public static void main(String A[])
    {
        LinkedList <Integer> lobj = new LinkedList<Integer>();
        lobj.add(11);
        lobj.add(10);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println(lobj);
        lobj.addFirst(5);
        lobj.addLast(200);

        System.out.println(lobj);

        Iterator iobj = lobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

    }

        
}
