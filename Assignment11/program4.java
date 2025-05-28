import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
      
      for(int i = 1;i<=iNo;i++)
      {
          System.out.print("#\t"+i+"\t*\t");
      }
    }
}

class program4
{
    public static void main(String[] args) {
        int iVal = 0;

        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter the number");
        iVal = sobj.nextInt();
         
        Pattern pobj = new Pattern();

        pobj.Display(iVal);
        
    }
}