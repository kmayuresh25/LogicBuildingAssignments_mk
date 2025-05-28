import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
      
      for(int i = 1;i<=iNo;i++)
      {
          System.out.print(2*i+"\t");
      }
    }
}

class program5
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