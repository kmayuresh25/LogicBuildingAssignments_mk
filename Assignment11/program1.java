import java.util.Scanner;

class DigitDisplay
{
    public void Display(int iNo)
    {
      char ch = 'A';
      for(int i = 1;i<=iNo;i++,ch++)
      {
          System.out.print(ch+"\t");
      }
    }
}

class program1
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