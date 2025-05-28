import java.util.Scanner;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch ='A';

        for(i=1;i<=iRow;i++)
        {
            for(j=1,ch='A';j<=iCol;j++,ch++)
            {
                System.out.print(ch+"\t");
            }

            System.out.println();
        }

    }
}
class program1
{
  public static void main(String[] args)
 {
    int iVal1 = 0;
    int iVal2 = 0;

    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter the number of rows");
    iVal1 = sobj.nextInt();

    System.out.println("Enter the numeber of columns");
    iVal2 =sobj.nextInt();
    
    Pattern pobj = new Pattern();
    pobj.Display(iVal1, iVal2);


  } 

}