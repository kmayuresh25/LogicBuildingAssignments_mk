import java.util.Scanner;

class DigitDisplay
{
    public void Display(int iNo)
    {
      
      for(int i = iNo;i>=1;i--)
      {
          System.out.print(i+"\t#\t");
      }
    }
}

class program2
{
    public static void main(String[] args) {
        int iVal = 0;

        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter the number");
        iVal = sobj.nextInt();
         
        DigitDisplay dobj = new DigitDisplay();

        dobj.Display(iVal);
        
    }
}